
#include <stdio.h>
#include <locale.h> 		//biblioteca de linguagem padrão

float p, al, IMC;			//variaveis de entrada e saida
			
int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("Informe o seu peso em Kg: ");
	scanf("%f", &p);
	printf("Informe a sua altura em metros: ");
	scanf("%f", &al);
	IMC = p/(al*al);
	printf("Seu IMC é de: %.2f\n", IMC);
	if (IMC<17) 
		printf("Você está muito abaixo do peso! Bora Comer!");
	else
		if (IMC==17 || IMC<=18.49)
			printf("Você está abaixo do peso! Atenção!");
		else
			if (IMC==18.5 || IMC<=24.99)
				printf("Você está com peso normal! Parabéns!");
			else
				if (IMC==25 || IMC<=29.99)
					printf("Você está acima do peso! Atenção!");
				else
					if (IMC==30 || IMC<=34.99)
						printf("Você está com Obesidade Nivel I! Atenção, cuide-se!");
					else
						if (IMC==35 || IMC<=39.99)
							printf("Você está com Obesidade Nivel II! Muito Cuidado!");
						else
							if (IMC>=40)
								printf("Você está com Obesidade Morbida! Ultrapassou todos os limites!");
	
}
	
	
	
	
