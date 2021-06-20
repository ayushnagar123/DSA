#include<iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void sort_special_array(int l, T *arr){
    int low = 0, mid = 0, high = l-1;
    Operations<T> o;
    while(mid<=high){
        if(arr[mid]== 0){
            o.swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            o.swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    int arr[] = {0, 1, 2, 0, 1, 2};
    int l = sizeof(arr)/sizeof(arr[0]);
    Array<int> a(l, arr);
    cout<<"input:\n";
    a.print_array(l, arr);

    sort_special_array(l, arr);

    a.print_array(l, arr);
    return 0;
}