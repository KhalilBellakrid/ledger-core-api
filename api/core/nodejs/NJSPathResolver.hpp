// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from path_resolver.djinni

#ifndef DJINNI_GENERATED_NJSPATHRESOLVER_HPP
#define DJINNI_GENERATED_NJSPATHRESOLVER_HPP


#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/ledger-core-source-api/api/PathResolver.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSPathResolver: public Nan::ObjectWrap, public ledger::core::api::PathResolver {
public:

    static void Initialize(Local<Object> target);
    ~NJSPathResolver()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSPathResolver(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     * Resolves the path for a SQLite database file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    std::string resolveDatabasePath(const std::string & path);

    /**
     * Resolves the path of a single log file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    std::string resolveLogFilePath(const std::string & path);

    /**
     * Resolves the path for a json file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    std::string resolvePreferencesPath(const std::string & path);

private:
    /**
     * Resolves the path for a SQLite database file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    static NAN_METHOD(resolveDatabasePath);

    /**
     * Resolves the path of a single log file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    static NAN_METHOD(resolveLogFilePath);

    /**
     * Resolves the path for a json file.
     * @param path The path to resolve.
     * @return The resolved path.
     */
    static NAN_METHOD(resolvePreferencesPath);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSPATHRESOLVER_HPP
