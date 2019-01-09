#include <jni.h>
#include <string>
#include "MyObject.h"

extern "C" JNIEXPORT jstring JNICALL
Java_quantcloud_com_advisor_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_quantcloud_com_advisor_MainActivity_crashFromJNI2(JNIEnv *env, jobject instance) {
    MyObject a;
    a.TestCrash();

    int *p = NULL;
    *p = 23;
}

extern "C"
JNIEXPORT void JNICALL
Java_quantcloud_com_advisor_MainActivity_crashFromJNI(JNIEnv *env, jobject instance) {

    int *p = NULL;
    *p = 1;
}
