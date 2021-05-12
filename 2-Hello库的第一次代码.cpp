#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a,&b,&c);
	char d[] = "Hello,World! This is my begining!";
	char e[] = " I am coming! My love!";
	/*double d = sqrt(a);
	printf("%lf", d);
	return 0;*/
	if ((sqrt(a) + sqrt(b)) == sqrt(c))
	{
		printf("%lf\t", (sqrt(a) + sqrt(b)));
		printf("%lf\t", sqrt(c));
		/*printf(" Hello,World! This is my begining!\n");*/
		/*printf("%s\n", d);*/
		puts(d);
		/*printf("\n");*/
	}
	else
	{
		printf("%lf\t", (sqrt(a) + sqrt(b)));
		printf("%lf\t", sqrt(c));
		/*printf(" I am coming! My love!\n");*/
		/*printf("%s\n", e);*/
		puts(e);
		/*printf("\n");*/
	}
	double f;
	scanf("%lf", &f);
	if (f == 521.1314)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	system("pause");
	return 0;
}
