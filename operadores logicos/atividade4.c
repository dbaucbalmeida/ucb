#include<stdio.h>

main(){
//Leia o peso e imprima se é menor que 60kg
// imprima se menor
double peso;

 printf("digite o peso");
 scanf("%lf",&peso);
 
 if(peso < 60.0){
    printf("menor que 60 ");
}else{
    printf("maior que 60");

}

}