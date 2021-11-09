#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter test cases";
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cout<<"Enter number of elements"<<endl;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int sum=a[i]+a[j];
                for(int k=j+1;k<n;k++){
                    if(a[k]==sum)
                    {c=1;    cout<<i+1<<","<<j+1<<","<<k+1<<endl;}
                }
            }
        }
        if(c==0)
            cout<<"No sequence found"<<endl;
    }

}
