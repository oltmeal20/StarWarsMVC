#include "../Model/model.h"
#include "../View/view.h"

#define Print(x) view.printRecord(x);

class Controller {
  private:
    Model model;
    View view;

  public:

    string modelSithPower() {
      return model.sithPower();
    }

    string modelJediPower() {
      return model.jediPower();
    }

    inline void updateView(string sith, string jedi){
      Print(sith)
      Print(jedi)
      view.printRecord(sith);
      view.printRecord(jedi);
    }
};