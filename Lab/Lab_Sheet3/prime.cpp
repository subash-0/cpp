#include<iostream>
using namespace std;
    class prime
    {
    private:
        int num;
    public:
       int setNum(){
        cout<<"Enter the number:"<<endl;
        cin>>num;
       }
       int Calculate(){

            int i,flag=0;
            (num==0 || num==1)?flag=1:flag=0;
            for ( i = 2; i <= num/2; ++i)
            {
              if(num%i==0){
               flag=1;
               break;
              }
            }
            (flag!=0)?cout<<"Number you entered is not prime.":cout<<"Number You entered is Prime.";
            
       }
    };
    
  
    
int main() 
 {
    prime p;
    char c;
     do
     {
        p.setNum();
        p.Calculate();
        cout<<"\nWould You like to another one (y/n):"<<endl;
        cin>>c;
     } while (c=='y');
     
    return 0;
}