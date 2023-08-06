#include<iostream>
using namespace std;

    class arrayObject
    {
    private:
       int id;
       float salary;
    public:
       void setData(){
        cout<<"Enter Id of Employee:"<<endl;
        cin>>id;
         cout<<"Enter salary of Id :"<<id<<endl;
        cin>>salary;
       }
       
       void getData(){
        cout<<"The salary of employee having Id:"<<id<<" is "<<salary<<endl;
       }
    };

int main() 
 {
     arrayObject aO[4];
     int i;
     for(i=0;i<2;i++){
        aO[i].setData();
       }
        i=0;
       while(i<2){
        aO[i].getData();
        i++;
       }
    return 0;
}