#include <iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
#include "./helpers/question_helpers.cpp"

template<typename T>
class Pair<T> find_max_and_min(int l, T arr[]) {
  class Pair<T> minmax;
  int i;
  if(l%2==0){
    if(arr[1]>arr[0]){
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    else{
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    i = 2;
  }
  else{
    minmax.min = arr[0];
    minmax.max = arr[0];
    i = 1;
  }
  while(i < l-1){
    if(arr[i] > arr[i+1]){
      if(arr[i] > minmax.max){
        minmax.max = arr[i];
      }
      if(arr[i+1] < minmax.min){
        minmax.min = arr[i+1];
      }
    }
    else{
      if(arr[i+1] > minmax.max){
        minmax.max = arr[i+1];
      }
      if(arr[i] < minmax.min){
        minmax.min = arr[i];
      }
    }
    i += 2;
  }
  return minmax;
}

int main() {
  string arr[]={"ayush", "nagar", "is", "here"};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<string> a(l, arr);
  cout<<"input: ";
  a.print_array(l, arr);

  class Pair<string> minmax = find_max_and_min<string>(l, arr);
  
  cout<<"output: \nmax: "<<minmax.max<<"\nmin: "<<minmax.min<<endl;
}
