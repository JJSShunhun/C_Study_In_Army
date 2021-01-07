#include <stdio.h>

int main(void)
{
	//배열
	/* int subway_1 = 30; //1번 지하철엔 30명이 타고 있다.
	int subway_2 = 40;
	int subway_3 = 50; */
	
	// 여러 개의 변수를 함께, 동시에 생성
	/* int subway_array[3]; 
	subway_array[0] = 30; // 배열의 index 값은 항상 0부터 시작
	subway_array[1] = 40;
	subway_array[2] = 50;
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 지하철에 %d 명이 타고 있습니다\n", i+1, subway_array[i]);
	} */
	
	// 값 설정 방법 (값은 초기화를 반드시 해야 함)
	/* int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	} */
	
	// 배열 크기는 항상 상수로 선언
	/* int size = 10;
	int arr[size]; // X
	int arr[10]; // O */
	
	/* int arr[10] = {1,2}; //3번째 값 부터는 자동으로 '0'으로 초기화 됨
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	} */
	
	// int arr[] = {1,2}; // = arr[2]
	
	/* float arr[5] = {1.0, 2.0, 3.0};
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr[i]);
	} */
	
	// 문자 vs 문자열
	/* char c = 'A';
	printf("%c\n", c); */
	
	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0' 이 포함되어야 함
	//char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
	/* char str[7] = "coding";
	printf("%s\n", str); */
	
	/* char str[] = "coding";
	printf("%s\n", str);
	printf("%ld\n", sizeof(str));
	
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	} */
	
	/* char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%ld\n", sizeof(kor));
	// 한글과 영어의 글자당 byte 크기가 다르다 */
	
	//char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
	// printf("%s\n", c_array);
	/* for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	} */
	
	/* for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]); // ASCII 코드 값 출력 (NULL문자 0으로 입력 됨)
	} */
	
	//문자열 입력받기 : 병사 신상 입력 예제
	/*char name[256];
	printf("이름이 뭐예요?");
	scanf("%s", name);
	printf("%s\n", name); */
	
	// 참고 : ASCII 코드? ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	// 7 bit, 총 128 개 코드 (0-127)
	// a : 97 (문자 a의 아스키코드 정수값)
	// A : 65
	// 0 : 48
	
	/* printf("%c\n", 'a');
	printf("%d\n", 'a');
	
	printf("%c\n", 'b');
	printf("%d\n", 'b');
	
	printf("%c\n", 'A');
	printf("%d\n", 'A');
	
	printf("%c\n", '\0');
	printf("%d\n", '\0');
	
	printf("%c\n", '0');
	printf("%d\n", '0');
	
	printf("%c\n", '1');
	printf("%d\n", '1'); */
	
	// 참고2 : 0-127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}
	
	return 0;
	
	
}