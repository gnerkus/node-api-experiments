#include "example.h"

using namespace std;

double example::add(double x, double y) {
  return x + y;
}

// TEMP comment
// :: is for namespaces
Napi::Value example::addWrapped(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  if(info.Length() < 2) {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
    return env.Null();
  }

  if (!info[0].IsNumber() || !info[1].IsNumber()) {
    Napi::TypeError::New(env, "Wrong arguments").ThrowAsJavaScriptException();
    return env.Null();
  }

  //  convert javascripts datatype to c++
  double arg0 = info[0].As<Napi::Number>().DoubleValue();
  double arg1 = info[1].As<Napi::Number>().DoubleValue();
  // Napi::Number::New(napi_env, double) converts the double to a Napi::Number
  Napi::Number num = Napi::Number::New(env, example::add(arg0, arg1));

  return num;
}

Napi::Object example::Init(Napi::Env env, Napi::Object exports) 
{
  //export Napi function
  exports.Set(Napi::String::New(env, "add"), Napi::Function::New(env, example::addWrapped));
  return exports;
}
