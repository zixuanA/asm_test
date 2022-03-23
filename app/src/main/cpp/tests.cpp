#include <jni.h>

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("tests");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("tests")
//      }
//    }
extern "C" void fun_test();
extern "C"
JNIEXPORT void JNICALL
Java_com_example_tests_MainActivity_ssss(JNIEnv *env, jobject thiz) {
    fun_test();
}