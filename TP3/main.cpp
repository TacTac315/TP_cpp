#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<float> V1;
vector<float> V2;
int main(int argc, char **argv)
{
    cout << "V1:" << endl;
    for (int i = 0; i < 10; i++)
    {
        V1.push_back((float)i / 10);
        cout << V1[i] << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        V2.push_back((V1[i]));
    }
    for (int i = 1; i < V2.size() / 2; i++)
    {
        V2.pop_back();
    }

    cout << "V2:" << endl;
    for (int i = 0; i < V2.size(); i++)
    {
        cout << V2[i] << endl;
    }

    return 0;
}
