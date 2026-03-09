#include <iostream>
using namespace std;
int main() {
  int arr[5]={4,8,6,5,9};
  int n=5;
  int max_element=arr[0];
  for (int i=1 ; i<n; i++){
    if(arr[i]>max_element){
      max_element=arr[i];
    }
  }
  cout<<"The maximum element is: "<< max_element;
    return 0;
}