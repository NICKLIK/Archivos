#include <stdio.h>
int main(){
    FILE *archivo=NULL;
    FILE *archivo1=NULL;
     int pi;
    

    archivo=fopen("vector.txt","r");
    archivo1=fopen("ListaMultiplos.txt", "w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int cont=1;
    while(!feof(archivo)){
        fscanf(archivo, "%d", &pi);
        if(pi% 10==0 ){ 
        fprintf(archivo1, "múltiplo \n");
        }else{
            fprintf(archivo1, "%d \n", pi);
        }
        cont++;
   
    }
      fclose(archivo);
      fclose(archivo1);
     return 0;
    

      
    }