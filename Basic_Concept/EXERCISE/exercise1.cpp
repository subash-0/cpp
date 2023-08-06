#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Simple
{
private:
    int a, b;

protected:
    float re;

public:
    void display(float);
    void setNum();
    void Result();
};
void Simple::setNum()
{
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;
}
void Simple::Result()
{
    int c;
        
        cout << "Choose Your option:" << endl
             << "1. +" << endl
             << "2. -" << endl
             << "3. *" << endl
             << "4. /" << endl;
        cin >> c;
        setNum();
        switch (c)
        {
        case 1:
            re = a + b;
            display(re);
            break;
        case 2:
            re = a - b;
            display(re);
            break;
        case 3:
            re = a * b;
            display(re);
            break;
        case 4:
            re = (float)a / b;
            display(re);
            break;

        default:
            cout << "Please choose from the given option:" << endl;
            break;
        }

}

void Simple::display(float res)
{
     cout << setprecision(4);
    cout << "Your Result is:" << res << endl;
}

class Scientific : public Simple
{
private:
    float deg;

public:
    void sinOpn(float);
    void cosOpn(float);
    void tanOpn(float);
    void cotOpn(float);
    void setDeg();
    void controller(void);
};
void Scientific::setDeg()
{
    cout << "Enter Angle in degree:" << endl;
    cin >> deg;
}
void Scientific::sinOpn(float degs)
{
    re = sin(degs);
    display(re);
}
void Scientific::cosOpn(float degs)
{
    re = cos(degs);
    display(re);
}
void Scientific::tanOpn(float degs)
{
    re = tan(degs);
    display(re);
}
void Scientific::cotOpn(float degs)
{
    re = 1 / tan(degs);
    display(re);
}

void Scientific::controller()
{
    int op;
    setDeg();
    float degs = deg * 3.14159 / 180;
    cout << "Choose Scientific Option:" << endl
         << "1. sin(" << deg << ")" << endl
         << "2. cos(" << deg << ")" << endl
         << "3. tan(" << deg << ")" << endl
         << "4. cot(" << deg << ")" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        sinOpn(degs);
        break;
    case 2:
        cosOpn(degs);
        break;
    case 3:
        tanOpn(degs);
        break;
    case 4:
        cotOpn(degs);
        break;

    default:
        break;
    }
}
class Controller : public Scientific
{
  public:
  void controlled(){
    int i;
    char option;
    do
    {
       cout<<"Choose calculator Mode:"<<endl   
        <<"1. Simple mode:"<<endl
        <<"2. Scientific mode:"<<endl;
        cin>>i;
    switch (i)
    {
    case 1:
        Result();
        break;
     case 2:
        controller();
        break;
    
    default:
        break;
    }
    cout<<"Would You Like To Continue(y/n):";
    cin>>option;
    } while (option=='y');
    
    
  }
};


int main()
{
    Controller c;
    c.controlled();

    return 0;
}