#include <com_hellocprogram_HelloCProgramNative.h>
#include <android/log.h>
#define TAG "helloc"
#define LOG(...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)

jstring Java_com_hellocprogram_HelloCProgramNative_nativePrintHello(JNIEnv* env,
		jobject thiz) {
	return (*env)->NewStringUTF(env, "Hello JNI!");
}

jint Java_com_hellocprogram_HelloCProgramNative_sum(JNIEnv *env, jclass thiz,
		jint x, jint y) {
	return (x + y);
}

void Java_com_hellocprogram_HelloCProgramNative_testlog(JNIEnv *env,
		jclass thiz, jstring log) {
	LOG("log jni\n");
}
