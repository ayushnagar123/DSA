#include<iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
int partition(T *arr, int low, int high){ // [1,1,2,3,5]
  T pivot = arr[high]; // 3
  Operations<T> o;
  int i = low-1; // -1
  for(int j = low; j < high; j++){ // -1
    if(arr[j] < pivot){ // false
      i++;
      o.swap(arr[j], arr[i]);
    }
  }
  o.swap(arr[i+1], arr[high]);
  return (i+1); //4
}

template<typename T>
T kth_smallest(T *arr,int low, int high, int k){ // arr, 0, 4, 4
  if(k > 0 && k<=(high - low + 1)){ // true
    int pivot = partition(arr, low, high); // arr, 0, 4, 4, true
    if((pivot-low) == (k-1)){
      return arr[pivot];
    }
    if((pivot-low) > (k-1)){
      return kth_smallest(arr, low, pivot - 1, k);
    }
    else{
      return kth_smallest(arr, pivot + 1, high, k - pivot + low - 1);
    }
  }
  return INT_MAX;
}


int main() {
  int arr[] = {3, 1, 4, 2, 5};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input array: \n";
  a.print_array();
  int k = 2;
  cout<<"output array: "<<endl;
  cout<<k<<"th min = "<<kth_smallest<int>(arr, 0, l-1, k)<<endl;
  cout<<k<<"th max = "<<kth_smallest<int>(arr, 0, l-1, l - k + 1)<<endl;
  return 0;
}
