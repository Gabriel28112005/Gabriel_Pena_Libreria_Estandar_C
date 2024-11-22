# Gabriel_Pena_Libreria_Estandar_C
https://github.com/Gabriel28112005/Gabriel_Pena_Libreria_Estandar_C.git

# Enunciado
1. Las funciones comunes del lenguaje C (<stdlib.h>)

a. Utiliza la función abs() para calcular el valor absoluto de un número entero. Prueba con varios números, incluyendo negativos.

#include <stdlib.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    return 0;
}

b. Usa la función rand() para generar un número aleatorio. Luego, usa srand() para cambiar la semilla de la generación de números aleatorios y observa cómo cambian los números generados.


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    return 0;
}

2. Cadenas (<string.h>)

a. Crea dos cadenas de caracteres y usa la función strcmp() para compararlas. Prueba con cadenas iguales y diferentes.

#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}

b. Usa la función strlen() para calcular la longitud de una cadena.

#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}

3. Archivos (<stdio.h>)

a. Usa la función fopen() para abrir un archivo de texto. Si el archivo no existe, muestra un mensaje de error.


#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}

b. Escribe en un archivo de texto usando fprintf(). Después, lee lo que escribiste usando fscanf().


#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}

# Aquí te proporciono una guía paso a paso de cómo resolver uno de los ejercicios en CLion:

Vamos a trabajar con el ejercicio 2a, donde creamos dos cadenas de caracteres y usamos la función strcmp() para compararlas.

Paso 1: Crear un nuevo proyecto en CLion

Inicia CLion.
Haz clic en "File" en la esquina superior izquierda.
Selecciona "New Project".
En la ventana emergente, dale un nombre a tu proyecto (por ejemplo, "CompareStrings").
Haz clic en "Create".
Paso 2: Crear un nuevo archivo de código C

En la vista de proyecto en el lado izquierdo, expande la carpeta de tu proyecto.
Haz clic derecho en la carpeta "src".
Selecciona "New" -> "C/C++ Source File".
Ponle un nombre al archivo (por ejemplo, "main") y selecciona "C" como "File type".
Haz clic en "OK".
Paso 3: Escribe el código del ejercicio Copia y pega el siguiente código en tu nuevo archivo de código C:

#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
Paso 4: Compilar y ejecutar el código

Haz clic en "Build" en el menú superior.
Selecciona "Build Project".
Si la compilación es exitosa, puedes ejecutar el programa haciendo clic en "Run" en el menú superior y seleccionando "Run 'nombre_de_tu_proyecto'".
Verás el output del programa en la consola en la parte inferior de la ventana de CLion.

Este proceso es muy similar para todos los ejercicios que te proporcioné anteriormente. Cada vez, solo necesitarás cambiar el código en el paso 3 para adaptarlo al ejercicio que estás intentando resolver.
