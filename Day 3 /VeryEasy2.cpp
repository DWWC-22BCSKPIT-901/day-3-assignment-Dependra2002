#include <iostream>
#include <string>
using namespace std;

void print_full_name(string first, string last) {
    
    cout << "Hello " << first << " " << last << "! You just delved into function." << endl;
}

int main() {
    string first_name, last_name;

    
    getline(cin, first_name); 
    getline(cin, last_name);  

    
    print_full_name(first_name, last_name);

    return 0;
}
