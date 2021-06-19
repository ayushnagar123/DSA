#include <iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./helpers/question_helpers.cpp"
using namespace std;

template<typename T>
class Pair<T> find_max_and_min(int l, T arr[]) {
  class Pair<T> minmax;
  if(l==1){
    minmax.min = arr[0];
    minmax.max = arr[0];
    return minmax;
  }
  if(arr[0]>=arr[1]){
    minmax.min = arr[1];
    minmax.max = arr[0];
  }
  else{
    minmax.min = arr[0];
    minmax.max = arr[1];
  }
  for(int i=2;i<l;i++){
    if(arr[i]>minmax.max){
      minmax.max = arr[i];
    }
    else if(arr[i]<minmax.min){
      minmax.min = arr[i];
    }
  }
  return minmax;
}

int main() {
  int arr[]={1,2,3,5,4};
  int l = sizeof(arr)/sizeof(arr[0]);
  Array<int> a(l, arr);
  cout<<"input: ";
  a.print_array(l, arr);

  class Pair<int> minmax = find_max_and_min(l, arr);
  
  cout<<"output: \nmax: "<<minmax.max<<"\nmin: "<<minmax.min<<endl;
}
