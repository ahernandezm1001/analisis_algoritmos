#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int value = -1;
  int i;
}value_indice;

 int main(){

  int n = query_data();
  int* array = (int) malloc(sizeof(int)n);
  random_numbers(array, n);
  value_indice* array_3n = (value_indice) malloc(sizeof(value_indice)3*n);
  if(!secuencial_search(array, array_3n, n)) printf("No se encontro ninguna repeticion.");
  else printf("Se enontro una repeticion.");

  return 1;
 }

 int query_data(){
  int n;
  printf(" Digita el tamanio n del arreglo:");
  scanf("%d", &n);

  return n;
 }

 void(int* array, int n){
  int i = 0;

  srand (time(NULL));
  for(i ; i < n ; i++) *(array+i) = rand() % ((3*n)+1);
 }

 void secuencial_search(int* array, int* array_3n, int n){
  int i = 0, half = n/2;

  for(i = 0 ; i < n ; i++){
    if(i < half){
      *(array_3n+(array[i])).value = *(array+i)
      *(array_3n+(array[i])).i = i;
    }else{
      if(!(*(array_3n+(array[i])).value)){
        printf(" Se encontro el valor: %d en indices [%d] [%d]", *(array+1), *(array_3n+(array[i])).indice , i);
        return 1;
      }
    }  
  }
  return 0;
 }
