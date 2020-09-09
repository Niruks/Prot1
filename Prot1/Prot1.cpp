// Prot1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main()
{
    std:: string CorrectWords;
    std::string UncorrectW = "Fuck fuck bitch Bitch";
    while (std::cin >> CorrectWords)
    {
        int actW = 0;
        for (int i = 0; i < (UncorrectW.size()-1); i++)
        {
            if (CorrectWords[0] == UncorrectW[i])
            {
                
                int actBW = i;
                for (; actBW <i+(CorrectWords.size()-1); actBW++)
                {
                    if (UncorrectW[actBW] == CorrectWords[actW])
                        actW++;
                }
                if (actW == CorrectWords.size()-1)//dfndjrhgbwtbqfhjhkrwb
                {
                    std::cout << "Newer give up ";
                }


            }
        }
        if(actW!= CorrectWords.size()-1)
        std::cout << CorrectWords << " ";

    }


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
