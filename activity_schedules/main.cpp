#include <iostream>
using namespace std;
int n,c=0;
void go(int i,string s,string prev) {
    if(i==n) {
        c++;
        cout<<s<<endl;
        return;
    }
    if(prev!="Swimming") {
        go(i+1,s+"Swimming ","Swimming");
    }
    if(prev!="Running") {
        go(i+1,s+"Running ","Running");
    }
    if(prev!="Football") {
        go(i+1,s+"Football ","Football");
    }

}
int main()
{
    cin>>n;
    go(0,"","");
    cout<<"COUNT: : "<<c<<endl;
    return 0;
}
