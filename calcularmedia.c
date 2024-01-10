#include <stdio.h>

int chamarMedia(int nota1, int nota2, int nota3, int nota4){
  return (nota1+nota2+nota3+nota4)/4;
}

int main()
{
  // int nota1 = 9;
  // int nota2 = 9;
  // int nota3 = 9;
  // int nota4 = 9;
  // int mediaNotas = (nota1+nota2+nota3+nota4)/4;
  
  int nota1;
  int nota2;
  int nota3;
  int nota4;
  
  printf("Insira a primeira nota: \n");
  scanf("%d", &nota1);
  printf("Insira a segunda nota: \n");
  scanf("%d", &nota2);
  printf("Insira a terceira nota: \n");
  scanf("%d", &nota3);
  printf("Insira a quarta nota: \n");
  scanf("%d", &nota4);
  
  if( chamarMedia(nota1, nota2, nota3, nota4) >= 8){
    printf("Aluno aprovado \n");
    printf("Sua media e: %d", chamarMedia(nota1, nota2, nota3, nota4));
  } else{
    printf("Aluno reprovado \n");
    printf("Sua media e: %d", chamarMedia(nota1, nota2, nota3, nota4));
  }
  
  return 0;
}