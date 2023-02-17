#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int buffer[100] = {0};
    int counter = 0;
    string str;
    cin >> str;
    int i = 0;

    int j = 0;
    while (str[i] != '\0')
    {
        int count = 0;
        int ch = str[i];
        while (str[j] != '\0')
        {
            if (str[j] == ch)
            {
                count++;
            }
            else
            {
                break;
            }
            j++;
        }
        buffer[counter] = count;
        counter++;
        i++;
    }
    for (int i = 0; i < counter; i++)
    {
        cout << buffer[i] << endl;
    }
    cout << "the max is : " << max(buffer, buffer + counter) << endl;
    return 0;
}