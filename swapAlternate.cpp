#include<iostream>
using namespace std;
void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
void swapAlternate(int arr[], int size){
  for(int i=0; i<size; i+=2){
    if(i+1<size){
      swap(arr[i],arr[i+1]);
    }
  }
}
int main(){
  int even[8]={1,5,8, 9,0,10,5,4};
  int odd[5]={2,3,7,6,5};
  swapAlternate(even,8);
  printArray(even,8);
  cout<<endl;
  swapAlternate(odd, 5);
  printArray(odd,5);
  return 0;

}
