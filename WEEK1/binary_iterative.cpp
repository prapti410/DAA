#include<iostream>
using namespace std;
int binary(int a[],int n,int key){
    int mid;
    int l=0;
    int h=n-1;
    int comp=0;
    while(h>=l){
    mid=(h+l)/2;
    if(a[mid]==key)
    {
        comp++;
        cout<<"Number of comparison is: "<<comp<<endl;
        return mid;

    }
    else if(key>a[mid])
     {comp++;   l=mid+1;}
    else
    {comp++;    h=mid-1;}

    }
    cout<<"Number of comparison is: "<<comp<<endl;
    return -1;
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
    int result=binary(a,n,key);
    if(result!=-1)
        cout<<"Key is found at index: "<<result<<endl;
    else
        cout<<"Key is not found"<<endl;
}

}
