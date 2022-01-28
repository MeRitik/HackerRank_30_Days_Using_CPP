#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<string> names;
    while (q--)
    {
        string firstName, mail;
        cin >> firstName >> mail;

        if (regex_match(mail, regex("(.*)@gmail.com")))
        {
            names.push_back(firstName);
        }
    }
    names.sort();
    while (!names.empty())
    {
        cout << names.front() << endl;
        names.pop_front();
    }

    return 0;
}
