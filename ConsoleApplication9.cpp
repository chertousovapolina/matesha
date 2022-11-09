// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Чертоусова люби математику
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    float k, b;
    cin >> x >> k >> b;
    y = k * x + b;
    cout << y << endl;
    if (y > 0 && x > 0) cout << "1 четверть";
    if (y > 0 && x < 0) cout << "2 четверть";
    if (y < 0 && x < 0) cout << "3 четверть";
    if (y < 0 && x>0) cout << "4 четверть";

}

