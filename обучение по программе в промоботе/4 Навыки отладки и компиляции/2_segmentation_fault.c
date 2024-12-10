#include <stdio.h>

int main(){
    int var1 = 0;
    int var2 = 2;
    char *buffer = malloc(sizeof(char) * 10);
    while(1){
        *(++buffer) = 'c';
    }
    char greeting[] = "Hello from losst\n";
    printf("%s", greeting);
}