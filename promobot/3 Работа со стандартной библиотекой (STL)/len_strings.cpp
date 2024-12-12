// Итерируйте по vector строк и выводите их длину.

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec_str {
        "q",
        "ww",
        "eee",
        "rrrr",
        "ttttt",
        "yyyyyy"
    };

    for(std::vector<std::string>::iterator iter = vec_str.begin(); iter != vec_str.end() ; iter++ )
    {
        std::string element = *iter;
        std::cout << element.length() << "\n";
    }

    return 0;
}