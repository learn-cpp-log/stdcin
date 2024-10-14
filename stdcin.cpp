#include <iostream>  // for std::cout and std::cin
//PRINTS THREE NUMBERS ENTERED BY A USER
int main()
{
    std::cout << "Enter three numbers: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    int z{};
    std::cin >> z;

    std::cout << "You entered " << x << ", " << y << " and " << z << '\n';

    return 0;
}