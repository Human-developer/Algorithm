//
//  11328_Strfry.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/08.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    while(N--)
    {
        string result = "Possible";
        int arr[26] = {};
        
        string str1, str2;
        cin >> str1 >> str2;
        
        for (auto c : str1)
            arr[c - 97]++;
        for (auto c : str2)
            arr[c - 97]--;
        
        for (int j = 0; j < 26; j++)
            if (arr[j] != 0) result = "Impossible";
        
        cout << result << "\n"cout
    }

    return 0;
}

