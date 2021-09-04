#include <napi.h>
#include <iostream>

using namespace std;

namespace example {

  //add two integers
  // this is the function to be exported
  double add(double x, double y);
  
  //add function wrapper
  // this wrapper will call the function above
  Napi::Value addWrapped(const Napi::CallbackInfo& info);
  
  //Export API
  Napi::Object Init(Napi::Env env, Napi::Object exports);

  NODE_API_MODULE(addon, Init)
}
