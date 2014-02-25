#ifndef INTERNALDEFINITIONS_H_
#define INTERNALDEFINITIONS_H_

#include "threading.h"
#include "circbuff.h"
#include "TSDRPluginLoader.h"

#include "include/TSDRLibrary.h"

	struct tsdr_lib {
		pluginsource_t plugin;
		semaphore_t threadsync;
		mutex_t stopsync;
		uint32_t samplerate;
		double sampletime;
		int width;
		int height;
		double pixelrate;
		double pixeltime;
		double pixeltimeoversampletime;
		volatile int running;
		volatile int nativerunning;
		uint32_t centfreq;
		float gain;
		float motionblur;
		volatile int syncoffset;
		char * errormsg;
		int errormsg_size;
		int errormsg_code;

		uint32_t params_int[COUNT_PARAM_INT];
		double params_double[COUNT_PARAM_DOUBLE];
	};

#endif