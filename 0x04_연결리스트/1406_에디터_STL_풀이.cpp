//
//  1406_에디터_STL_풀이.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/13.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; // 주어지는 문자열
    cin >> s;
    
    list<char> L;
    for (auto c : s) L.push_back(c);
    
    list<char>::iterator t = L.end(); // 커서위치

    int M; // 명령어 개수
    cin >> M;
    while(M--)
    {
        char c;
        cin >> c;
        
        if (c == 'L')
            if (t != L.begin()) t--;
        if (c == 'D')
            if (t != L.end()) t++;
        if (c == 'B')
            if (t != L.begin()) t = L.erase(--t);
        if (c == 'P')
        {
            char x; //추가 문자
            cin >> x;
            L.insert(t, x);
        }
    }

    for(auto c : L) cout << c;

    return 0;
}

