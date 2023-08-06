#include <iostream>
using namespace std;

class memoryArray
{
private:
    int count;
    int itemsId[10];
    int itemsPrice[10];

public:
    void Counter() { count = 0; }
    void setPrice();
    void dispItems();
};

void memoryArray::setPrice()
{
    cout << "Enter Your Id for Items No." << count + 1<<" :";
    cin >> itemsId[count];
    cout << "Enter Price for Item's Id:" << itemsId[count]<<" :";
    cin >> itemsPrice[count];
    count++;
}

void memoryArray::dispItems()
{
    for(int i=0;i<count;i++){
        cout<<"The Price of Items's Id "<<itemsId[i]<<" is Rs."<<itemsPrice[i]<<endl;
    }
}

int main()
{
    memoryArray mArry;
    mArry.Counter();
    mArry.setPrice();
    mArry.setPrice();
    mArry.setPrice();
    mArry.dispItems();

    return 0;
}