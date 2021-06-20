using namespace std;

template<typename T>
class Array{
  public:
  int l;
  T *arr;
  Array(int length, T arr1[]){
    arr = new T[length];
    arr = arr1;
    l = length;
  }

  void print_array(){
    for(int i=0;i<l;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

  void sort(T *arr,int low, int high,bool assending = true){
    if(low < high){
      int pivot = partition(arr, low, high, assending);
      sort(arr, low, pivot-1, assending);
      sort(arr, pivot+1, high, assending);
    }
  }

  private:
  int partition(T *arr, int low, int high, bool assending){
    T pivot = arr[high];
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
          swap(arr[j], arr[i]);
        }
      }
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
  }
};
