#pragma once

#include<string>
#include<vector>
#include<map>
#include"Ticks.h"
using namespace std;

class OsAPIOverhead
{
protected:
	Ticks apiSendMessage;
	Ticks apiTerminateTask;
	Ticks apiSchedule;
	Ticks apiRequestResource;
	Ticks apiReleaseResource;
	Ticks apiSetEvent;
	Ticks apiWaitEvent;
	Ticks apiClearEvent;
	Ticks apiActivateTask;
	Ticks apiEnforcedMigration;

	Ticks apiSuspendOsInterrupts;
	Ticks apiResumeOsInterrupts;
	Ticks apiRequestSpinlock;
	Ticks apiReleaseSpinlock;
	Ticks apiSenderReceiverRead;
	Ticks apiSenderReceiverWrite;
	Ticks apiSynchronousServerCallPoint;
	Ticks apiIocRead;
	Ticks apiIocWrite;







};

