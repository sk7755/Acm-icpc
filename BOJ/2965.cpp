#include <cstdio>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (b - a < c - b)
	{
		printf("%d\n", c - b - 1);
	}
	else
		printf("%d\n", b - a - 1);

	return 0;
}