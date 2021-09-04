#include <napi.h>
#include <iostream>

using namespace std;

namespace example {

  //add two integers
  // this is the function to be exported
  int add(int x, int y);
  
  //add function wrapper
  // this wrapper will call the function above
  Napi::Number addWrapped(const Napi::CallbackInfo& info);
  
  //Export API
  Napi::Object Init(Napi::Env env, Napi::Object exports);

  NODE_API_MODULE(addon, Init)
}
