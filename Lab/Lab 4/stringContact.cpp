#include <iostream>
#include <cstring>
using namespace std;

class StringConcatenator {
private:
    char* str;

public:
    StringConcatenator(const char* initialString = "") {
        int length = strlen(initialString);
        str = new char[length + 1];
        strcpy(str, initialString);
    }

    ~StringConcatenator() {
        delete[] str;
    }

    void join(const StringConcatenator& str1, const StringConcatenator& str2) {
        int length = strlen(str1.str) + strlen(str2.str);
        delete[] str;
        str = new char[length + 1];
        strcpy(str, str1.str);
        strcat(str, str2.str);
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    StringConcatenator obj1("Engineers are");
    StringConcatenator obj2(" Creatures of logic");

    StringConcatenator joinedObj;
    joinedObj.join(obj1, obj2);

    joinedObj.display();

    return 0;
}
