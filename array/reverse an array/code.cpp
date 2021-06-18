#include <iostream>
#include "./../../helper_functions/operations_helpers.cpp"
#include "./../../helper_functions/array_helpers.cpp"
using namespace std;

void reverse_array(int l, int arr[]){
  int s = 0, e = l-1;
  while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
}

int main() {
  int arr[]={1,2,3,5,4};
  int l = sizeof(arr)/sizeof(arr[0]);
  cout<<"input array: \n";
  print_array(l, arr);

  reverse_array(l, arr);
  
  cout<<"output array: \n";
  print_array(l, arr);
}
