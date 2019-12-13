#include <iostream>
using namespace std;
main (){
    int x,i,j,k;
    cout<<endl;
    cout<<endl;
    cout<<"Masukan tinggi:";
    cin>>x;
    for(i=1;i<=x;i++)
    {
        for(j=x;j>=i;j--)
        { cout<<" ";
       
        }
        for(k=1;k<=i+(i-1);k++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
   
   
return 0;
}

