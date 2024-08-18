#include <bits/stdc++.h>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    //
    vector<int> v;
    int la = a.size(), lb = b.size();

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if(lb > la) swap(a,b), swap(la,lb);
    for(int i = lb; i < la; i++) b += '0';

    int c = 0;
    for(int i = 0; i < la; i++)
    {
        int sum = a[i]-'0' + b[i]-'0' + c;
        c = sum/10;
        v.push_back(sum%10);
    }
    if(c!=0) v.push_back(c);
    
    for(int i = 0; i < v.size(); i++) answer += (v[i] + '0');
    reverse(answer.begin(), answer.end());
    //
    return answer;
}