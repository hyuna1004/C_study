#include <stdio.h>
int main() {

	//1. 프로그램 사용자로부터 두 개의 정수를 입력받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자.
	
	printf("두 정수를 입력하세요.\n");

	int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	printf("뺄셈 결과 : %d\n", num1 - num2);
	printf("곱셈 결과 : %d\n", num1 * num2);



	//2. 프로그램 사용자로부터 세 개의 정수 num1, num2, num3을 순서대로 입력받은 후에, 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
	//  num1xnum2 + num3
	//	단, 입력받은 세 개의 정수가 2, 4, 6이라면 다음의 형태로 출력을 해야 한다.
	//	2 + 4 + 6 = 14

	printf("세 정수를 입력하세요.\n");
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d+%d+%d=%d\n", num1, num2, num3, num1 + num2 + num3);
	



	//3. 하나의 정수를 입력받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자. 예를 들어서  5가 입력되면 25가 출력되어야 한다.
	
	int num;

	printf("정수를 입력하세요.\n");
	scanf_s("%d", &num);
	printf("%d\n", num*num);



	//4. 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램을 작성해보자. 예를 들어서 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.
	
	int num1, num2;

	printf("두 정수를 입력하세요.");
	scanf_s("%d %d", &num1, &num2);

	printf("몫 : %d\n", num1 / num2);
	printf("나머지 : %d \n", num1%num2);



	//5. 입력받은 세 개의 정수 num1, num2, num3을 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
	//(num1 - num2) x(num2 + num3) x(num3% num1)

	int num1, num2, num3;

	printf("세 정수를 입력하세요.");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("결과: %d\n", (num1 - num2) *(num2 + num3) *(num3 % num1));
	return 0;

	return 0;
}