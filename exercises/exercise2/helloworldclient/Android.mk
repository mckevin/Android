LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := helloWorldClient
LOCAL_SRC_FILES := helloWorldClient.cpp

include $(BUILD_SHARED_LIBRARY)
