﻿// 1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
// 
// 
////Используя два указателя на массивы целых 
//чисел, скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном порядке.

#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size] = { 5, 7, -8, 3, 9 };
    int arr2[size];
    int* a = arr;
    int* b = arr2;

    b = a;
    for (int i = size-1; i >= 0; i--)
    {
        
        cout << *(b+i) << ' ';
       
    }
    cout << endl;
}

