#include <stdio.h>

int compararChar(char *cadena, char *cadena2, int tamaño){
    for (size_t i = 0; i < tamaño; i++)
    {
        if (*cadena == *cadena2)
        {
            cadena++;
            cadena2++;
           
        }else{
            return 0;
        }
      
    }
    return 1;
}


int main(){

    int tamaño = 0;

    printf("\nIntroduzca el tamaño de la cadena de caracteres: ");
    scanf("%d", &tamaño);

    char cadena[tamaño];
    char cadena2[tamaño];
    
    printf("\nIntroduzca una cadena de no mas de %d caracteres: ",tamaño);
    scanf("%s", cadena);

    printf("\nIntroduzca otra cadena de no mas de %d caracteres: ",tamaño);
    scanf("%s", cadena2);

    if (compararChar(cadena, cadena2, tamaño))
    {
        printf("\nLas cadenas son iguales");
    }else{
        printf("\nLas cadenas no son iguales");
    }
    


}
