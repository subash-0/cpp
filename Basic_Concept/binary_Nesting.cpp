#include <iostream>
using namespace std;
class binary_Nesting
{
private:
    string s;
    void check_bnry();

public:
    void read();
    void display();
    void onesComp();
};

void binary_Nesting::read()
{
    cout << "Enter Binary Numbers:\n";
    cin >> s;
}

void binary_Nesting::check_bnry()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "You Entered a non-binary number";
        }
    }
}
void binary_Nesting::display()
{
    check_bnry();

    cout<<s;
}
void binary_Nesting::onesComp()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
}

int main()
{
    binary_Nesting bnry;
    bnry.read();
    cout<<"\nThe binary Number you entered:";
    bnry.display();
    bnry.onesComp();
    cout <<"\nOne's Complement is:";
    bnry.display();

    return 0;
}