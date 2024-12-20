// https://metanit.com/cpp/tutorial/15.2.php

#include <iostream>
#include <string>

void operation(int a, int b, int (*lam)(int, int))
{
    std::cout << lam(3, 4) << "\n";
}

int main()
{
    std::cout << "Вызов\n";
    [](){std::cout << "Hello\n";} ();

    std::cout << "Сохранение в переменную\n";
    auto val {[] () {std::cout << "Hello\n";}};
    val();

    std::cout << "Вызовы через переменную с передачей параметра\n";
    // принципиален именно тип auto
    auto val_2 {[] (const std::string& text) {std::cout << text << "\n";}};
    val_2("qqq");
    std::cout << "Вызовы с передачей параметра в одну строку\n";
    [] (const std::string& text) {std::cout << text << "\n";} ("www");

    std::cout << "Возврат результата\n";
    auto val_3 = [] (int a, int b) {return a+b;};
    int res = val_3(2,3);
    std::cout << res << "\n";

    std::cout << "Указание явного типа возвращаемого значения\n";
    auto val_4 = [] (double a, double b) -> double {return a+b;};
    double res_d = val_4(2.2,3);
    std::cout << res_d << "\n";

    std::cout << "Передача лямбды как параметра в функцию\n";
    auto sum {[] (int a, int b) {return a+b;}};
    operation(4, 5, sum);

    operation(4, 5, [](int a, int b){return a-b;});

    std::cout << "Универсальная лямбда (generic)\n";
    auto sum_2 = [] (auto a, auto b) {return a+b;};
    std::cout << sum_2(std::string() + "qqq", std::string() + "www") << "\n";

    std::cout << "hw\n";
    return 0;
}