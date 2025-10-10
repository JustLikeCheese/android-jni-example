#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_jnihelper_MainActivity_stringFromJNI(JNIEnv *env, jobject this) {
    char* hello = "Hello from C++";
    return (*env)->NewStringUTF(env, hello);
}