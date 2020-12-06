#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 버스를 탄다고 가정, 학생/일반인으로 구분 (일반인 : 20세)
	/* int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	if (age >= 20)
		printf("일반인 입니다.");
	else
		printf("학생입니다."); */
	
	// 초딩 (8-13), 중딩 (13-16), 고딩 (17-19)
	// if/ else if/ else
	/* int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	if (age >= 8 && age <= 13)
		printf("초등학생 입니다.");
	else if (age >= 14 && age <= 16)
		printf("중학생 입니다.");
	else if (age >= 17 && age <= 19)
		printf("고등학생 입니다.");
	else if (age >= 20)
		printf("성인 입니다.");
	else
		printf("어린이 입니다."); */
	
	// break, continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요");
			break;
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	} */
	
	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번을 제외하고 6번부터 10번까지 조별 발표를  하세요
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.", i);
				continue; // 밑에 과정을 진행하지 않고 바로 위 과정으로 계속
			}
			printf("%d번 학생은 조별 발표 준비를 하세요", i);
		}
		printf("\n");
	} */
	
	// 가위 바위 보
	/* srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("바위\n");
	}
	else 
	{
		printf("몰라요\n");
	} */
	
	/* srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
		case 0:printf("가위\n"); 
			break;
		case 1:printf("바위\n"); 
			break;
		case 2:printf("보\n"); 
			break;
		default:printf("몰라요\n"); 
			break;
	} */
	
	// Up and Down
	srand(time(NULL));
	int num = rand() % 101; // 1 ~ 100 사이의 숫자
	int answer = 0; // 정답
	int chance = 10; // 기회
	while (1) // 1 : 참, 0 : 거짓 <while문 은 참 일때 항상 실행>
	{
		printf("남은 기회 : %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf("%d", &answer);
		
		if (answer > num)
		{
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다! \n\n");
			break;
		}
		else
		{
			printf("오류 발생 \n\n");
		}
		
		if (chance == 0)
		{
			printf("실패! 답은 %d 였습니다.\n", num);
			break;
		}
	}
	
	return 0; 
	
}
