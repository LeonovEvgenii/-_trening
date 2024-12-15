// Реализуйте класс с конструктором, использующим список инициализации для установки значений членов, 
// объявленных как const или ссылок.

#include <iostream>

class A
{
    public:
        const int con;
        int &ref;

        A(int p1):con{34}, ref{p1}
        {
            std::cout << "con " << con <<"\n";
            std::cout << "ref " << ref <<"\n";
        }

};

int main()
{
    A a(4);

    std::cout << "hw\n";
    return 0;
}