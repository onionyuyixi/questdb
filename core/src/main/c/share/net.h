/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nfsdb_misc_Net */

#ifndef _Included_com_nfsdb_misc_Net
#define _Included_com_nfsdb_misc_Net
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nfsdb_misc_Net
 * Method:    accept
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_accept
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    bind
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_nfsdb_misc_Net_bind
        (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    listen
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_nfsdb_misc_Net_listen
        (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_nfsdb_misc_Net
 * Method:    socketTcp
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_com_nfsdb_misc_Net_socketTcp
        (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif