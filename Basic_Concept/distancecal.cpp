#include <iostream>
#include<windows.h>
#include <cmath>

using namespace std;

class distancecal
{
private:
    int a, b;
    friend distancecal caldist(distancecal, distancecal);

public:
    float distance();
    distancecal()
    {
    }
    distancecal(int, int);
    void co_ordinate()
    {
        cout << "The given co-ordinate :(" << a << "," << b << ")" << endl;
    }
};

distancecal::distancecal(int x, int y)
{
    a = x;
    b = y;
}

distancecal caldist(distancecal d1, distancecal d2)
{
    distancecal d3;

    d3.a = (d1.a - d2.a) * (d1.a - d2.a);
    d3.b = (d1.b - d2.b) * (d1.b - d2.b);

    return d3;
}
float distancecal::distance()
{
    float sqr, dist;
    sqr = a + b;
    dist = sqrt(sqr);
    cout << "The distance of the given co-ordinate is :" << dist;
}

int main()
{
    distancecal d1(4, 5), d2(6, 7), caldis;
    d1.co_ordinate();
    d2.co_ordinate();
    caldis = caldist(d1, d2);
    caldis.distance();

    return 0;
}