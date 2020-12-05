#include <stdio.h>

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
	for (int i = 1; i <= 30; i++)
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
	} 
	
	return 0; 
	
}
