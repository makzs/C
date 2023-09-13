#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Alô Mundo");
	
	return 0;
}
