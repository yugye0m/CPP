#include <iostream>

int main () {
    for(int i = 1; i <= n; i++)
    {

        for(int k = 1; k <= n - i; k++)
        {
            std::cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            std::cout << j;
        }

        for (int j = 2; j <= i; j++)
        {
            std::cout << j;
        }
}