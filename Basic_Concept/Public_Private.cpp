#include<iostream>
using namespace std;
class NumberData
{
private:
   int a,b,c;
public:
   int d,e;
   void setData(int a1, int b1, int c1);
   void dispData(){
    cout<<"The Value of a :"<<a<<endl;
    cout<<"The Value of b :"<<b<<endl;
    cout<<"The Value of c :"<<c<<endl;
    cout<<"The Value of d :"<<d<<endl;
    cout<<"The Value of e :"<<e<<endl;

   }
};

void NumberData::setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
  NumberData ND;
  ND.d=40;
  ND.e=20;
  ND.setData(4,5,6);
//   ND.a=40; You can't access a as it is private so only class members can access it.
  ND.dispData();
  return 0;  
} 


