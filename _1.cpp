#include <iostream>
#include <windows.h>

using namespace std;

class Hat
{
private:
    string color;
    string size;
public:
    Hat(string inColor, string inSize) : color(inColor), size(inSize) {}

    string GetColor() const
    {
        return color;
    }

    string GetSize() const
    {
        return size;
    }
};

class Human
{
private:
    string name;
    string surname;
    Hat hat;
public:
    Human(string inName, string inSurname, Hat inHat) : name(inName), surname(inSurname), hat(inHat) {}

    friend ostream& operator<< (ostream &out, const Human& person)
    {
        out << "I'm " << person.name << " " << person.surname << "! I have a " << person.hat.GetColor() << " " << person.hat.GetSize() << " hat!";
        return out;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Hat something("Red", "big");
    Human someone("Sofia", "Rozumovich", something);
    cout << endl << someone << endl;
    
    return 0;
}