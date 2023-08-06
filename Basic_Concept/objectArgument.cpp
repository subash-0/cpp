#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;

public:
    void setData(int n, int m)
    {
        a = n;
        b = m;
    }
    void sum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void Print()
    {
        cout << "The complex is:" << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.Print();
    c2.setData(3, 4);
    c2.Print();
    c3.sum(c1, c2);
    c3.Print();
    return 0;
}