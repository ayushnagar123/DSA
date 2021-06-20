#include<iostream>
#include "./../helpers/array_helpers.cpp"
#include "./../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void selection_sort(int l, T *arr){
  Operations<T> o;
  int min_index;
  for(int i=0;i<l;i++){
    min_index = i;
    for(int j=i+1;j<l-i-1;j++){
      if(arr[j] < arr[min_index]){
          min_index = j;
      }
    }
    o.swap(arr[i],arr[min_index]);
  }
}

int main() {
  int arr[] = {3,1,4,2,5};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array();

  selection_sort<int>(l, arr);
  
  cout<<"output array: \n";
  a.print_array();
  return 0;
}
