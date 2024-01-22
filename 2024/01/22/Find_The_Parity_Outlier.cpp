#include <bits/stdc++.h>
using namespace std;

int FindOutlier(std::vector<int> arr)
{
    int isOdd = 0, isEven = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if((arr[i] % 2) == 0)
            isEven++;
        else
            isOdd++;
    }


    if (isOdd == 1)
    {
        for (int i = 0; i < arr.size(); i++)
            if ((arr[i] % 2) != 0)
                return arr[i];
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
            if ((arr[i] % 2) == 0)
                return arr[i];
    }

    return -1;
}

int main()
{
    cout << "result: " << FindOutlier({2, 3, 4}) << "\n";
    return 0;
}