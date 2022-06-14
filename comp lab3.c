#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);
#define endl '\n'

int main()
{
    int n;
    cout << "Enter the total number:";
    cin >> n;

    while (n--)
    {
        /* code */
        string nayan;
        cin >> nayan;

        if (nayan.length() ==1)
        {
            if (nayan == ",")
            {
                cout << "Comma (,)" << endl;
            }
            else if (nayan == ".")
            {
                cout << "Period (.)" << endl;
            }
            else if (nayan == ":")
            {
                cout << "Colon 🙂)" << endl;
            }
            else if (nayan == ";")
            {
                cout << "Semicolon (😉" << endl;
            }
            else if (nayan == "'")
            {
                cout << "single quotation marks" << endl;
            }
            else if (nayan == "\"")
            {
                cout << "double quotation marks" << endl;
            }
            else if (nayan == "?")
            {
                cout << "Question Mark (?)" << endl;
            }
            else if (nayan == "!")
            {
                cout << "Exclamation Point (!)" << endl;
            }
            else if (nayan == "\\")
            {
                cout << "The backslash " << endl;
            }
            else if (nayan == "/")
            {
                cout << "Slash(/)" << endl;
            }
            else if (nayan == "(")
            {
                cout << "Open Parentheses (" << endl;
            }
            else if (nayan == ")")
            {
                cout << "close Parentheses ) " << endl;
            }
            else if (nayan == "[")
            {
                cout << "Open Brackets ]" << endl;
            }
            else if (nayan == "]")
            {
                cout << "Close Brackets ]" << endl;
            }
            else if (nayan == "{")
            {
                cout << "Open Braces {" << endl;
            }
            else if (nayan == "}")
            {
                cout << "Close Braces }" << endl;
            }
            else
            {
                cout << "Invalid quotation" << endl;
            }
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
