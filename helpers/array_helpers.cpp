using namespace std;

template<typename T>
class Array{
  T *arr;
  public:
  Array(int l, T arr[]){
    arr = new T[l];
  }
  void print_array(int l, T arr[]){
    for(int i=0;i<l;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
