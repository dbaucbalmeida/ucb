#include<stdio.h>

main(){
//ler media do aluno
//se media >=7,0 = aprovado
//senao media <4,0 = reprovado
//senao media >=4,0 = reprovado


double media;

 printf("digite o media");
 scanf("%lf",&media);
 
 if(media > = 7.0){
    printf("aprovado");

}else if(media < 4.0){
    printf("reprovado");

}else(media >=4.0 < 7.0){
    printf("resuperacao");

}

}