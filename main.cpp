#include <iostream>
#include <string>

using namespace std;

int main()
{

    // take reg no as integer
    string regno;
    cout << "Enter your reg number: " << endl;
    cin >> regno;

    // extract the first 2 values
    string regnoInit = regno.substr(0, 2);

    //convert regnoInit to int
    int regnoInit2 = stoi(regnoInit);

    if (regno.length() == 7)
    {
        if (regnoInit2 >= 10 && regnoInit2 <= 24)
        {
            cout << "Your reg no ( " << regno << " ) is valid!" << endl;
        }
        else
        {
            cout << "Your reg no ( " << regno << " ) is invalid!" << endl;
        }
    }
    else if (regno.length() == 8)
    {
        if (regnoInit2 >= 25)
        {
            cout << "Your reg no ( " << regno << " ) is valid!" << endl;
        }
        else
        {
            cout << "Your reg no ( " << regno << " ) is invalid!" << endl;
        }
    }
    else
    {
        cout << "Your reg no ( " << regno << " ) is invalid!" << endl;
    }

    return 0;
}
