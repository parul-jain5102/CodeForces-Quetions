//Problem 443A codeforces 
#include <iostream>
using namespace std;
string str;
int arr[123], sum = 0;
int main() {
    getline(cin, str);
    for (int i = 1; i < str.size(); i += 3)
    {
        
        arr[(int) str[i]] = 1;
    }
    for (int i = 0; i < 123; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}
