 #include<stdio.h>
 #include<stdbool.h>
 
float entradados(int numero) {
  float nota;
  printf("Entre com a nota %d: " , numero);
  scanf("%f", &nota);
  return nota;
 }

int main()
{
  float notas[4];
  float soma;
  bool condicao = true;
  
  for(int indice = 0; indice < 4; indice++){
    notas[indice] = entradados(indice + 1);
    if(notas[indice] > 10){
      printf("Nota invalida");
      condicao = false;
      break;
    }
  }
  if(condicao){
    for(int indice = 0; indice < 4; indice++) {
      soma = soma + notas[indice];      
    }
    float media = soma/4;
    printf("a média é %f", media);
  }
 
  return 0;
}