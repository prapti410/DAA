#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int s;
        cin>>s;
        int l=0,h=n-1,temp=0;
        while(l<h){
            if(a[l]+a[h]==s)
            {temp=1; cout<<a[l]<<"+"<<a[h]<<"="<<s<<endl; h--; l++;}
            else if(a[l]+a[h]>s)
            {h--;}
            else{l++;}
        }
        if(temp==0)
        {cout<<"No such pair exists"<<endl;}
    }
}