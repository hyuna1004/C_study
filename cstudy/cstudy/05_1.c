#include <stdio.h>
int main() {
	/*1. ���α׷� ����ڷκ��� �� ���� x, y ��ǥ�� �Է� �޾Ƽ�, �� ���� �̷�� ���簢���� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���.��, �� ����� x, y ��ǥ ���� �� �ϴ��� x, y ��ǥ �� ���� �۴ٰ� �����ϰ�, �� ����� ��ǥ ������ ���� �Է� �޴� ���·� ������ �ۼ��غ���.������ �� �ִ� ������ ���� ������ ����.
		�� ����� x, y ��ǥ : 2 4
		�� �ϴ��� x, y ��ǥ : 4 8
		�� ���� �̷�� ���簢���� ���̴� 8�Դϴ�.
	*/
	int x1, y1, x2, y2;
	int area; //����
	printf("�� ���, �� �ϴ��� x, y��ǥ�� ���� �Է��ϼ���.");
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	area = (x2 - x1)*(y2 - y1); //���� ���
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", area);


	//2. ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double�� ������ ��������.�׸��� �� ���� ��Ģ���� ����� ����غ���.

		double num1, num2;

		printf("�Ǽ� �� ���� �Է��ϼ���\n");
		scanf("%lf %lf", &num1, &num2);
		printf("%f + %f = %f\n", num1, num2, num1 + num2);
		printf("%f - %f = %f\n", num1, num2, num1 - num2);
		printf("%f * %f = %f\n", num1, num2, num1 * num2);
		printf("%f / %f = %f\n", num1, num2, num1 / num2);
		return 0;

	//4. ���α׷� ����ڷκ��� �ƽ�Ű�ڵ� ���� ������ ���·� �Է� ���� �Ŀ� �ش� ������ �ƽ�Ű�ڵ� ���ڸ� ����ϴ� ���α׷��� �ۼ��غ���.���� �� ���α׷� ����ڰ� ���� 65�� �Է��ϸ� ���� A�� ����ؾ� �Ѵ�.

			int num;

			printf("�ƽ�Ű�ڵ� ���� ���� ���·� �Է��ϼ���.");
			scanf("%d", &num);
			printf("%c\n", num);

	//5. ���α׷� ����ڷκ��� ���ĺ� ���� �ϳ��� �Է� �޴´�. �׸��� �̿� �ش��ϴ� �ƽ�Ű�ڵ� ���� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� ���α׷� ����ڰ� ���� A�� �Է��ϸ� ���� 65�� ����ؾ� �Ѵ�.
			char num;

			printf("���ĺ��� �Է��ϼ���.");
			scanf("%c", &num);
			printf("%d\n", num); 
			
			
			return 0;
}