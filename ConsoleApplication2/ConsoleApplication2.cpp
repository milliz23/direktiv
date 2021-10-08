#include"Header.h"
#include <math.h>
#define i "Hello"
#define o "Good"
#define SQR(x) ((x) * (x))
int main()
{
	system("chcp 1251>null");
	printf("%d \n", summ(3, 8));
	printf("%d \n", mine(9, 8));
	printf("%d \n", del(8, 4));
	printf("%d\n", ymn(3, 8));
	char m[] = i;
	char* p = m;
	char m1[] = o;
	char* p1 = m1;
	printf("%s \n", mass(p,p1));
	printf("%d", SQR(6));
	float x1, x2, y1, y2, res;// длинна отрезка 
	printf("x1= ");
	scanf_s("%f", &x1);
	printf("y1= ");
	scanf_s("%f", &y1);
	printf("x2= ");
	scanf_s("%f", &x2);
	printf("y2= ");
	scanf_s("%f", &y2);
	printf("Ответ= %f", sqrt((SQR(x1 -x2)) + (SQR(y1 - y2))));

}