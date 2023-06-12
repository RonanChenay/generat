#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 99999999
#define SIZE 10000000
#define NUM_TO_GENERATE 10

int main() {


int base;
int one = 0 ;

printf("\n\n");
printf("===================================== \n");
printf("  GENERATEUR DE NUMERO DE TELEPHONE  \n");
printf("===================================== \n");

printf("\n");
printf("uniter du Numero: ");
scanf("%d",&base);

printf("=====================================");
printf("\n\n");

srand(time(NULL));
//for (int i = 0; i <  NUM_TO_GENERATE; i++){
  //      printf("%d%d%d\n",one, base, rand() % MAX);
// }

    FILE *fp;

    fp = fopen("stok.txt","a");
    char tel [100];
    if (fp == NULL){
        printf("Erreur du fichier !");
        exit(1);
    }


for (int i = 0; i <  NUM_TO_GENERATE; i++){
    fprintf(fp,"%s %d%d%d \n", tel,one,base,rand() % MAX ); }

    fclose(fp);

    printf("\n");
printf("Generation executer !\n\n");

    return 0;
}




