#include <stdio.h>

// Função que substitui nota
float substituirNota( float nota1, float nota2, float notaSubstitutiva){
  if(nota1 < nota2){
    return (notaSubstitutiva+nota2)/2;
  } 
  if(nota2 < nota1){
    return (nota1+notaSubstitutiva)/2;
  }
}

int main(){

  float nota1;
  float nota2;
  float notaSubstitutiva;

  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);


  if((nota1 < 8) || (nota2 < 8)){
    printf("Precisa de prova Substitutiva! \n");
    printf("Digite a nota da prova substitutiva: \n");
    scanf("%f", &notaSubstitutiva);
    substituirNota( nota1,  nota2,  notaSubstitutiva);
    printf("A media da sua prova e: %2.1f \n", substituirNota( nota1,  nota2,  notaSubstitutiva));
  } else{
    printf("O aluno não pode fazer prova Substitutiva!");
  }
  
  return 0;
}