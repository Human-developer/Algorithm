//
//  1406_에디터_리스트구현풀이.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/13.
//

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int c)
{
    dat[unused] = c;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse()
{
    int idx = nxt[0];
    while(idx != -1)
    {
        cout << dat[idx];
        idx = nxt[idx];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
    
    string s; // 주어지는 문자열
    cin >> s;
    
    int cur = 0;
    for(auto c : s)
    {
        insert(cur, c);
        cur++;
    }
    
    int M; // 명령어의 개수
    cin >> M;
    
    while(M--)
    {
        char c;
        cin >> c;
        
        if (c == 'L')
            if (pre[cur] != -1) cur = pre[cur];
        if (c == 'D')
            if (nxt[cur] != -1) cur = nxt[cur];
        if (c == 'B')
        {
            if (pre[cur] != -1)
            {
                erase(cur);
                cur = pre[cur];
            }
        }
        if (c == 'P')
        {
            char x; // 추가 하려는 문자
            cin >> x;
            insert(cur, x);
            cur = nxt[cur];
        }
    }
    
    traverse();

    return 0;
}

