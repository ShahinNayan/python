#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cout<<"Enter your number:";
    cin>>n;

    int terminal=0,non_terminal=0;
    vector<char> v;

    string azam;
    getline(cin,azam);


    while(n--)
    {

        getline(cin,azam);

        for(int i=0; i<azam.length()-1; i++)
        {
            if(azam[i]=='-'  && azam[i+1]=='>')
            {
                terminal++;
            }
            else if(azam[i]=='|')
            {
                terminal++;
            }
        }

        shakil.erase(1,2);
        sort(azam.begin(),azam.end());

        int index=unique(azam.begin(),azam.end())-azam.begin();

        for(int i=0; i<index; i++)
        {
            if(isupper(azam[i]))
            {
                non_terminal++;
                v.push_back(azam[i]);
            }
        }

    }
    cout<<"There are "<<terminal<<" productions and "<<non_terminal<<" nonterminals. Nonterminals are ";

    for(int i=0; i<v.size()-1; i++)
    {
        cout<<v[i]<<", ";
    }
    cout<<v[v.size()-1]<<endl;
    return 0;
}
