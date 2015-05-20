#include <node.h>
#include <nan.h>
#include <v8.h>

using namespace v8;

NAN_METHOD(Hello) {
  NanScope();
  NanReturnValue(NanNew<String>("world"));
}

void init(Handle<Object> target) {
    target->Set(NanNew<String>("hello"), NanNew<FunctionTemplate>(Hello)->GetFunction());
}

NODE_MODULE(binding, init);
