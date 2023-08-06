#include<iostream>
using namespace std;

    class staticFunction
    {
    private:
      static int count;
    public:
      static void getData(){
        cout<<"The value of count is:"<<count+1<<endl;
      }
    };
    
   
    int staticFunction::count;
int main() 
 {
     staticFunction::getData();
    return 0;
}