// A. Boy or Girl
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>0)
            count++;
    }
    if (count % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}