#include <iostream>
#include <map>
#include <string>

int main ()
{
    std::map<std::string, long> phone_book {
        {"vasa", 78653241759},
        {"peta", 56977156388},
        {"ira", 24543656325}
    };

    // В какой из представленных двух реализаций обхода можно изменять значения, почему?

    // Изменять значения нельзя во обоих реализациях обхода, т к в первом случае
    // используется константный итератор, который не допускает изменения значения и
    // только он достуен у map.
    // Во втором случе константная ссылка. Значение переменной, на которую указывает
    // ссылка тоже не может быть изменено.
    // Можно задать новое значение с тем же ключем, тогда значение в словаре будет
    // заменено.

    // for(std::map<std::string, long>::const_iterator citer = phone_book.cbegin() ; citer != phone_book.cend() ; citer++)
    // {
    //     std::cout << citer->first << " " << citer->second << "\n";
    // }

    // Cколько операций копирований происходит за каждый цикл?

    // В каждую интерацию пара ключ, значение копируется в переменную для 
    // использования в теле цикла. В данном случае создается ссылка.

    // Что означает данная запись? как данный инструмент называется?

    // Цикл в стиле foreach.

    for(const auto& [name, number] : phone_book) // получение ссылки на std::pair ?
    {
        std::cout << name << " " << number << "\n";
    }

    return 0;
}