#include <stdio.h>
int main()
{
	int nota1, nota2, nota3;
	int media; 
	
	// Solicita as notas ao usuario
	printf("Digite a primeira nota:");
	scanf("%d", &nota1);
	printf("Digite a segunda nota:");
	scanf("%d", &nota2);
	printf("Digite a terceira nota:");
	scanf("%d", &nota3);
	
	//Calcula a média aritmética
	media= (nota1 + nota2 + nota3) / 3;
	printf("Sua nota é; %d \n" ,media);
	
	// verifica se o aluno está aprovado ou reprovado
	if (media >= 70) {
		printf("APROVADO\n");
	} else{
		printf("REPROVADO\N");
	}
	return 0;
	
	
	
	
	
	
}
