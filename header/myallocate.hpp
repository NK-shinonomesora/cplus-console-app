#ifndef MYALLOCATE_H
#define MYALLOCATE_H

#include <vector>

class MyAllocate {
  public:
    MyAllocate(int n);
    // MyAllocate(MyAllocate&& other);
    // MyAllocate& operator=(MyAllocate&& other);
    //~MyAllocate();
    void alloc();
    void printVec();
    //const std::vector<int>& getVector() const;

  private:
    int size;
    int* ary;
    //std::vector<int> ary;
};

#endif // MYALLOCATE_H