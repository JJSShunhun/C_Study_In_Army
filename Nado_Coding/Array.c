#include <stdio.h>

int main(void)
{
	//배열
	/* int subway_1 = 30; //1번 지하철엔 30명이 타고 있다.
	int subway_2 = 40;
	int subway_3 = 50; */
	
	// 여러 개의 변수를 함께, 동시에 생성
	int subway_array[3]; 
	subway_array[0] = 30; // 배열의 index 값은 항상 0부터 시작
	subway_array[1] = 40;
	subway_array[2] = 50;
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 지하철에 %d 명이 타고 있습니다\n", i+1, subway_array[i]);
	}
	
	return 0;
}