using namespace std;

template<typename T>
class Operations{
  public:
  void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
  }

  T min(T a, T b){
    if(a<=b){
      return a; 
    }
    return b;
  }

  T max(T a, T b){
    if(a>=b){
      return a; 
    }
    return b;
  }
};
