#include <iostream>
#include <algorithm>

std::string reverse(std::string s)
{
int main()
    std::string s;
    std::cin >> s;

    std::cout << reverse(s) << std::endl;
}

std::string reverse(std::string s)
{
    std::reverse(s.begin(), s.end());
}
