#include <iostream>
#include <string>

using namespace std;

class View {
  public:
    inline void printRecord(string recordItem){
      cout << "----------" << endl;
      cout << recordItem << endl;
      cout << "----------" << endl;
    }
};