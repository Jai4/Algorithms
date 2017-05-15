class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,pair<int,char>> a;map<char,pair<int,char>> b;
        char f,g;
        pair<int,char> po; pair<int,char> op;
        for(unsigned int i=0;i<s.size();i++)
        {
           f=s.at(i);g=t.at(i);
           po=a[f];op=b[g];
           if((po.first==0)&&(op.first==0))
           {
               a[f]=make_pair(1,g);b[g]=make_pair(1,f);
           }
           else if((po.first==0)&&(op.first==1))
           {
               return false;
           }
           else if((po.first==1)&&(op.first==0))
           {
               return false;
           }
           else if ((po.first==1)&&(op.first==1))
           {
               if(po.second!=t.at(i))
               {
                   return false;
               }
           }
           
        }
        return true;
        
    }
};