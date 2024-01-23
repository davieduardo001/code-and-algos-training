#include <bits/stdc++.h>
using namespace std;

# include <string>

std::string disemvowel(const std::string& str) {
    // return
    string finalString;
    for (auto i : str) {
        if (i == 'a' || i == 'A' || i == 'e' || i == 'E' || i == 'i' || i == 'I' || i == 'o' || i == 'O' || i == 'u' || i == 'U')
            continue;
        
        finalString += i;
    }

    return finalString;
}

int main() {

    cout << "result: " << disemvowel("This website is for losers LOL!") << "\n";
    return 0;
}