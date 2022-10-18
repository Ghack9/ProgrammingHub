#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin>>n;
    
    int i,j;
    i=1;
    int k=n;
    while(i<=n){
		j=1;
        while(j<=k){
            cout<<k;
            j++;
        }
        cout<<endl;
        i++;
        k--;
    
    }
}


