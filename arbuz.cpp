#include <iostream>
using namespace std;

int main()

{
    int a;
    std::cin >> a;
    if (a % 2 == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
