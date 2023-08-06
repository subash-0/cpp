#include<iostream>
using namespace std;
class employee
{
private:
   float salary,bonus,overtime;
   int empId,year;
public:
    void setParams();
    void showParams();
};

void employee::setParams()
{
        cout<<"Enter Employee Id:"<<endl;
        cin>>empId;
        cout<<"Enter actual Salary:"<<endl;
        cin>>salary;
        cout<<"Enter the woring year:"<<endl;
        cin>>year;
        cout<<"Enter Overtime Worked in Hour:"<<endl;
        cin>>overtime;
        bonus = overtime*100;
}

void employee::showParams()
{
         cout<<"\nAn employee with Id:"<<empId
            <<" has received Rs."<<bonus
            <<" as bonus "<<endl
            <<"and  "<<endl
            <<"had worked "<<overtime<<" hours as overtime in the year:"<<year<<endl;
}

int main() 
 {
    employee emp[100];
    int n;
    cout<<"How many numbers of employees do you have ?"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
        emp[i].setParams();
    for (int i = 0; i < n; i++)
    {
     emp[i].showParams();
    }
    
    
     
    return 0;
}