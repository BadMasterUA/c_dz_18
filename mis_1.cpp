#include <iostream>
#include <string>
using namespace std;

// создаем класс
class Animal
{
public:
    Animal(){}
    ~Animal(){}
    int GetWeight() const { return itsWeight; }
    int GetAge() const { return itsAge; }
    int SetWeight(int Weight) { itsWeight = Weight; }
    int SetAge(int Age) { itsAge = Age; }
    string SetAnialName(string AnimalName) { itsAnimalName = AnimalName; }

private:
    int itsWeight;
    int itsAge;
    string itsAnimalName;
};

int main()
{
    return 0;
}