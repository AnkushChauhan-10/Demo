#include<iostream>
using namespace std;
int main(){
    int board[10000],r[10000],c[10000];
    int n,k,rq,cq,j=0,i=0,count=0,flag=0;
    
    cin>>n>>k;
    cin>>rq>>cq;
    
    for(int i=1;i<=k;i++){
        cin>>r[i]>>c[i];
    }
    for(i=rq;i<=n;i++){
        j=1;
        while(j<=k){
            if(r[j]==rq && c[j]==i){
                flag=1;
                break;
            }
            j++;
        }
        if(flag==1){
            break;
        }
        count++;
    }
    for(i=rq;i>=1;i++){
         j=1;
        while(j<=k){
            if(r[j]==i && c[j]==cq){
                flag=1;
                break;
            }
            j++;
        }
        if(flag==1){
            break;
        }
        count++;
    }
    
    cout<<count;
    
    return 0;
}