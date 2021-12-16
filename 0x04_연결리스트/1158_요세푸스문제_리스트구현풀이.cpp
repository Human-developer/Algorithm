//
//  1158_요세푸스문제_리스트구현풀이.cpp
//  Algorithm
//
//  Created by 금성 on 2021/12/16.
//

#include <bits/stdc++.h>
using namespace std;

int N, K, len = 0;
//원형 연결리스트를 만들기위한 배열
int pre[5001];
int nxt[5001];
vector<int> vResult;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> K;
    
    for (int i = 1; i <= N; i++)
    {
        //끝과 끝이 연결 되도록 리스트를 만든다.
        pre[i] = (i == 1) ? N : i - 1;
        nxt[i] = (i == N) ? 1 : i + 1;
        len++;
    }
    
    // 원형 연결리스트를 순회하며 순열을 담는다.
    int cnt = 1;
    for (int cur = 1; len != 0; cur = nxt[cur])
    {
        if (cnt == K)
        {
            nxt[pre[cur]] = nxt[cur];
            pre[nxt[cur]] = pre[cur];
            vResult.push_back(cur);
            cnt = 1;
            len--;
        }
        else
            cnt++;
    }
    
    //순열출력
    cout << "<";
    for (int i = 0; i < vResult.size(); i++)
    {
        cout << vResult[i];
        if (i != vResult.size() - 1) cout << ", ";
    }
    cout << ">";
    
    
    return 0;
}

