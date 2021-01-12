#include <stdio.h>

void swap(int a, int b);
void swap_addr(int * a, int * b);
void changeArray(int * ptr);

int main(void)
{
	// 포인터
	// [철수] : 101호 , [영희] : 201호, [민수] : 301호 (메모리 공간의 주소)
	// 각 문 앞에 '암호' 가 걸려 있음
	/* int cheolsu = 1; // 암호
	int younghee = 2;
	int minsu = 3;
	
	printf("철수네 주소 : %d, 암호 : %d\n", &cheolsu, cheolsu);
	printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
	printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);
	
	// 미션맨
	
	// 첫 번쨰 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int * mission; // 포인터 변수
	mission = &cheolsu;
	printf("방문하는 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	mission = &younghee;
	printf("방문하는 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	mission = &minsu;
	printf("방문하는 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	// 두 번째 미션 : 각 암호에 3을 곱해라
	
	mission = &cheolsu;
	*mission = *mission * 3;
	printf("암호를 바꾼 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	mission = &younghee;
	*mission = *mission * 3;
	printf("암호를 바꾼 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	mission = &minsu;
	*mission = *mission * 3;
	printf("암호를 바꾼 곳 주소 : %d, 암호 : %d\n", mission, *mission);
	
	// 스파이
	// 미션맨이 바꾼 암호에서 2를 빼라!
	
	int * spy = mission;
	/* 스파이
	           => 누군가의 주소  (두개의 포인터가 하나의 메모리 공간을 가리킬 수 있다)
	   미션맨 */
	
	/* printf("\n... 스파이가 미션 수행하는 중 ...\n\n");
	spy = &cheolsu;
	*spy = *spy - 2; // cheolsu = cheolsu - 2;
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);
	
	spy = &younghee;
	*spy = *spy - 2; 
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);
	
	spy = &minsu;
	*spy = *spy - 2; 
	printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);
	
	printf("\n... 철수 영희 민수는 집에오니 암호가 바뀐것을 확인! ... \n\n");
	
	printf("철수네 주소 : %d, 암호 : %d\n", &cheolsu, cheolsu);
	printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
	printf("민수네 주소 : %d, 암호 : %d\n", &minsu, minsu);
	
	// 어떤 변수의 주소값을 가지는 포인터 변수 자체가 그 변수의 주소값을 바꿀수가 있다.
	
	// 참고로 미션맨이 사는 주소는 &misson 으로 확인
	printf("미션맨의 주소 : %d\n", &mission);
	printf("스파이의 주소 : %d\n", &spy); */
	
	// 배열
	/* int arr[3] = {5, 10, 15};
	int * ptr = arr;
	for(int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}
	
	for(int i = 0; i < 3; i++)
	{
		printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for(int i = 0; i < 3; i++)
	{
		// printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
	}
	
	for(int i = 0; i < 3; i++)
	{
		// printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
		printf("포인터 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	}
	// *(arr + 1) == arr[i] 와 똑같은 표현
	// arr = arr 배열의 첫번쨰 값의 주소와 동일 == &arr[0]
	printf("arr 자체의 값 : %d\n", arr);
	printf("arr[0] 의 주소 : %d\n", &arr[0]);
	
	printf("arr 자체의 값이 가지는 주소의 실제 값 : %d\n", *arr); // *(arr + 0)
	printf("arr[0] 의 실제 값 : %d\n", *&arr[0]);
	
	// *& 는 아무것도 없는 것과 같다. &는 주소이며, * 는 그 주소의 값이기 때문에,
	// *& 는 서로 상쇄된다.
	printf("arr[0] 의 실제 값 : %d\n", *&*&*&*&*&*&*&*&*&*&*&arr[0]);
	printf("arr[0] 의 실제 값 : %d\n", arr[0]); */
	
	// SWAP
	/* int a = 10;
	int b = 20;
	printf("a 의 주소 : %d\n", &a);
	printf("b 의 주소 : %d\n", &b);
	// a 와 b 의 값을 바꾼다.
	printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
	
	// 값에 의한 복사 (Call by Value) -> 값만 복사한다는 의미
	
	// 주소값을 넘기면? 메모리 공간에 있는 주소값 자체를 넘기면...
	printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b); */
	
	// 배열일 떄, arr2 -> 주소
	int arr2[3] = {10, 20, 30};
	// changeArray(arr2);
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}
;	return 0; 
}

void swap(int a, int b)
{
	printf("Swap 함수 내 a 의 주소 : %d\n", &a);
	printf("Swap 함수 내 b 의 주소 : %d\n", &b);
	
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);   
}

void swap_addr(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);   
}

void changeArray(int * ptr)
{
	ptr[2] = 50;
}