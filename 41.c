#include<stdio.h>
#includeM<conio.h>
#include <bits/stdc++.h>
using namespace std;
 
int countOccurrences(string s, int K)
{
    int n = s.length();
    int C, c1 = 0, c2 = 0; 
    clrscr();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a')
            c1++;
        if (s[i] == 'b') {
            c2++; 
            C += c1;
        }
    }
    return C * K + (K * (K - 1) / 2) * c1 * c2;
}
int main()
{
    string S = "abcb";
    int k = 2;
    cout << countOccurrences(S, k) << endl; 
    return 0;
}
