#include <iostream>

int main()
{
    std::string str1 = "";
    std::string str2 = "";
    int n = 1;

    while (std::cin >> str1)

    {
        if (str1 == str2)

        {
            std::cout << "SAME!, " << n << "번째 글자가 중복되었습니다" << std::endl;
        }
        str2 = str1;
        n++;

    }
}