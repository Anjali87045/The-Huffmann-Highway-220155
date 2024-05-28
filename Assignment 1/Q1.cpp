#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Input: " ;
    cin >> n;
    cout <<endl<< "Output: " << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j%2==0){
                for (int k=1;k<=i+1;k++) cout<<k;
                    for (int k=1;k<n-i;k++) cout<<" ";
            } if (j%2==1){
                    for (int k=1;k<n-i;k++) cout<<" ";
                        for (int k=i+1;k>=1;k--) 
                        cout<<k;}
        }
        cout<<endl;
        
    }
}