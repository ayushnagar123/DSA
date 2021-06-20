#include<iostream>
#include "./../../helpers/array_helpers.cpp"
#include "./../../helpers/operations_helpers.cpp"
using namespace std;

template<typename T>
void arrange_array_negative_elements_on_side(int l, T *arr){
    Operations<T> o;
    int j=0;
    for(int i=0;i<l;i++){
        if(arr[i] < 0){
            o.swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 2, -3, -1, 4, 7};
    int l = sizeof(arr)/sizeof(arr[0]);

    Array<int> a(l, arr);

    cout<<"input:\n";
    a.print_array(l, arr);

    arrange_array_negative_elements_on_side<int>(l, arr);

    cout<<"output:\n";
    a.print_array(l, arr);
    return 0;
}