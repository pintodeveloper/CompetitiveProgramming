#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_set<int> people;


    int n;
    cin>>n;
    int output=0,input=0,sum=0,max=0,aux;

    for(int i=0; i< n; i++){
        cin>>input>>output;
        aux = sum;
        sum += output;
        sum-=input;
        if(sum > aux && sum > max) max =sum; 


        //cout<<input<<" "<<output<<"\n";
        //cout<<"Este es el mayor: "<<sum<<"\n";

        //people.insert(sum);
    }

   // auto legal = max_element(people.begin(),people.end());
    //cout<<*legal<<"\n";
  
    cout<<max<<"\n";
   




    return 0;
}

