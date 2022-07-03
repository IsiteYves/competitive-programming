#include <iostream>
using namespace std;

class Adder
{
public:
    Adder(int n)
    {
        if (n < 0)
        {
            cout << "Negative numbers not allowed" << endl;
            return;
        }
        this->total = n;
    }

private:
    int total = 0;

public:
    int getTotal()
    {
        return this->total;
    }

    void setTotal(int n)
    {
        if (n < 0)
        {
            cout << "Negative numbers not allowed" << endl;
            return;
        }
        this->total += n;
    }

    string toString()
    {
        return "Total: " + this->total;
    };
};

int main()
{
    Adder adder(-8);
    adder.setTotal(5);
    adder.setTotal(-4);
    adder.setTotal(3);
    adder.setTotal(9);
    cout << "Current total: " << adder.getTotal() << endl;
    cout << adder.toString() << endl;
    return 0;
}