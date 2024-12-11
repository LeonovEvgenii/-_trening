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

    // for(std::map<std::string, long>::const_iterator citer = phone_book.cbegin() ; citer != phone_book.cend() ; citer++)
    // {
    //     std::cout << citer->first << " " << citer->second << "\n";
    // }

    for(const auto& [name, number] : phone_book) // получение ссылки на std::pair ?
    {
        std::cout << name << " " << number << "\n";
    }

    return 0;
}