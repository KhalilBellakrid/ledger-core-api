// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSConfigurationCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSConfiguration::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSConfiguration function can only be called as constructor (use New)");
    }
    NJSConfiguration *node_instance = new NJSConfiguration(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSConfiguration::Configuration_prototype;

Handle<Object> NJSConfiguration::wrap(const std::shared_ptr<ledger::core::api::Configuration> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Configuration_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSConfiguration *new_obj = new NJSConfiguration(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSConfiguration::wrap: object template not valid");
    }
    return obj;
}

void NJSConfiguration::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSConfiguration::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSConfiguration").ToLocalChecked());

    //SetPrototypeMethod all methods
    //Set object prototype
    Configuration_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSConfiguration").ToLocalChecked(), func_template->GetFunction());
}
