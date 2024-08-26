#include <stdio.h>
int main ()
{ 
	int a, b, c;
	float media = 0;
	printf ("Digite a quantidade de alunos da sala:");
	scanf ("%d", &a);
	b = 0;
	
	while (b < a) {
		printf ("Digite a nota de aluno:");
		scanf("%d",&c);
		media = media + c;
		b = b + 1;
		}
		printf ("A media das sala eh %f", media/a);
		return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
