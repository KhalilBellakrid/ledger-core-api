// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#ifndef DJINNI_GENERATED_NJSEVENTPUBLISHER_HPP
#define DJINNI_GENERATED_NJSEVENTPUBLISHER_HPP


#include "NJSEventBusCpp.hpp"
#include "NJSEventCpp.hpp"
#include "NJSExecutionContext.hpp"
#include <cstdint>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../cpp/EventPublisher.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEventPublisher: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSEventPublisher() {};
    NJSEventPublisher(const std::shared_ptr<ledger::core::api::EventPublisher> &iEventPublisher):_EventPublisher(iEventPublisher){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::EventPublisher> &object);
    static Nan::Persistent<ObjectTemplate> EventPublisher_prototype;
    std::shared_ptr<ledger::core::api::EventPublisher> getCppImpl(){return _EventPublisher;};

private:
    /**
     *Get event bus through which publisher broadcast its events
     *@return EventBus object
     */
    static NAN_METHOD(getEventBus);

    /**
     *Broadcast an event through eventbus (to all subscribed receivers to this EventBus)
     *@param event, Event object
     */
    static NAN_METHOD(post);

    /**
     *Same as post method but with an sticky event
     *@param event, Event object
     *@param tag, 32 bits integer, tag of sticky event
     */
    static NAN_METHOD(postSticky);

    /**
     *Relay an event to another EventBus (other than EventPublisher's event bus)
     *@param bus, EventBus object, through which we want to broadcast EventPublisher's event to EventPublisher's receiver
     */
    static NAN_METHOD(relay);

    /**
     *Create a new instance of EventPublisher class
     *@param context, executionContext object, context in which event publisher broadcast its events
     */
    static NAN_METHOD(newInstance);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::EventPublisher> _EventPublisher;
};
#endif //DJINNI_GENERATED_NJSEVENTPUBLISHER_HPP
