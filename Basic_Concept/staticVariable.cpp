#include <iostream>
using namespace std;
class staticVariable
{
private:
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter the Id:" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of the employee is " << id << " having employee number " << count << endl;
    }
};
int staticVariable::count;

int main()
{
    staticVariable ram, hari, shyam;
    ram.setData();
    ram.getData();

    hari.setData();
    hari.getData();

    shyam.setData();
    shyam.getData();
    return 0;
}