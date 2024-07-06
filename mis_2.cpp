#include<iostream>

class Array
{
public:
    Array();
    ~Array();
    int SetSize(int arry_size){ itsSize = arry_size; }
    int GetSize(){ return itsSize; }
private:
    int itsSize;
};

//наследуем класс
class BoundedAray : public Array{};

int main()
{
    return 0;
}