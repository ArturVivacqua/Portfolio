#include <stdio.h>
#include <locale.h>

int main(void) {
double imc, altura, peso;

  printf("\nQual o seu peso em quilos?\t");
  scanf("%lf", &peso);

  printf("\nQual a sua altura em metros?\t");
  scanf("%lf", &altura);

  imc = peso/(altura*altura);

  if (imc < 16){
    printf("Seu imc é de %.2lf, você está com magreza grave", imc);
  }else{
    if (imc >= 16 && imc < 17){
      printf("Seu imc é de %.2lf, você está com magreza moderada", imc);      
    }else{
      if (imc >= 17 && imc < 18.5){
        printf("Seu imc é de %.2lf, você está com magreza leve", imc);
      }else{
        if (imc >= 18.5 && imc < 25){
        printf("Seu imc é de %.2lf, você está saudável", imc);
      }else{
          if (imc >= 25 && imc < 30){
        printf("Seu imc é de %.2lf, você está com sobrepeso", imc);
      }else{
            if (imc >= 30 && imc < 35){
        printf("Seu imc é de %.2lf, você está com obesidade grau 1", imc);
      }else{
              if (imc >= 35 && imc < 40){
        printf("Seu imc é de %.2lf, você está com obesidade grau 2", imc);
      }else{
                if (imc >= 40){
        printf("Seu imc é de %.2lf, você está com obesidade grau 3", imc);
      }
      }
      }
      }
      }
      }
    }
  }
  
return 0;
}
