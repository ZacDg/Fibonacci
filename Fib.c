
#include <stdio.h>

// Funcao com laço FOR que recebe um inteiro n >= 1
// Retorna o n-esimo termo da sequencia de Fibonacci.

int fibonacci(int n) {
 int x, n1, n2, contador;
	 contador = 0;
	 n1=0;
	 n2=1;

	if (n == 1) {
		printf("\n\n\n\n\n Sequência de Fibonacci com %d elemento  >>>   ", n);
  	    printf(" %d", 1);
	}

	else if (n == 2) {
		printf("\n\n\n\n\n Sequência de Fibonacci com %d elemento  >>>    ", n);
	    printf(" %d  %d", 1, 1);
	}
	
    else if (n >= 3) {        
		printf("\n\n\n\n\n Sequência de Fibonacci com %d elementos >>> ", n);
		printf("  %d", 1);
        for(contador = 1; contador <= (n-1); contador++){
            x = n2 + n1;
            printf(" %d", x);
            n1 = n2;
            n2 = x;      
            }    
        }
printf("\n\n\n See you later...\n\n\n\n\n");
return 0;	
}


int main() {
	 int n,i;

	printf("Deseja que sejam exibidos quantos  termos da sequencia?  >  ");
	scanf("%d", &n);

	while(n <= 0) {
		printf("Numero incorreto. Digite o numero de termos da sequencia: ");
		scanf("%d", &n);
	}

	
	printf("%d ", fibonacci(n));
	
	return(0);
}
