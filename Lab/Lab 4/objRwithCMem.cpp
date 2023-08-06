#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    void nonConstMemberFunction() {
        cout << "Non-const member function called. Modifying data." << endl;
        data = 42;
    }

    void constMemberFunction() const {
        cout << "Const member function called. Data value: " << data << endl;
    }
};

int main() {
    const MyClass constObj(10);
    MyClass nonConstObj(20);

    // i) const_object.non_const_mem_function
    // cout << "Calling non-const member function on const object:" << endl;
    // constObj.nonConstMemberFunction();  // Allowed, but not recommended

    // ii) const_object.const_mem_function
    cout << "Calling const member function on const object:" << endl;
    constObj.constMemberFunction();     // Allowed and recommended

    // iii) non_const_object.non_const_mem_function
    cout << "Calling non-const member function on non-const object:" << endl;
    nonConstObj.nonConstMemberFunction();  // Allowed and common

    // iv) non_const_object.const_mem_function
    cout << "Calling const member function on non-const object:" << endl;
    nonConstObj.constMemberFunction();     // Allowed and less common

    return 0;
}
