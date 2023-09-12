#include <iostream>
#include <string>

using namespace std;

string encrypt(string input, int shift) {
    string encrypted = "";
    for (char c : input) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a'; //uppercase or lowercase
            char shifted = static_cast<char>((c - base + shift) % 26 + base);
            encrypted += shifted;
        } else if (isdigit(c)) {
            char shifted = static_cast<char>((c - '0' + shift) % 10 + '0');
            encrypted += shifted;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

int main() {
    while(true){
    string input;
    int shift=5;
    //cin>>shift;

    cout << "Enter a string to encrypt: ";
    getline(cin, input);

    string encrypted = encrypt(input, shift);

    cout << "Encrypted string: " << encrypted << endl;
    }
    return 0;
}
