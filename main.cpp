#include <functional>
#include <memory>

void register_callback(std::function<int (int)> callback);
int main(){
  std::function<int(int)> cb {
          [i = std::make_shared<int>(42)](const int val) {
            return val + *i;
          }
  };
  return 0;
}