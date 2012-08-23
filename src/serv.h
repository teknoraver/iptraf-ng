#ifndef IPTRAF_NG_SERV_H
#define IPTRAF_NG_SERV_H

/***

serv.h  - TCP/UDP port statistics header file

***/

struct porttab {
	unsigned int port_min;
	unsigned int port_max;
	struct porttab *prev_entry;
	struct porttab *next_entry;
};

void addmoreports(struct porttab **table);
void loadaddports(struct porttab **table);
void destroyporttab(struct porttab *table);
void removeaport(struct porttab **table);

#include "fltselect.h"

void servmon(char *iface, time_t facilitytime, struct filterstate *ofilter);

#endif	/* IPTRAF_NG_SERV_H */
