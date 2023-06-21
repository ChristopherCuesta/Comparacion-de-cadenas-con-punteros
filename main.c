#include <stdio.h>

int compararChar(char *cadena, char *cadena2, int tamaño){
    for (size_t i = 0; i < tamaño; i++)
    {
        if (*cadena == *cadena2)
        {
            *cadena++;
            *cadena2++;
           
        }else{
            return 0;
        }
      
    }
    return 1;
}


int main(){
    char cadena[10];
    char cadena2[10];
    int tamaño = 10;
    printf("Introduzca una cadena de no mas de 10 caracteres: ");
    scanf("%s", cadena);
    printf("Introdusca otra cadena de no mas de 10 caracteres: ");
    scanf("%s", cadena2);
    if (compararChar(cadena, cadena2, tamaño))
    {
        printf("Las cadenas son iguales");
    }else{
        printf("Las cadenas no son iguales");
    }
    


}