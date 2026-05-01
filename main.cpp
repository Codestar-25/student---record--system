#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
};

int main() {
    Student s[3];

    // Input
    for(int i = 0; i < 3; i++) {
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter ID: ";
        cin >> s[i].id;
    }

    // Output
    cout << "\nStudent Records:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Name: " << s[i].name << ", ID: " << s[i].id << endl;
    }

    return 0;
}
  
