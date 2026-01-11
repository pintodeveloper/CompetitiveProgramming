#include <bits/stdc++.h>

using namespace std;

int calculateMotion(double coordinate){
    
    if(coordinate >= 5) return ceil(coordinate/5);
    
    
    if(coordinate == 4) return ceil(coordinate/4);


    if(coordinate < 4) return ceil(coordinate/3);

    
    /* 
    int motions = 0;
    
for(int i=coordinate; i>0; i--){
    motions = 
}

return motions;


*/
}

int main()

{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int coordinate;
    cin>>coordinate;

    int motions = calculateMotion(coordinate);

    

    cout<<motions<<"\n";


    return 0;
}


