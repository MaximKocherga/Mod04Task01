#include <iostream>
// Задача 1. Месяцы

enum class MonthsCode
{
    january = 1,
    february = 2,
    march = 3,
    april = 4,
    may = 5,
    june = 6,
    july = 7,
    august = 8,
    september = 9,
    october = 10,
    november = 11,
    december = 12
};

int codeMonth;

int main()
{
    std::cout << "Please enter code of the month (1-12): " << std::endl;
    std::cin >> codeMonth;

    while (codeMonth != 0)
    {
        switch (codeMonth)
        {
        case static_cast<int>(MonthsCode::january):
            std::cout << "Your choice is january" << std::endl;
            break;
        case static_cast<int>(MonthsCode::february):
            std::cout << "Your choice is february" << std::endl;
            break;
        case static_cast<int>(MonthsCode::march):
            std::cout << "Your choice is march" << std::endl;
            break;
        case static_cast<int>(MonthsCode::april):
            std::cout << "Your choice is april" << std::endl;
            break;
        case static_cast<int>(MonthsCode::june):
            std::cout << "Your choice is june" << std::endl;
            break;
        case static_cast<int>(MonthsCode::july):
            std::cout << "Your choice is july" << std::endl;
            break;
        case static_cast<int>(MonthsCode::august):
            std::cout << "Your choice is august" << std::endl;
            break;
        case static_cast<int>(MonthsCode::september):
            std::cout << "Your choice is september" << std::endl;
            break;
        case static_cast<int>(MonthsCode::october):
            std::cout << "Your choice is october" << std::endl;
            break;
        case static_cast<int>(MonthsCode::november):
            std::cout << "Your choice is november" << std::endl;
            break;
        case static_cast<int>(MonthsCode::december):
            std::cout << "Your choice is december" << std::endl;
            break;
        default:
            std::cout << "Wrong choice! Pls try again." << std::endl;
            break;
        }
        std::cout << "Please enter code of the month (1-12): " << std::endl;
        std::cin >> codeMonth;
    }
    std::cout << "Good bye!" << std::endl;
    return 0;
}