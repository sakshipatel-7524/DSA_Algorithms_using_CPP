#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    int mid;
    while(s<=n){
        mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key){
            return mid-1;
        }
        else{
            return mid+1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements for array=";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element whose index you want to get=";
    cin>>key;

    cout<<binarysearch(arr,n,key);




}
