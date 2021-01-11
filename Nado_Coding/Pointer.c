#include <stdio.h>

int main(void)
{
	// 포인터
	// [철수] : 101호 , [영희] : 201호, [민수] : 301호 (메모리 공간의 주소)
	// 각 문 앞에 '암호' 가 걸려 있음
	int cheolsu = 1; // 암호
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
	
	printf("\n... 스파이가 미션 수행하는 중 ...\n\n");
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
	printf("스파이의 주소 : %d\n", &spy);
	return 0;
}