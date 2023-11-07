#include <iostream>
#include <windows.h>

using namespace std;

class Human
{
private:
    string name;
    string surname;
public:
    Human(string inName, string inSurname) : name(inName), surname(inSurname) {}

    friend ostream& operator<< (ostream &out, const Human& point)
    {
        out << "I'm " << point.name << " " << point.surname << "!";
        return out;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Human someone("Sofia", "Rozumovich");
    cout << endl << someone << endl;
    return 0;
}