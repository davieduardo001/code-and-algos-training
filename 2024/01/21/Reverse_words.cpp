#include <bits/stdc++.h>
using namespace std;

std::string reverse_words(std::string str)
{
    string finalString = "";
    string currentWord = "";
    bool firstWord = true;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            reverse(currentWord.begin(), currentWord.end());

            finalString += firstWord ? currentWord : " " + currentWord;

            firstWord = false;
            currentWord = "";
        }
        else
            currentWord += str[i];
    }

    reverse(currentWord.begin(), currentWord.end());
    finalString += firstWord ? currentWord : " " + currentWord;
    currentWord = "";

    return finalString;
}

int main()
{
    string stringFinal = reverse_words("The quick brown fox jumps over the lazy dog.");

    cout << stringFinal << "\n";
    return 0;
}