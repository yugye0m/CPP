#include <iostream>

int main () {
    for(int i = 1; i <= 5; i++)
    {

        for(int k = 1; k >= 5 - i; k++)
        {
            std::cout << " ";
        }
        for (int j = 0; j <= i - 1; j++)
        {
            std::cout << i - k;
    }
}
