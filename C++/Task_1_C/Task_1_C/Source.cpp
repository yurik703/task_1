#include <iostream>
#include "JNIHelloWorld.h"

JNIEXPORT jstring JNICALL Java_com_company_Main_stringFromJNI
(JNIEnv *env, jobject thisObject) {
    std::string hello = "Hello world! From C++";
    return env->NewStringUTF(hello.c_str());
}


JNIEXPORT jstring JNICALL Java_com_company_JNIHelloWorld_stringFromJNI
(JNIEnv *env, jobject thisObject) {
    std::string hello = "Hello world! From C++";
    return env->NewStringUTF(hello.c_str());
}

JNIEXPORT jint JNICALL Java_com_company_JNIHelloWorld_intFromJNI
(JNIEnv *env, jobject thisObject) {
    jint val = 42;
    return val;
}

JNIEXPORT jstring JNICALL Java_com_company_JNIHelloWorld_stringToJNI
(JNIEnv *env, jobject thisObject, jstring thisStr) {

    const char* sx = (env)->GetStringUTFChars(thisStr, NULL);

    char msg[160] = "This text attached to current string ";
    jstring result;

    strcat_s(msg, sx);
    (env)->ReleaseStringUTFChars(thisStr, sx);
    puts(msg);
    result = (env)->NewStringUTF(msg);
    return result;
}

JNIEXPORT jint JNICALL Java_com_company_JNIHelloWorld_intToJNI
(JNIEnv* env, jobject thisObject, jint thisInt) {
    return thisInt * 2;
}