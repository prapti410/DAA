#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int i,int min,int key){
    int mid;
    int l=i;
    int h=min;
    while(h>=l){
    mid=(h+l)/2;
    while(h>=l){
    mid=(h+l)/2;
    if(a[mid]==key)
    {
        return mid;

    }
    else if(key>a[mid])
     {l=mid+1;}
    else
    {h=mid-1;}

    }
    return -1;
}
}
int exponential_search(int a[],int n,int key){
    if(a[0]==key)
        return 0;
    int i=1;
    while (a[i]<=key && i<n)
    {
        i=i*2;
    }
    return binary_search(a,i/2,min(i,n-1),key);

}


int main(){
int t;
cout<<"Enter test cases"<<endl;
cin>>t;
while(t--){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key to be searched"<<endl;
    cin>>key;
    int result=exponential_search(a,n,key);
    if(result==-1)
        cout<<"Key is not found: "<<endl;
    else
        cout<<"Key is found at index"<<result<<endl;
}

}
