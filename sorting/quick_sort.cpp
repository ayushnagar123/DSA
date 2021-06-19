#include<iostream>
#include "./../helpers/array_helpers.cpp"
#include "./../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
int partition(T *arr, int low, int high, bool assending){
  T pivot = arr[high];
  Operations<T> o;
  int i = low - 1;
  if(assending){
    for(int j=low; j<=high-1; j++){
      if(arr[j] < pivot){
        i++;
        swap(arr[j], arr[i]);
      }
    }
  }
  else{
    for(int j=low; j<=high-1; j++){
      if(arr[j] > pivot){
        i++;
        o.swap(arr[j], arr[i]);
      }
    }
  }
  o.swap(arr[i+1], arr[high]);
  return (i+1);
}

template<typename T>
void quick_sort(T *arr,int low, int high, bool assending = true){
  if(low < high){
    int pivot = partition(arr, low, high, assending);
    quick_sort<T>(arr, low, pivot-1, assending);
    quick_sort<T>(arr, pivot+1, high, assending);
  }
}

int main() {
  int arr[] = {3, 1, 4, 2, 5};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array(l, arr);

  quick_sort(arr, 0, l-1, false);
  
  cout<<"output array: \n";
  a.print_array(l, arr);
  return 0;
}
