#include <stdio.h>
int main() {
	//1. 다음의 출력결과를 보이도록 예제를 작성해보자.단, 출력되는 숫자들(20, 123, 456)은 서식문자 %d를 이용하여 출력하도록 하자.
	//	제 이름은 홍길동입니다.
	//	제 나이는 20살이고요.
	//	제가 사는 곳의 번지수는 123 - 456입니다.
	
	printf("제 이름은 홍길동입니다.\n");
	printf("제 나이는 %d살이고요\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
	

	printf("\n\n");

	//2. 다음의 출력결과를 보이도록 예제를 작성해보자.이번에도 역시 출력되는 숫자들은 서식문자 %d를 이용해서 출력하도록 하자.
	//	4x5 = 20
	//	7x9 = 63
		printf("%dx%d=%d\n", 4, 5, 20);
		printf("%dx%d=%d\n", 7, 9, 63);
	
	return 0;
}