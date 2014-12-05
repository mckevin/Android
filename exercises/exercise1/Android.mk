LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := helloWorld
LOCAL_SRC_FILES := helloWorld.c

include $(BUILD_SHARED_LIBRARY)