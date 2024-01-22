#include <bits/stdc++.h>
using namespace std;

#include <string>
#include <stdio.h>

std::string highAndLow(const std::string &numbers)
{
  vector<int> arrOfNumbers;
  string currentNumber;
  string result;

  for (auto i : numbers)
  {
    if (i == ' ')
    {
      arrOfNumbers.insert(arrOfNumbers.end(), stoi(currentNumber));
      currentNumber = "";
      continue;
    }

    currentNumber += i;
  }

  arrOfNumbers.insert(arrOfNumbers.end(), stoi(currentNumber));

  int highNumber = arrOfNumbers[0];
  for (auto i : arrOfNumbers)
  {
    if (highNumber < i)
      highNumber = i;
  }

  int lowNumber = arrOfNumbers[0];
  for (auto i : arrOfNumbers)
  {
    if (lowNumber > i)
      lowNumber = i;
  }

  result += to_string(highNumber) + " " + to_string(lowNumber);

  return result;
}

int main()
{

  cout << "result: " << highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4") << "\n";

  return 0;
}