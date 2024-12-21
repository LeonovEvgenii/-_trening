#include <stdio.h>
#include <stdlib.h>

int main(){
    int var1 = 0;
    int var2 = 2;
    char *buffer = malloc(sizeof(char) * 10);

    if (buffer == NULL)
    {
        return 0;
    }

    //Q// это нормальный практика цикла? как его можно прервать при условии неизменности строчки while(1)
    while(1){
        *(++buffer) = 'c';
    }
    char greeting[] = "Hello from losst\n";
    printf("%s", greeting);
}