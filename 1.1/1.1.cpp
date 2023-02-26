// 1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    const int N = 10;
    int A[N] = { 4, 8, 1, 34, 89, 10, 13, 19, 18, 20 };
    int B[N];
    int* a = A;
    int* b  = B;
   

    cout << "*****Второй массив******\n";
    
    for (int i = 0; i < N;a++, b++, i++)
    {
        b = a;
        cout << *b << " " ;
       
    }
    cout << "\n\n";

  
}

