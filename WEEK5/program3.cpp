#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    char t;
    int k=0;
    for(int i=0;i<n;i++)
  {      cin>>t;
        a[i]=t-97;
        if(a[i]>=k)
        {k=a[i];}

  }
  int count[k+1]={0};
  int b[n];
  for(int i=0;i<n;i++){
      count[a[i]]++;
  }
  for(int i=1;i<=k;i++){
      count[i]=count[i]+count[i-1];
  }
  for(int i=n-1;i>=0;i--){
      count[a[i]]--;
      b[count[a[i]]]=a[i];
  }
  for(int i=0;i<n;i++){
      a[i]=b[i];
  }
  int max=a[0],c=1,temp=0;
  for(int i=1;i<n;i++){
      if(a[i]==a[i-1]){
          c++;
          if(max<c)
          { temp=a[i]+97;
            max=c;
          }
      }
      else{
          c=1;
      }
  }
  if(temp==0){cout<<"no duplicate";}
  else{cout<<char(temp)<<"-"<<max;}

}