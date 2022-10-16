#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str = "hello world";
    vector<int> v1 = {1,2,3,4,5,6};
    for (vector<int>::iterator iter=v1.begin(); iter != v1.end(); iter++) {
        cout << *iter << ' ';
    }
    cout << stk <<endl;

    // cout << str <<endl;
    return 0;
}




