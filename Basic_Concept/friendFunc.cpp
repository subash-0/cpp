#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;
    friend complex sumComplex(complex o1, complex o2);

public:
    void setData(int n, int m)
    {
        a = n;
        b = m;
    }
    void print()
    {
        cout << "Given Complex :" << a << " + " << b << "i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(3, 4);
    c1.print();
    c2.setData(5, 6);
    c2.print();
    sum = sumComplex(c1, c2);
    sum.print();
    return 0;
}