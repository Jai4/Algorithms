#include <bits/stdc++.h>

using namespace std;

int patternCount(string s){
    // Complete this function
    int oc=0;int count=0;char pr;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            if(count==1)
            {
                if(pr!='1')
                {
                oc=oc+1;
                }
            }
            else
            {
                count=count+1;
            }
        }
        else
        {
            if(s[i]!='0')
            {
                count=0;
            }
        }
        pr=s[i];
    }
    return oc;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}

