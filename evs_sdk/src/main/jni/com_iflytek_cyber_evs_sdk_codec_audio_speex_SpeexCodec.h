/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec */

#ifndef _Included_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
#define _Included_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
#ifdef __cplusplus
extern "C" {
#endif
#undef com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_CODEC_ENCODE
#define com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_CODEC_ENCODE 1L
#undef com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_CODEC_DECODE
#define com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_CODEC_DECODE 2L
#undef com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_MODE_NB
#define com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_MODE_NB 1L
#undef com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_MODE_WB
#define com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_MODE_WB 2L
/*
 * Class:     com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
 * Method:    init_native
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_init_1native
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
 * Method:    encode_native
 * Signature: ([B[B[BI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_encode_1native
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray, jint, jbyteArray, jint);

/*
 * Class:     com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
 * Method:    decode_native
 * Signature: ([B[B[BI[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_decode_1native
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec
 * Method:    destroy_native
 * Signature: (I[B[B)V
 */
JNIEXPORT void JNICALL Java_com_iflytek_cyber_evs_sdk_codec_audio_speex_SpeexCodec_destroy_1native
  (JNIEnv *, jobject, jint, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
