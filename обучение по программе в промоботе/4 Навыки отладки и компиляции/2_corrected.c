#include <stdio.h>

int main(){
    int var1 = 0;
    int var2 = 2;
    char *buffer = malloc(sizeof(char) * 10);
    for(int i = 0 ; i < 10 ; i++){
        *(++buffer) = 'c';
    }
    char greeting[] = "Hello from losst\n";
    printf("%s", greeting);
}