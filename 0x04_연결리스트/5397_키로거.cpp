//
//  5397_키로거.cpp
//  algorithm
//
//  Created by 금성 on 2021/12/14.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N; // 테스트 케이스 개수
    cin >> N;

    while(N--)
    {
        list<char> list;
        auto cur = list.end();
        
        string L; // 주어지는 문자열
        cin >> L;
        
        for (auto c : L)
        {
            if (c == '<')
            {
                if (cur != list.begin()) cur--;
            }
            else if (c == '>')
            {
                if (cur != list.end()) cur++;
            }
            else if (c == '-')
            {
                if (cur != list.begin()) cur = list.erase(--cur);
            }
            else
            {
                list.insert(cur, c);
            }
        }
        for (auto c : list)
            cout << c;
        cout << '\n';
    }
    
    return 0;
}

