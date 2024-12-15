#include<iostream>
#include<vector>
using namespace std;

int A = 20;

int main() {


    int A = 30;

    cout << A << " " << ::A << endl;

    // explicit typecasting
    int x = int(8.6) + 10;
    cout << x << endl;

    // implicit typecasting
    int y = 8.6 + 3.1;
    cout << y << endl;

    vector<int> ans = {1,2,4};

    ans.push_back(50);

    cout << ans.size() << endl;
    cout << ans.capacity() << endl;

    ans.push_back(60);
    ans.push_back(70);

    cout << ans.size() << endl;
    cout << ans.capacity() << endl;

    ans.push_back(80);

    cout << ans.size() << endl;
    cout << ans.capacity() << endl;

    return 0;
}