/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "zebra.h"
#include "../../native/include/org_zeromq_zebra_XrapMsg.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1new (JNIEnv *env, jclass c, jint id)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) xrap_msg_new ((int) id);
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    xrap_msg_destroy ((xrap_msg_t **) &self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1decode (JNIEnv *env, jclass c, jlong msg_p)
{
    jlong decode_ = (jlong) (intptr_t) xrap_msg_decode ((zmsg_t **) (intptr_t) &msg_p);
    return decode_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1encode (JNIEnv *env, jclass c, jlong xrap_msg_p)
{
    jlong encode_ = (jlong) (intptr_t) xrap_msg_encode ((xrap_msg_t **) (intptr_t) &xrap_msg_p);
    return encode_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1recv (JNIEnv *env, jclass c, jlong input)
{
    jlong recv_ = (jlong) (intptr_t) xrap_msg_recv ((void *) (intptr_t) input);
    return recv_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1recvNowait (JNIEnv *env, jclass c, jlong input)
{
    jlong recv_nowait_ = (jlong) (intptr_t) xrap_msg_recv_nowait ((void *) (intptr_t) input);
    return recv_nowait_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1send (JNIEnv *env, jclass c, jlong self, jlong output)
{
    jint send_ = (jint) xrap_msg_send ((xrap_msg_t **) &self, (void *) (intptr_t) output);
    return self;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1sendAgain (JNIEnv *env, jclass c, jlong self, jlong output)
{
    jint send_again_ = (jint) xrap_msg_send_again ((xrap_msg_t *) (intptr_t) self, (void *) (intptr_t) output);
    return send_again_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1id (JNIEnv *env, jclass c, jlong self)
{
    jint id_ = (jint) xrap_msg_id ((xrap_msg_t *) (intptr_t) self);
    return id_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setId (JNIEnv *env, jclass c, jlong self, jint id)
{
    xrap_msg_set_id ((xrap_msg_t *) (intptr_t) self, (int) id);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1parent (JNIEnv *env, jclass c, jlong self)
{
    char *parent_ = (char *) xrap_msg_parent ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, parent_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setParent (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_parent ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1contentType (JNIEnv *env, jclass c, jlong self)
{
    char *content_type_ = (char *) xrap_msg_content_type ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, content_type_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setContentType (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_content_type ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1contentBody (JNIEnv *env, jclass c, jlong self)
{
    char *content_body_ = (char *) xrap_msg_content_body ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, content_body_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setContentBody (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_content_body ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jshort JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1statusCode (JNIEnv *env, jclass c, jlong self)
{
    jshort status_code_ = (jshort) xrap_msg_status_code ((xrap_msg_t *) (intptr_t) self);
    return status_code_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setStatusCode (JNIEnv *env, jclass c, jlong self, jshort status_code)
{
    xrap_msg_set_status_code ((xrap_msg_t *) (intptr_t) self, (uint16_t) status_code);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1location (JNIEnv *env, jclass c, jlong self)
{
    char *location_ = (char *) xrap_msg_location ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, location_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setLocation (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_location ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1etag (JNIEnv *env, jclass c, jlong self)
{
    char *etag_ = (char *) xrap_msg_etag ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, etag_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setEtag (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_etag ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1dateModified (JNIEnv *env, jclass c, jlong self)
{
    jlong date_modified_ = (jlong) xrap_msg_date_modified ((xrap_msg_t *) (intptr_t) self);
    return date_modified_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setDateModified (JNIEnv *env, jclass c, jlong self, jlong date_modified)
{
    xrap_msg_set_date_modified ((xrap_msg_t *) (intptr_t) self, (uint64_t) date_modified);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1resource (JNIEnv *env, jclass c, jlong self)
{
    char *resource_ = (char *) xrap_msg_resource ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, resource_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setResource (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_resource ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1parameters (JNIEnv *env, jclass c, jlong self)
{
    jlong parameters_ = (jlong) (intptr_t) xrap_msg_parameters ((xrap_msg_t *) (intptr_t) self);
    return parameters_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1getParameters (JNIEnv *env, jclass c, jlong self)
{
    jlong get_parameters_ = (jlong) (intptr_t) xrap_msg_get_parameters ((xrap_msg_t *) (intptr_t) self);
    return get_parameters_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setParameters (JNIEnv *env, jclass c, jlong self, jlong parameters_p)
{
    xrap_msg_set_parameters ((xrap_msg_t *) (intptr_t) self, (zhash_t **) (intptr_t) &parameters_p);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1parametersString (JNIEnv *env, jclass c, jlong self, jstring key, jstring default_value)
{
    char *key_ = (char *) (*env)->GetStringUTFChars (env, key, NULL);
    char *default_value_ = (char *) (*env)->GetStringUTFChars (env, default_value, NULL);
    char *parameters_string_ = (char *) xrap_msg_parameters_string ((xrap_msg_t *) (intptr_t) self, key_, default_value_);
    jstring return_string_ = (*env)->NewStringUTF (env, parameters_string_);
    (*env)->ReleaseStringUTFChars (env, key, key_);
    (*env)->ReleaseStringUTFChars (env, default_value, default_value_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1parametersInsert (JNIEnv *env, jclass c, jlong self, jstring key, jstring format)
{
    char *key_ = (char *) (*env)->GetStringUTFChars (env, key, NULL);
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_parameters_insert ((xrap_msg_t *) (intptr_t) self, key_, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, key, key_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1ifModifiedSince (JNIEnv *env, jclass c, jlong self)
{
    jlong if_modified_since_ = (jlong) xrap_msg_if_modified_since ((xrap_msg_t *) (intptr_t) self);
    return if_modified_since_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setIfModifiedSince (JNIEnv *env, jclass c, jlong self, jlong if_modified_since)
{
    xrap_msg_set_if_modified_since ((xrap_msg_t *) (intptr_t) self, (uint64_t) if_modified_since);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1ifNoneMatch (JNIEnv *env, jclass c, jlong self)
{
    char *if_none_match_ = (char *) xrap_msg_if_none_match ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, if_none_match_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setIfNoneMatch (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_if_none_match ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1metadata (JNIEnv *env, jclass c, jlong self)
{
    jlong metadata_ = (jlong) (intptr_t) xrap_msg_metadata ((xrap_msg_t *) (intptr_t) self);
    return metadata_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1getMetadata (JNIEnv *env, jclass c, jlong self)
{
    jlong get_metadata_ = (jlong) (intptr_t) xrap_msg_get_metadata ((xrap_msg_t *) (intptr_t) self);
    return get_metadata_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setMetadata (JNIEnv *env, jclass c, jlong self, jlong metadata_p)
{
    xrap_msg_set_metadata ((xrap_msg_t *) (intptr_t) self, (zhash_t **) (intptr_t) &metadata_p);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1metadataString (JNIEnv *env, jclass c, jlong self, jstring key, jstring default_value)
{
    char *key_ = (char *) (*env)->GetStringUTFChars (env, key, NULL);
    char *default_value_ = (char *) (*env)->GetStringUTFChars (env, default_value, NULL);
    char *metadata_string_ = (char *) xrap_msg_metadata_string ((xrap_msg_t *) (intptr_t) self, key_, default_value_);
    jstring return_string_ = (*env)->NewStringUTF (env, metadata_string_);
    (*env)->ReleaseStringUTFChars (env, key, key_);
    (*env)->ReleaseStringUTFChars (env, default_value, default_value_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1metadataInsert (JNIEnv *env, jclass c, jlong self, jstring key, jstring format)
{
    char *key_ = (char *) (*env)->GetStringUTFChars (env, key, NULL);
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_metadata_insert ((xrap_msg_t *) (intptr_t) self, key_, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, key, key_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1ifUnmodifiedSince (JNIEnv *env, jclass c, jlong self)
{
    jlong if_unmodified_since_ = (jlong) xrap_msg_if_unmodified_since ((xrap_msg_t *) (intptr_t) self);
    return if_unmodified_since_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setIfUnmodifiedSince (JNIEnv *env, jclass c, jlong self, jlong if_unmodified_since)
{
    xrap_msg_set_if_unmodified_since ((xrap_msg_t *) (intptr_t) self, (uint64_t) if_unmodified_since);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1ifMatch (JNIEnv *env, jclass c, jlong self)
{
    char *if_match_ = (char *) xrap_msg_if_match ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, if_match_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setIfMatch (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_if_match ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1statusText (JNIEnv *env, jclass c, jlong self)
{
    char *status_text_ = (char *) xrap_msg_status_text ((xrap_msg_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, status_text_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1setStatusText (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    xrap_msg_set_status_text ((xrap_msg_t *) (intptr_t) self, "%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_zebra_XrapMsg__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    xrap_msg_test ((bool) verbose);
}
