#include <stdio.h>

int main()
{
	int n[] = { 3, 18, 1, 7, 8, 9, 11, 13, 20, 1, 4, 7, 8, 9, 10, 20,
		17, 20, 3, 20, 7, 13, 11, 13, 20, 16, 7, 9, 10, 17, 8, 9, 5, 6 };
	int cnt[20] = { 0 };
	int size;
	int i, j;

	size = sizeof(n) / sizeof(n[0]);
	for (i = 0; i < size; i++)
		cnt[n[i] - 1]++;

	printf("\n�����ϸ�:  \n\n");
	for (i = 0; i < 20; i++)
		for (j = 0; j < cnt[i]; j++)
			printf("%d  ", (i + 1));

	return 0;
}