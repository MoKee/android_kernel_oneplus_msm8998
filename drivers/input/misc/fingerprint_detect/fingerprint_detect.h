#ifndef __FINGERPRINT_DETETC_H_
#define __FINGERPRINT_DETETC_H_

#define PROJECT_CHEESEBURGER  0x01
#define PROJECT_DUMPLING      0x02

#define SENSOR_FPC_1  0x01
#define SENSOR_FPC_2  0x02
#define SENSOR_GOODIX 0x03

struct fingerprint_detect_data {
	struct device *dev;
	int id0_gpio;
	int id1_gpio;
	int id2_gpio;
	struct pinctrl         *fp_pinctrl;
	struct pinctrl_state   *id_state_init;
	int sensor_version;
	int project_version;
};

extern int fp_version;

#endif
