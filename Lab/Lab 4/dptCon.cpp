#include <iostream>
#include <string>
using namespace std;

class Department {
private:
    int departmentID;
    string departmentName;

public:
    Department(int id, const string& name) : departmentID(id), departmentName(name) {
        cout << "Object " << departmentID << " is created." << endl;
    }

    ~Department() {
        cout << "Object " << departmentID << " goes out of the scope." << endl;
    }
};

int main() {
    Department dept1(1, "Engineering");
    {
        Department dept2(2, "Marketing");
    }
    Department dept3(3, "Sales");

    return 0;
}
