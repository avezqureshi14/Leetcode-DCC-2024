#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s)
{
    int kids = g.size();
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < g.size() && j < s.size())
    {
        if (g[i] > s[j])
        {
            count++;
            i++, j++;
        }
        else if (g[i] > s[j])
        {
            j++;
        }
    }

    return count;
}
int main()
{

    return 0;
}