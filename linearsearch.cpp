#include<iostream>
using namespace std;

int linearsearch(int array[], int n, int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements=";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];

    }

    int key;
    cout<<"Enter the number whose index you want to find=";
    cin>>key;
    cout<<linearsearch(array,n,key);




}