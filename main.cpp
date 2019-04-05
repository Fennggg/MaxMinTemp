#include <iostream>
template <class T>
T Min(T num1, T num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}
template <class T>
T Max(T num1, T num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
int main()
{
    int inum1, inum2, result;
    double dnum1, dnum2;
    std::string ch1, ch2;
    std::cout << "Enter two integer values:\n";
    std::cin  >> inum1 >> inum2;
    std::cout << "Lesser: " <<  Min(inum1, inum2) <<std:: endl;
    std::cout << "Greater: " << Max(inum1, inum2) <<std:: endl;
    std::cout << "Enter two float values:\n";
    std::cin  >> dnum1 >> dnum2;
    std::cout << "Lesser: " << Min(dnum1, dnum2) <<std:: endl;
    std::cout << "Greater: " << Max(dnum1, dnum2) <<std:: endl;
    std::cout << "Enter two strings values:\n";
    std::cin >> ch1 >> ch2;
    std::cout << "Lesser: " << Min(ch1, ch2) << std::endl;
    std::cout << "Greater: " << Max(ch1, ch2) <<std:: endl;
    return 0;
}