#include<iostream>
using namespace std;
class carpark
{
private:
   int carId;
   float time,totalCharge=0.0;
public:
   void setData();
   float chargCal(int =25);
};

void carpark::setData()
{
    cout<<"Enter the car Id:"<<endl;
    cin>>carId;
    cout<<"Enter the Parked Time:"<<endl;
    cin>>time;
   
};

float carpark::chargCal(int charge)
{
    totalCharge = charge*time;
    cout<<"Total charge for CarId:"<<carId<<" is "<<totalCharge;

}

int main() 
 {
    carpark p;
    p.setData();
    p.chargCal();
     
    return 0;
}