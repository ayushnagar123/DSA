#include <iostream>
#include "./../../helpers/operations_helpers.cpp"
#include "./../../helpers/array_helpers.cpp"
using namespace std;

template<typename T>
void reverse_array(int l, int arr[]){
  Operations<T> o;
  int s = 0, e = l-1;
  while(s<e){
    o.swap(arr[s],arr[e]);
    s++;
    e--;
  }
}

int main() {
  int arr[]={1,2,3,5,4};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array();

  reverse_array<int>(l, arr);
  
  cout<<"output array: \n";
  a.print_array();
}
