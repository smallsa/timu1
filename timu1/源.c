/*дһ���������㺯����ֵ*/
#include <stdio.h>
#include <math.h>
double f(double x)
{
	if (x > 0)
		return 3 * x* x - 4;
	if (x == 0)
		return 2;
	else
		return 0;
}
int main()
{
	double x;
	printf("��������ֵ��");
	scanf_s("%lf", &x);
	printf("%g\n",f(x));
	return 0;
}