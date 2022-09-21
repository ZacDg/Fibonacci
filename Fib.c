
#include <stdio.h>

// Funcao recursiva que recebe um inteiro n >= 1
// Retorna o n-esimo termo da sequencia de Fibonacci.

int fibonacci(int n) {
	 int x;

	 if (n == 1) {
  	 return(1);
	}

	if (n == 2) {
	return(1);
	}

	x = fibonacci(n-1) + fibonacci(n-2);

	return(x);
}


int main() {
	 int n,i;

	printf("Deseja que sejam exibidos quantos  termos da sequencia?");
	scanf("%d", &n);

	while(n <= 0) {
		printf("Numero incorreto. Digite o numero de termos da sequencia: ");
		scanf("%d", &n);
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", fibonacci(i));
	}
	printf("\n See you later...\n");
	return(0);
}
