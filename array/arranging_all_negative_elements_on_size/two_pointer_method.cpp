#include<iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void arrange_array_negative_elements_on_side(T *arr, int left, int right){
    Operations<T> o;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if(arr[left]>=0 && arr[right]<0){
            o.swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]<0 && arr[right]>=0){
            right--;
        }
        else{
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 2, -3, -1, 4, 7};
    int l = sizeof(arr)/sizeof(arr[0]);

    Array<int> a(l, arr);

    cout<<"input:\n";
    a.print_array(l, arr);

    arrange_array_negative_elements_on_side<int>(arr, 0, l-1);

    cout<<"output:\n";
    a.print_array(l, arr);
    return 0;
}