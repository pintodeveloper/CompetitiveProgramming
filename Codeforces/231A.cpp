#include <bits/stdc++.h>

using namespace std;


int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nProblem;
    int P= 0,V= 0,T =0 ;
    cin>>nProblem;

    int write = 0;
    
    for(int i=0; i<nProblem; i++){
        
        int count = 0;
        cin>>P;
        cin>>V;
        cin>>T;

        if(P==1) count ++;
        if(V==1) count ++;
        if(T==1) count ++;

        if(count > 1) write++;
    }

    cout<<write<<"\n";



    return 0;
}