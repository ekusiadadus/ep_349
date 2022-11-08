#include <functional>
#include <memory>

void register_callback(std::move_only_function<int (int)> callback);
int main(){
  std::move_only_function<int(int)> cb {
          [i = std::make_shared<int>(42)](const int val) {
            return val + *i;
          }
  };
  register_callback(cb);
  return 0;
}