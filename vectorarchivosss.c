#include <stdio.h>
int main(){
    FILE *archivo=NULL; 
    FILE *carpeta=NULL;

    archivo=fopen("vector.txt","r+"); 
    carpeta=fopen("multiplicarvectores,txt","w");

int carpeta1,carpeta11;

    if (archivo==NULL){
    printf("No se puede abrir el archivo");
    }
    return -1;
    }


    for(int i=0; i<100; i++){
        fscanf(archivo,"%d",&a);
        carpeta11=carpeta1*3;
        fprintf(carpeta,"%d\n",b);
    }
    fclose(archivo); 
    fclose(carpeta);
    return 0;
}