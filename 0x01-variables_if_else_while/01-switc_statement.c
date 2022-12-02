#include <stdio.h>
//#include <conio.h>
/**
 *main: switch statement
 *@calculation:using operands in calculation
 *@calculator: using operator
 *Return: Suces
 */
void main()
{
	int a,b,sum,sub,mul,div,mod;
	char operator;

	printf("Enter your choice operator: \n");
	scanf("%c",&operator);
	printf("Enter your choice of two numbers: \n");
	scanf("%d %d", &a,&b);
	switch(operator)
	{
		case '+': sum= a + b;
		printf("sum = %d", sum);
		break;
		case '-': sub= a - b;
		printf("sub = %d", sub);
		break;
		case '*': mul= a * b;
		printf("mul =  %d", mul);
		break;
		case '/': div= a / b;
		printf("div =  %d", div);
		break;
		case '%': mod= a % b;
		printf("mod = %d", mod);
		break;
	}
	getchar();
}
