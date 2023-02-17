#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long int i = 1;
    while (i != n)
    {
        if (i != a[i - 1])
        {
            break;
        }
        i++;
    }
    cout << i;
    return 0;
}