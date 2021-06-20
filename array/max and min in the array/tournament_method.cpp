#include <iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
#include "./helpers/question_helpers.cpp"
using namespace std;

template<typename T>
Pair<T> find_max_and_min(T arr[], int low, int high) {
  class Pair<T> minmax, minmax_left, minmax_right;
  Operations<T> o;
  if(low==high){
    minmax.min = arr[0];
    minmax.max = arr[0];
    return minmax;
  }
  if(high == low+1){
      if(arr[high] > arr[low]){
        minmax.min = arr[low];
        minmax.max = arr[high];
      }
      else{
        minmax.min = arr[high];
        minmax.max = arr[low];
      }
      return minmax;
  }
  int mid = (high+low)/2;
  minmax_left = find_max_and_min(arr, low, mid);
  minmax_right = find_max_and_min(arr, mid+1, high);
  minmax.min = o.min(minmax_left.min, minmax_right.min);
  minmax.max = o.max(minmax_left.max, minmax_right.max);
  return minmax;
}

int main() {
  double arr[]={1.1,2.2,3.1,5.3,4.1};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<double> a(l, arr);
  cout<<"input: ";
  a.print_array();

  class Pair<double> minmax = find_max_and_min<double>(arr, 0, l-1);
  
  cout<<"output: \nmax: "<<minmax.max<<"\nmin: "<<minmax.min<<endl;
}
