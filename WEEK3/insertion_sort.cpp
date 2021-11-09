#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int comp=0,shift=0;
        for(int i=1;i<n;i++){
            int value = a[i];
            int j=i-1;
            while (j>=0 && value<a[j])
            {
                a[j+1]=a[j];
                j--;
                comp++;
                shift++;
            }
            a[j+1]=value;
            shift++;

        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
        cout<<"comparison : "<<comp<<endl<<"shift : "<<shift;
    }

}