/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_zcoin_sigma_GroupElement */

#ifndef _Included_com_zcoin_sigma_GroupElement
#define _Included_com_zcoin_sigma_GroupElement
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jCreateGroupElement
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jCreateGroupElement__
  (JNIEnv *, jclass);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jRelease
 * Signature: ()J
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jRelease
  (JNIEnv *, jobject);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jCopyConstructor
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jCopyConstructor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jCreateGroupElement
 * Signature: (CCI)J
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jCreateGroupElement__CCI
  (JNIEnv *, jclass, jchar, jchar, jint);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorAssignment
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorAssignment
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorMultiply
 * Signature: (J)V
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorMultiply
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorMultiplyAndAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorMultiplyAndAssign
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorPlus
 * Signature: (J)V
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorPlus
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorPlusAndAssign
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorPlusAndAssign
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jInverse
 * Signature: ()V
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jInverse
  (JNIEnv *, jobject);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jSquare
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jSquare
  (JNIEnv *, jobject);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorEqual
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorEqual
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jOperatorNotEqual
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_zcoin_sigma_GroupElement_jOperatorNotEqual
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jGenerate
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_zcoin_sigma_GroupElement_jGenerate
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jSha256
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jSha256
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jRandomize
 * Signature: ()J
 */
JNIEXPORT void JNICALL Java_com_zcoin_sigma_GroupElement_jRandomize
  (JNIEnv *, jobject);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jGetHex
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zcoin_sigma_GroupElement_jGetHex
  (JNIEnv *, jobject);

/*
 * Class:     com_zcoin_sigma_GroupElement
 * Method:    jGetvch
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jbyteArray JNICALL Java_com_zcoin_sigma_GroupElement_jGetvch
        (JNIEnv *, jobject);


#ifdef __cplusplus
}
#endif
#endif
