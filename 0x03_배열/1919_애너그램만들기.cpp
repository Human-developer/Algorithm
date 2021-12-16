//
//  1919_애너그램만들기.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/10.
//

#include <bits/stdc++.h>
using namespace std;

int arr[26];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    for (auto c : s1)
        arr[c - 'a']++;
    for (auto c : s2)
        arr[c - 'a']--;
    
    int sum = 0;
    for (int i = 0; i < 26; i++)
        sum += abs(arr[i]);
    
    cout << sum << '\n';
    
    return 0;
}

