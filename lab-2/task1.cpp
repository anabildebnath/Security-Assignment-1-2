#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string encryptedText;
    cin >> encryptedText;

    for (long long key = 0; key < 26; key++)
    {
        string decryptedText = encryptedText;

        for (long long i = 0; i < decryptedText.size(); i++)
        {
            long long cur = decryptedText[i] - 'a';
            cur = (cur + key) % 26;
            decryptedText[i] = cur + 'a';
        }

        cout << "key: " << key << ", decrypted text: " << decryptedText << endl;
    }
}

