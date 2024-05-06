#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string h1,h2;
    cin >> h1 >> h2;
    long long same = 0;
    for (long long i = 0; i < h1.size(); i++)
    {
        if (h1[i] == h2[i])
        {
            same++;
        }
    }
    cout << "The same bits are: " << same << endl;
}
