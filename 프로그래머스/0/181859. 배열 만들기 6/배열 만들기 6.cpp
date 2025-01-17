#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    //
    int i = 0;
    while (i < arr.size())
    {
        if (answer.empty())
        {
            answer.push_back(arr[i]);
            i++;
        }
        if (i < arr.size() && !answer.empty() && answer.back() == arr[i])
        {
            answer.pop_back();
            i++;   
        }
        if (i < arr.size() && !answer.empty() && answer.back() != arr[i])
        {
            answer.push_back(arr[i]);
            i++;
        }
    }
    if (answer.empty()) answer.push_back(-1);
    //
    return answer;
}