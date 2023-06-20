/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * HD audio Component Binding Interface
 *
 * Copyright (C) 2021 Cirrus Logic, Inc. and
 *                    Cirrus Logic International Semiconductor Ltd.
 */

#include <linux/component.h>

#define HDA_MAX_COMPONENTS	4
#define HDA_MAX_NAME_SIZE	50

struct hda_component {
	struct device *dev;
	char name[HDA_MAX_NAME_SIZE];
	void (*playback_hook)(struct device *dev, int action);
	int (*set_channel_map)(struct device *dev, unsigned int rx_num, unsigned int *rx_slot,
				unsigned int tx_num, unsigned int *tx_slot);
};
