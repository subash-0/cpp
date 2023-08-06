#include<iostream>
using namespace std;
float pi = 3.1415;
class Circle
{
private:
    float area,radius;
public:
  void setData();
  void calculateArea();
};

void Circle::setData(){
    cout<<"Enter the radius of the circle:"<<endl;
    cin>>radius;

}

void Circle::calculateArea(){
    area = pi*radius*radius;
    float peri = 2*pi*radius;
    cout<<"\nArea of the circle :"<<area<<endl;
    cout<<"Perimeter of circle:"<<peri<<endl;
}

class Rectangle
{
private:
    float length,breath;
public:
   void setData();
   void calculateData();
};

void Rectangle::setData()
{
    cout<<"Enter the length and breath of rectangle:"<<endl;
    cin>>length>>breath;
}

void Rectangle::calculateData()
{
        float area,peri;
        area = length*breath;
        peri = 2*(length+breath);
        cout<<"\n Area of rectangle is:"<<area
            <<"\n Perimeter of Rectangle:"<<peri<<endl;
}


int main() 
 {
    int opt;
    char c;
    Circle cir;
    Rectangle rec;
    do{
        cout<<"Select one from given option:"<<endl
            <<"1.Calculate Area and perimeter of circle:"<<endl
            <<"2.Calculate Area and perimeter of Rectangle:"<<endl;

        cin>>opt;

        switch (opt)
        {
        case 1:
                cir.setData();
                cir.calculateArea();
            break;
         case 2:
                rec.setData();
                rec.calculateData();
            break;
        
        default:
            break;
        }
        cout<<"\nWould you like to continue(y/n):"<<endl;
        cin>>c;
    }while (c=='y');
    
    
     
    return 0;
}