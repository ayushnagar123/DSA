#include<iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
int array_union(int l1, T arr1[], int l2, T arr2[]){
  int count = 0;
  int i = 0, j = 0;
  bool is_first_iteration = true;
  T last, current;
  do{
    if(arr1[i] == arr2[j]){
      current = arr1[i];
      i++;
      j++;
      
    }
    else if(arr1[i] < arr2[j]){
      current = arr1[i];
      i++;
    }
    else{
      current = arr2[j];
      j++;
    }
    if(is_first_iteration || last != current){
      is_first_iteration = false;
      count++;
      last = current;
    }
  }while(i < l1 && j < l2);
  while(i < l1){
    if(is_first_iteration || last != arr1[i]){
      is_first_iteration = false;
      count++;
    }
    i++;
  }
  while(j < l2){
    if(is_first_iteration || last != arr2[j]){
      is_first_iteration = false;
      count++;
    }
    j++;
  }
  return count;
}

template<typename T>
int array_intersection(int l1, T arr1[], int l2, T arr2[]){
  int count = 0;
  int i = 0, j = 0;
  bool is_first_iteration = true;
  T last, current;
  while(i < l1 && j < l2){
    if(arr1[i] == arr2[j]){
      current = arr1[i];
      i++;
      j++;
    }
    else if(arr1[i] < arr2[j]){
      i++;
    }
    else{
      j++;
    }
    if(last != current){
      count++;
      last = current;
    }
  }
  return count;
}

int main(){
  int arr1[] = {1, 2, 3, 3, 5};
  int arr2[] = {1, 2, 3, 4, 6};

  int l1 = sizeof(arr1)/sizeof(arr1[0]);
  int l2 = sizeof(arr2)/sizeof(arr2[0]);

  Array<int> a1(l1, arr1);
  Array<int> a2(l2, arr2);

  cout<<"Input:\n";
  a1.print_array();
  a2.print_array();

  cout<<"Output:\n";
  cout<< "union: "<<array_union<int>(l1, arr1, l2, arr2)<<endl;
  cout<< "intersection: "<<array_intersection<int>(l1, arr1, l2, arr2);
  return 0;
}
