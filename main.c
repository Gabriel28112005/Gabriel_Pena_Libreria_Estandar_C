#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int ejercicio;
    printf("Que ejercicio quieres ejecutar?: ", ejercicio);
    scanf("%d", &ejercicio);

    if(ejercicio==1){
        printf("---------------\n");
        printf("  Ejercicio 1\n"  );
        printf("---------------\n");

        //1.a) Utiliza la función abs() para calcular el valor absoluto de un número entero.
        printf("Apartado a)\n");

        // Valor absoluto de -5
        int numero1= -5;
        printf("El valor absoluto de %d es %d\n",numero1,abs(numero1));
        int numero2= 7;
        printf("El valor absoluto de %d es %d\n",numero2,abs(numero2));


        //1.b) Utiliza la función rand() para generar un número aleatroio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.
        printf("Apartado b)\n");

        srand(time(0)); //Si no cambiamos la semilla siempre nos devuelve un mismo valor numérico
        int numeroAleatorio = rand();
        printf("El numero aleatorio es: %d\n", numeroAleatorio);
    }
    else if(ejercicio==2){
        printf("---------------\n");
        printf("  Ejercicio 2\n"  );
        printf("---------------\n");

        //2.a) Crea dos cadenas de caracteres y usa la función strcmp() para compararlas. Prueba con cadenas iguales y diferentes.
        printf("Apartado a)\n");

        char cadena1[] = "Hola";
        printf("La cadena 1 es: %s\n", cadena1);
        char cadena2[] = "Buenas";
        printf("La cadena 2 es: %s\n", cadena2);

        int comparacion= strcmp(cadena1, cadena2);
        if(comparacion==0){
            printf("Como la palabra '%s' es lo misma que la palabra '%s', entonces las cadenas de caracteres son iguales.\n", cadena1, cadena2);
        }
        else{
            printf("Como la palabra '%s' no es la misma que la palabra '%s', entonces las cadenas de caracteres son diferentes.\n", cadena1, cadena2);
        }

        //2.b) Usa la finción strlen() para calcular la longitud de una cadena.
        printf("Apartado b)\n");

        char cadena3[]="Muy buenas";
        int long_cad3=strlen(cadena3);
        printf("La longitud de la cadena '%s' es: %d\n", cadena3, long_cad3);
    }
    else if(ejercicio==3){
        printf("---------------\n");
        printf("  Ejercicio 3\n"  );
        printf("---------------\n");

        //3.a) Usa la función fopen() para abrir un archivo de texto. Si el archivo no existe, muestra un mensaje de error.
        printf("Apartado a)\n");

        FILE *file=fopen("Hola", "r");
        if (file == NULL) {
            printf("El archivo no se pudo abrir.\n");
            return 1;
        }

        // Cerrar el archivo al final
        fclose(file);


        //3.b)  Escribe en un archivo de texto usando fprintf(). Después, lee lo que escribiste usando fscanf().
        printf("Apartado b)\n");

        FILE *archivo = fopen("archivo.txt", "w");
        if (archivo == NULL) {
            printf("El archivo no se pudo abrir para escritura.\n");
            return 1;
        }

        fprintf(archivo, "Librerias Estandar en C \n");

        // Cerrar el archivo después de escribir
        fclose(archivo);

        // Abrir de nuevo para leer
        archivo = fopen("archivo.txt", "r");
        if (archivo == NULL) {
            printf("El archivo no se pudo abrir para lectura.\n");
            return 1;
        }

        char buffer[50];
        fscanf(archivo, "%s", buffer);

        printf("Leido del archivo: %s\n", buffer);

        // Cerrar el archivo después de leer
        fclose(archivo);
    }

    return 0;
}
