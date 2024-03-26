#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num[10], i, x,n=0, contador=0, newVetor[10];

    printf("Digite 10 números:\n");
    for(i=1; i<=10; i++){
        scanf("%d", &num[i]);
    }

    for(i=1; i<=10;i++){
        for(x=i+1;x<=10;x++){
            if(num[i] == num[x]){
                newVetor[n++] = num[i];
                contador++;
            }

        }
    }
    for(i=1; i<=10;i++){
        printf("%d ", num[i]);

    }
    printf("\nValores repetidos: \n");
    for(i = 1; i<n; i++){
      printf("%d repetiu %d vezes\n", newVetor[i], contador);
   }






return 0;
}
