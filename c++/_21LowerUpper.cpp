#include <iostream>
using namespace std;

string kToUpper(string text);
string kToLower(string text);

int main()
{

    cout << "khalid -> " << kToUpper("khalid") << endl;
    cout << "KHALID -> " << kToLower("KHALID");

    return 0;
}

string kToUpper(string text)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 97 && text[i] <= 122)
        {
            result = result + char(text[i] - 32);
        }
        else
        {
            result = result + text[i];
        }
    }

    return result;
}

string kToLower(string text)
{
    string result = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] >= 65 && text[i] <= 90)
        {
            result = result + char(text[i] + 32);
        }
        else
        {
            result = result + text[i];
        }
    }

    return result;
}