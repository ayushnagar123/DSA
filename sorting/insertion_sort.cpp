#include<iostream>
#include "./../helpers/array_helpers.cpp"
#include "./../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void insertion_sort(int l, T *arr){
  Operations<T> o;
  T key;
  int i, j;
  for(i=1;i<l;i++){
      key = arr[i]; 
      for(j=i-1; j>=0 && arr[j] > key;j--){
          arr[j+1] = arr[j];
      }
      arr[j+1] = key;
  }
}

int main() {
  int arr[] = {3, 1, 4, 2, 5};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array();

  insertion_sort<int>(l, arr);
  
  cout<<"output array: \n";
  a.print_array();
  return 0;
}
