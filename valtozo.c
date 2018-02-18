#include <stdio.h>

int main(void)
{
	int a,b;
	printf("Kérem az a változót: ");
	scanf("%d", &a);
	printf("Kérem a b változót: ");
	scanf("%d", &b);

	a = b - a;
	b = b - a;
	a = b + a;
	printf("Kivonás-összeadással:\na=%d ", a);
	printf("\nb=%d ", b);
	printf("\n");

	a = a * b;
	b = a / b;
	a = a / b;
	printf("Szorzás-osztással:\na=%d ", a);
	printf("\nb=%d ", b);
	printf("\n");
}
