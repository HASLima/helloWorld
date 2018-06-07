#include <stdio.h>

void ImprimirInformacao(char *);
char *info;

int main()
{
	printf("Qual a info que pretende que seja impressa?");
	scanf("%s", &info);

	ImprimirInformacao(info);

	return 1;
}
