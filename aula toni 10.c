#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num[10], i, x, contador=0, newVetor[10];

    printf("Digite 10 n�meros:\n");
    for(i=1; i<=10; i++){
        scanf("%d", &num[i]);
    }

    for(i=1; i<=10; i++){
        contador = 0;
        for(x=1; x<=10; x++){
            if(num[i] == num[x]){
                contador++;
                newVetor[i] = contador;
            }
        }
    }
    for(i=1; i<=10; i++){
        printf("%d ", num[i]);

    }
    printf("\nValores repetidos: \n");
    for(i = 1; i<=10 ; i++){
      printf("%d repetiu %d vezes\n", num[i], newVetor[i]);
   }


return 0;
}
