#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string word;
    int i, length;
    char a;
    bool isPalindrome = false;

    bool f = true;
    while(f)
    {
        cout << "Enter a word / phrase: ";
        getline(cin, word);

        length = word.length();

        for(i = (length / 2) - 1; i >= 0; i--)
        {
            if(word[i] == word[(length - i) - 1])
            {
                isPalindrome = true;
            }
        }

        if(isPalindrome == true)
        {
            cout << word << " is a Palindrome" << endl;
        }

        else
        {
            cout << word << " isn't a Palindrome" << endl;
        }

        cout << "Would You Like To Continue Using The Program? (Y / N) \n";
        cin >> a;
        cin.ignore();

        if(a != 'Y')
        {
            f = false;
            cout << "Program Terminated. \n";
        }
    }
}