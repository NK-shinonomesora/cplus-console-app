#include "../header/myallocate.hpp"
#include <iostream>

MyAllocate::MyAllocate(int n) : size {n}, ary {new int[n]} {}
// MyAllocate::MyAllocate(MyAllocate&& other) {
//   std::cout << "ムーブコンストラクタ" << std::endl;
//   //ary = std::move(other.getVector());
//   for(int i = 0; i < size; i++) {
//     ary[i] = other.ary[i];
//   }
// }

// MyAllocate& MyAllocate::operator=(MyAllocate&& other) {
//   std::cout << "ムーブ代入" << std::endl;
//   //ary = std::move(other.getVector());
//     for(int i = 0; i < size; i++) {
//       ary[i] = other.ary[i];
//     }
//     delete[] other.ary;
//   return *this;
// }

// MyAllocate::~MyAllocate() {
//   std::cout << "デストラクタ実行" << std::endl;
//   delete ary;
// }

void MyAllocate::alloc() {
  for(int i = 0; i < size; i++) {
    ary[i] = i;
    //ary.push_back(i);
  }
}

void MyAllocate::printVec() {
  std::cout << ary[2] << std::endl;
}

// const std::vector<int>& MyAllocate::getVector() const {
//   return ary;
// }