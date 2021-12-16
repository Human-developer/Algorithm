//
//  1158_요세푸스문제.cpp
//  Algorithm
//
//  Created by 금성 on 2021/12/15.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, K; //총 N명의 사람, 제거할 K번째 사람을 입력 받는다.
    cin >> N >> K;
    
    list<int> L, R = {}; //1~N까지 저장할 리스트 L, 결과를 저장할 리스트 R
    for(int i = 1; i <= N; i++)
        L.push_back(i); //1~N까지 리스트 생성
    
    auto cur = L.begin(); // 시작점을 가리키는 커서
    
    int cnt = 0; // K번째를 카운트 할 변수
    while(L.size()) // 리스트 순회
    {
        if (cur == L.end())
        {
            cur = L.begin();
            continue;
        }
        
        cnt++;
        
        if(cnt % K == 0)
        {
            R.push_back(*cur); // 순열 생성
            cur = L.erase(cur); // 제거
            cnt = 0;
            continue;
        }
        
        cur++;
    }
    
    //순열 출력
    cout << '<';
    cnt = 1;
    for(auto i : R)
    {
        cout << i;
        if (cnt < R.size()) cout << ", ";
        cnt++;
    }
    cout << '>';

    return 0;
}
