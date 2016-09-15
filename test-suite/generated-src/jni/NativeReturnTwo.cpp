// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#include "NativeReturnTwo.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeReturnTwo::NativeReturnTwo() : ::djinni::JniInterface<::testsuite::ReturnTwo, NativeReturnTwo>("com/dropbox/djinni/test/ReturnTwo$CppProxy") {}

NativeReturnTwo::~NativeReturnTwo() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ReturnTwo_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::ReturnTwo>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_ReturnTwo_getInstance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::ReturnTwo::get_instance();
        return ::djinni::release(::djinni_generated::NativeReturnTwo::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jbyte JNICALL Java_com_dropbox_djinni_test_ReturnTwo_00024CppProxy_native_1returnTwo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::testsuite::ReturnTwo>(nativeRef);
        auto r = ref->return_two();
        return ::djinni::release(::djinni::I8::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
