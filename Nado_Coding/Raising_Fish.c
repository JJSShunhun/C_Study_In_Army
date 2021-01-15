#include <stdio.h>
#include <time.h>

// 물고기가 6마리가 있어요
// 이들은 어항에 살고 있는데, 사막이에요
// 사막이 너무 더워서, 너무 건조해서 물이 빨리 증발을 해요
// 물이 다 마르기 전에 부지런히 어항에 물을 줘서 물고기를 살려주세요
// 물고기는 시간이 지날수록 점점 커져서... 나중에는... 회소주 뚝딱

int level;
int arrayFish[6];
int * cursor;

void initData();
void printfFishes();

int main(void)
{
	long startTime = 0; // 게임 시작 시간
	long totalTime = 0; // 총 경과 시간
	long prevTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)
	
	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();
	
	cursor = arrayFish; // cursor[0] ... cursor[1] ..
	
	startTime = clock(); // 현재 시간을 (1000분의 1초) 단위로 반환
	while (1)
	{
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf("%d", &num);
		
		// 입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다\n");
			continue;
		}
		
		// 총 경과 시간
		totalTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalTime);
		
		// 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevTime = totalTime - prevTime;
		printf("최근 경과 시간 : %ld 초\n", prevTime);
	}
	
	return 0;
}

void initData()
{
	level = 1; // 게임 레벨 (1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; //어항의 물 높이 (0-100)
	}
}

void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6); // %nd : n개의 공간을 차지
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
}