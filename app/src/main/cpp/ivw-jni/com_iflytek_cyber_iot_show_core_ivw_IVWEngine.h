/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_iflytek_cyber_iot_show_core_ivw_IVWEngine */

#ifndef _Included_com_iflytek_cyber_iot_show_core_ivw_IVWEngine
#define _Included_com_iflytek_cyber_iot_show_core_ivw_IVWEngine
#ifdef __cplusplus
extern "C" {
#endif
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_INVALID_HANDLE
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_INVALID_HANDLE 0L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOWEST
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOWEST 0L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOWER
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOWER 1L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOW
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_LOW 2L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_NORMAL
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_NORMAL 3L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGH
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGH 4L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGHER
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGHER 5L
#undef com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGHEST
#define com_iflytek_cyber_iot_show_core_ivw_IVWEngine_CMLEVEL_HIGHEST 6L
/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_create
 * Signature: (Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1create
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_set_cmlevel
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1set_1cmlevel
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_set_keywordncm
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1set_1keywordncm
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1start
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_write
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1write
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_stop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1stop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_set_log
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1set_1log
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_iflytek_cyber_iot_show_core_ivw_IVWEngine
 * Method:    jni_get_version
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_iflytek_cyber_iot_show_core_ivw_IVWEngine_jni_1get_1version
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
