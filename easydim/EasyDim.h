#ifndef __EASYDIM_H__
#define __EASYDIM_H__

/*
  DEV By Artron Shop Co.,Ltd. : www.artronshop.co.th
  Sonthaya Nongnuch : fb.me/maxthai
*/

#include <string.h>
#include "driver.h"
#include "device.h"
#include "i2c-dev.h"
#include "driver/uart.h"
#include "kidbright32.h"

class EasyDim : public Device {
	private:		
		I2CDev *i2c;

	public:
		// constructor
		EasyDim(int bus_ch, int dev_addr) ;
		
		// override
		void init(void);
		void process(Driver *drv);
		int prop_count(void);
		bool prop_name(int index, char *name);
		bool prop_unit(int index, char *unit);
		bool prop_attr(int index, char *attr);
		bool prop_read(int index, char *value);
		bool prop_write(int index, char *value);
		
		// method
		void write(uint8_t value) ;
		
};

#endif
