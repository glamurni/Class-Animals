// ConsoleApplication12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Animals
{public:
    Animals(int mass,int lengtch);
    void Display(void);
    void GetTime(int& mass, int& lengtch);
    void SetTime(int& lengtch1, int mass1);
    //void SetTime(int& mass1, int& lengtch1);
    Animals(void);
private:
    int mass;
        int lengtch;
        int mass1;
        int lengtch1;
};

int main()
{
    setlocale(LC_ALL, "rus");
    Animals ap;
    ap.Display();
    return 0;
    
}
Animals::Animals(void)
{
    cout << "Введите значение mass"<<endl;
    cin >> mass;
    cout << "Введите значение lengtch" << endl;
    cin >> lengtch;
}
void Animals::Display(void)
{
    cout << "mass=" << mass << endl;
    cout << "lengtch=" << lengtch << endl;
}

void Animals::GetTime(int&mass1,int&lentgch)
{
    mass1 = mass;
    lengtch1 = lengtch;


}
void Animals::SetTime(int& lengtch1, int mass1)
{
    mass = mass1;
    lengtch = lengtch1;

}