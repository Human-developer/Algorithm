//
//  10807_개수세기.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/08.
//

#include <bits/stdc++.h>
using namespace std;

int arr[201];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, v;
    cin >> N;
    
    while(N--)
    {
        int num;
        cin >> num;
        arr[num+100]++;
    }
    
    cin >> v;
    cout << arr[v+100] << '\n';
    
    
    return 0;
}

