/* Write a program that prompts the user to input an integer and then outputs both the individual digits 
of the number and the sum of the digits. For example, it should output the individual digits of 3456 
as 3 4 5 6, output the individual digits of 8030 as 8 0 3 0, output the individual digits of 2345526 
as 2 3 4 5 5 2 6, output the individual digits of 4000 as 4 0 0 0, and output the individual digits of 
-2345 as 2 3 4 5.*/

#include <iostream>

using namespace std;

int main() 
{
        // variables
    int user_input;
    string user_input_digit;
    int counter = 0;
    int sum_digits = 0;
    int digit;

        //prompt user to input integer
    cout << "Enter an integer: ";
    cin >> user_input;

    user_input_digit = to_string(user_input);
    
        // calculate sum of digits
    while (user_input > 0) 
    {
        digit = user_input % 10;
        
        sum_digits += digit;

        user_input /= 10;
    }


    while (counter < user_input_digit.length()) 
    {
        cout << user_input_digit[counter] << " ";
        counter ++; 
        
    }
        // Output the sum of the digits
    cout << endl;
    cout << "Sum of Digits: " << sum_digits << endl;

    return 0;
}