//
//  3273_두수의합.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/08.
//

#include <bits/stdc++.h>

using namespace std;

int arr[2000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x;
    cin >> n;
    
    while(n--)
    {
        int num;
        cin >> num;
        arr[num]++;
    }
    
    cin >> x;
    
    int cnt = 0;
    for(int i = 1; i < 2000001; i++)
    {
        if(arr[i] == 0 || i >= x) continue;
        if((x-i) != i)
        {
            if(arr[(x-i)] == 1)
            {
                cnt++;
                arr[i] = 0;
            }
        }
    }
    cout << cnt << '\n';
    
    return 0;
}
