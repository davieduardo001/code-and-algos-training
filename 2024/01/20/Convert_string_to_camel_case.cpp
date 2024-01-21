#include <bits/stdc++.h>
using namespace std;
#include <string>

std::string to_camel_case(std::string text)
{
    string currentString = text;
    string finalString;
    bool lastWasEspecialChar = false;
    int stringSize = currentString.size();

    for (int i = 0; i < stringSize; i++)
    {
        if (i == 0)
        {
            finalString += currentString[i];
        }
        else
        {
            if (!((currentString[i] == '-') || (currentString[i] == '_')))
            {
                char currentChar = currentString[i];

                if (lastWasEspecialChar == true)
                {
                    currentChar &= ~' ';
                    finalString += currentChar;
                }
                else
                {
                    finalString += currentChar;
                }
            }
            lastWasEspecialChar = ((currentString[i] == '-') || (currentString[i] == '_')) ? true : false;
        }
    }

    return finalString;
}

int main()
{
    cout << to_camel_case("A-BC") << "\n";
    return 0;
}