#include "EasyDim.h"

/*
  DEV By Artron Shop Co.,Ltd. : www.artronshop.co.th
  Sonthaya Nongnuch : fb.me/maxthai
*/

EasyDim::EasyDim(int bus_ch, int dev_addr) {
	channel = bus_ch;
	address = dev_addr;
	polling_ms = 100;
}

void EasyDim::init(void) {
	// set initialized flag
	this->initialized = true;
	
	// clear error flag
	this->error = false;
}

int EasyDim::prop_count(void) {
	// not supported
	return 0;
}

bool EasyDim::prop_name(int index, char *name) {
	// not supported
	return false;
}

bool EasyDim::prop_unit(int index, char *unit) {
	// not supported
	return false;
}

bool EasyDim::prop_attr(int index, char *attr) {
	// not supported
	return false;
}

bool EasyDim::prop_read(int index, char *value) {
	// not supported
	return false;
}

bool EasyDim::prop_write(int index, char *value) {
	// not supported
	return false;
}
// --------------------------------------

// Start here
void EasyDim::process(Driver *drv) {
	i2c = (I2CDev *)drv;
}

// Method
void EasyDim::write(uint8_t value) {
	if (value > 100) {
		value = 100;
	}
	
	this->error = this->i2c->write(this->channel, this->address, &value, 1) ==  ESP_OK;
}
