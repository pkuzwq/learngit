#include <iostream>
using namespace std;
int main()
{
    double a[100],b[100],x,y;//修改一下
    int n,i;
    cin>>n;
    cin>>a[1]>>b[1];
    x=b[1]/a[1];
    for (i=2;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        y=b[i]/a[i];
        if (y-x>0.05) cout<<"better"<<endl;
        else if (x-y>0.05) cout<<"worse"<<endl;
        else cout<<"same"<<endl;
    }
    return 0;
}
