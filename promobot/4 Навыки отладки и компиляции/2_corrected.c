#include <stdio.h>
#include <stdlib.h>


int main(){
    int var1 = 0;
    int var2 = 2;
    //Q// когда маллок может вернуть NULL? почему нет проверки?
    char *buffer = malloc(sizeof(char) * 10);

    if (buffer == NULL)
    {
        return 0;
    }

    //Q// чем отличается i++ от ++i с т.з. количества операций? почему?
    for(int i = 0 ; i < 10 ; i++){
        *(++buffer) = 'c';
    }
    //Q//где выделяется память этой переменной? какой объем?
    char greeting[] = "Hello from losst\n";
    printf("%s", greeting); //Q// что будет если запустишь программу несколько раз? 
}