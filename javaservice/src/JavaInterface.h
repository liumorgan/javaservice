/*
 * JavaService - Windows NT Service Daemon for Java applications
 *
 * Copyright (C) 2004 Multiplan Consultants Ltd.
 */

#ifndef __JAVA_INTERFACE_H__
#define __JAVA_INTERFACE_H__

class ServiceParameters; // forward class reference

//
//Function to start a java class as a service.
//
bool StartJavaService(HANDLE hEventSource, const ServiceParameters* serviceParams);

//
//Function to stop java class execution
//
bool StopJavaService(HANDLE hEventSource, const ServiceParameters* serviceParams);

#endif // __JAVA_INTERFACE_H__