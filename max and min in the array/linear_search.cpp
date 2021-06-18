#include <iostream>
#include "./../../helper_functions/array_helpers.cpp"
#define MAX_INT 100000000
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair find_max_and_min(int l, int arr[]) {
  struct Pair minmax;
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
  cout<<"input: ";
  print_array(l, arr);

  struct Pair minmax = find_max_and_min(l, arr);
  
  cout<<"output: \nmax: "<<minmax.max<<"\nmin: "<<minmax.min<<endl;
}