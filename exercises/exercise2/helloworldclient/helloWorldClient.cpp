/*
 * HelloWorld Service driver.
 * Copyright (C) 2009 Michael Richardson <mcr@credil.org>
 *
 * Released under the terms of the file ../NOTICE
 */
#define LOG_TAG "HelloWorld/Service"

#include <sys/types.h>
#include <unistd.h>
#include <grp.h>

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "IHelloWorld.h"

//  HelloWorldClient

int main(int argc, char *argv[])
{
    printf("Starting");

        android::sp<android::IServiceManager> sm = android::defaultServiceManager();
        android::sp<android::IBinder> binder;
        android::sp<android::IHelloWorld> shw;

        do {
                binder = sm->getService(android::String16(HELLOWORLD_NAME));
                if (binder != 0)
                        break;
                printf("Waiting...");
                usleep(500000); // 0.5 s
        } while(true);

    printf("Trying");

        shw = android::interface_cast<android::IHelloWorld>(binder);
        shw->hellothere("ziz42");
	
    printf("Exiting");

	return(0);
}
