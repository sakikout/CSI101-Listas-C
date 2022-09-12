#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int dado(){
    int n;
    n = (rand() % 6) + 1;
    return n;
}

int main(void)
{
  int i, valor, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0, total = 0;
  int milhao;
  float media1, media2, media3, media4, media5, media6;
  
  milhao = 10;
  
  printf("Gerando %d valores aleatorios de 1 a 6:\n\n", milhao);
  
  for (i = 0; i < milhao; i++)
  {
    valor = dado();
    printf("%d ", valor);
    total += 1;
    
     if (valor == 1){
               um += 1;
           } else if (valor == 2){
               dois += 1;
           }else if (valor == 3){
               tres += 1;
           } else if (valor == 4){
               quatro += 1;
           } else if (valor == 5){
               cinco += 1;
           } else if (valor == 6){
               seis += 1;
           }
  }
    media1 = (float)um / total * 100;
    media2 = (float)dois / total * 100;
    media3 = (float)tres / total * 100;
    media4 = (float)quatro / total * 100;
    media5 = (float)cinco / total * 100;
    media6 = (float)seis / total * 100;
    
    printf("\nMedia de vezes que os numeros foram contados:\nNumero 1: %.3f\nNumero 2: %.3f\nNumero 3: %.3f\nNumero 4: %.3f\nNumero 5: %.3f\nNumero 6: %.3f\n", media1, media2, media3, media4, media5, media6);
       
  getch();
  return 0;
}