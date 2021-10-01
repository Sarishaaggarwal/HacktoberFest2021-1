#include<iostream>
using namespace std;

int main(){
    int order;
    cout<<"Enter the order of the matrix"<<endl;
    cin>>order;
    int index = (order*(order+1))/2;
    int a[index];
    cout<<"Enter the elements"<<endl;
    for(int i=0 ; i<index ; i++){
        cin>>a[i];
    }
    int j=0;
    cout<<"Output"<<endl;
    int row, col;
    for (row = 1 ; row <= order ; row++){
        for(col = 1 ; col <= order ; col++){
            if (row<=col) {
                cout<<a[j]<<" ";
            j++;}
            else cout<<"0 ";
        }
        cout<<endl;
    }
    
return 0;
}
