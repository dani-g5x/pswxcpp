#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

//Define psw function, for user input
string psw() {
		 //Define the chars that will be used in the password
        const char* chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:,.<>?";

        //Define the lenght of the password
        int length{ };

        //cin to hold user input value
        cin >> length;

        //Seed a random number generator
        srand(time(NULL));

        //Generate the password
        string password= "";
        for(int i = 0; i < length; i++) {
            int index = rand() % strlen(chars);
            password += chars[index];
        }
		return password;
}
//Finally print the password in function main	
int main() {
		cout << "Please insert your password length:";

		cout << psw();
		return 0;
}
