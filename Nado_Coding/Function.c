#include <stdio.h>

//선언
void p(int num);

int main(void)
{
	// function
	//계산기
	
	int num = 2;
	//printf("num 은 %d 입니다.", num); //2
	p(num);
	
	// 2 + 3 은?
	num = num + 3; // num += 3
	//printf("num 은 %d 입니다.", num); //5
	p(num);
	
	// 5 - 1 은?
	num -= 1; // num = num - 1
	//printf("num 은 %d 입니다.", num); //4
	p(num);
	
	// 4 x 3 은?
	num *= 3;
	//printf("num 은 %d 입니다.", num); //12
	p(num);
	
	// 12 / 6 은?
	num /= 6;
	//printf("num 은 %d 입니다.", num); //2
    p(num);
	
	return 0;
}

//정의
void p(int num) // p: 함수이름 ():전달값
{
	printf("num 은 %d 입니다.", num);
}



