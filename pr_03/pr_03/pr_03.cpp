﻿// pr_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    int A[5];
    int B[4];
    setlocale(LC_ALL, "Russian");
    cout << "Введите 5 элементов массиава A\n";
    int proizA = 1;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        proizA *= A[i];
    }
    int proizB = 1;
    cout << "Введите 4 элемента массиава B\n";
    for (int i = 0; i < 4; i++) {
        cin >> B[i];
        proizB *= B[i];
    }
    if (proizA > proizB) {
        cout << "Произведение массива A больше чем B\n";
        cout << "Произведение массива A:" << proizA << endl;
        cout << "Произведение массива B:" << proizB << endl;
        for (int i = 0; i < 5; i++) {
            cout << A[i] <<endl;
        }
    }
    else {
        cout << "Произведение массива B больше чем A\n";
        cout << "Произведение массива A:" << proizA << endl;
        cout << "Произведение массива B:" << proizB << endl;
        for (int i = 0; i < 4; i++) {
            cout << B[i] << endl;
        }
    }
}
