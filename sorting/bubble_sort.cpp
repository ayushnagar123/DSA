#include<iostream>
#include "./../helpers/array_helpers.cpp"
#include "./../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void bubble_sort(int l, T *arr){
  Operations<T> o;
  for(int i=0;i<l;i++){
    for(int j=0;j<l-i-1;j++){
      if(arr[j]>arr[j+1]){
        o.swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main() {
  int arr[] = {3,1,4,2,5};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array(l, arr);

  bubble_sort<int>(l, arr);
  
  cout<<"output array: \n";
  a.print_array(l, arr);
  return 0;
}
