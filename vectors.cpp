#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> vect1;
    for (int i = 0; i < 4; i++)
    {
        int ele;
        cout << "add in vect1 ";
        cin >> ele;
        vect1.push_back(ele);
    }
    display(vect1);
    return 0;
}