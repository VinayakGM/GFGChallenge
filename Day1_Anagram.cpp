#include <bits/stdc++.h>
using namespace std;
bool areAnagrams(string &s1, string &s2)
{
    // Your code here
    if (s1.size() != s2.size())
        return false;

    int n = s1.size();
    int m = s2.size();

    unordered_map<char, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[s1[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        if (mpp.find(s2[i]) == mpp.end())
        {
            return false;
        }

        mpp[s2[i]]--;

        if (mpp[s2[i]] < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "geeks";
    string s2 = "kseeg";

    cout << areAnagrams(s1, s2) << "\nhello world";

    return 0;
}