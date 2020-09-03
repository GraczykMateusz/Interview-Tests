#include <iostream>

template<typename T, int size = 0>
class Vector {
  public:
    Vector() {
      len = size;
      data = new T[size];
    }
    ~Vector() {
      delete[] data;
      data = nullptr;
    }
    int returnVecSize() {
      return len;
    }
    void pushBack(T value) {
      T* temp = new T[len + 1];
      
      for(int i = 0; i != len; ++i) {
        temp[i] = data[i];
      }

      temp[len] = value; 

      delete[] data;
      data = nullptr;

      ++len;
      data = new T[len]; 

      for(int i = 0; i != len; ++i) {
        data[i] = temp[i];
      }

      delete temp;
      temp = nullptr;
    }
    void printAllValues() {
      for(int i = 0; i != len; ++i)
        std::cout << data[i];
    }

  private:
    int len;
    T* data;
};

int main() {
  Vector<char, 50> a;
  a.pushBack('c'); 
  std:: cout << a.returnVecSize(); 
  a.printAllValues();
  return 0;
}
