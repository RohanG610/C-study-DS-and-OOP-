#include<iostream>
#include<set>
#include<sstream>
using namespace std;

static std::string factors(int lst){
    string result;
    for(int i =2;i<=lst;i++)
    {
        if(lst%i==0)
        {
            int count=0;
            while(true)
            {
                count++;
                lst/=i;
                if(lst%i!=0)
                    break;
            }
            if(count==1)
            {
                string temp;
                stringstream ss;
                ss<<int(i);
                ss>>temp;
                result+="("+temp+")";
            }
            else
            {
                string temp,temp2;
                stringstream ss;
                ss<<int(i);
                ss>>temp;
                ss.clear();
                ss<<int(count);
                ss>>temp2;
                result+="("+temp+"**"+temp2+")";
            }
        }
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<factors(n);
    return 0;
}
