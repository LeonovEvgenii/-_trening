#include <iostream>

int main(int argc, char * argv[])
{
    std::cout<<"Количество: "<<argc<<"\n";

    for(int i=0 ; i < argc ; ++i)
    {
        std::cout<<"Элемент: "<<argv[i]<<"\n";
    }
}