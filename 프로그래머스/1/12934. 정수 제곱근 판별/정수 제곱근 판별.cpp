#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    //
    if (pow((int)sqrt(n), 2) == n) answer = pow(sqrt(n) + 1, 2);
    else answer = -1;
    //
    return answer;
}