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
            std::cout << "SAME!, " << n << "��° ���ڰ� �ߺ��Ǿ����ϴ�" << std::endl;
        }
        str2 = str1;
        n++;

    }
}