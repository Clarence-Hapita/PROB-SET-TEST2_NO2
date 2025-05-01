#include <iostream>
using namespace std;

int main(){
    int length, width;
    float area;
    cout<<"Length of your box:";
    cin>>length;
    cout<<"Width of your box:";
    cin>>width;
    
    
    cout<<"Area of your box:"<<length*width<<endl
    ;
    
    
    cout<<"Your box:"<<endl;
    for(int i=0;i<width;i++){
        for(int j=0;j<length;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}