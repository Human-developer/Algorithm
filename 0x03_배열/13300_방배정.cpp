//
//  13300_방배정.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/08.
//

#include <bits/stdc++.h>
using namespace std;

int arr[2][7];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K;   // N: 총 학생수, K: 방의 최대 인원수
    cin >> N >> K;
    
    while(N--)
    {
        int S, Y;   // S: 성별, Y: 학년
        cin >> S >> Y;
        arr[S][Y]++;
    }
    
    int cnt = 0; // 카운트
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            cnt += arr[i][j]/K;
            if (arr[i][j] % K) cnt++;
        }
    }
    cout << cnt << '\n';
    
    return 0;
}

