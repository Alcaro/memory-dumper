#ifndef IFACE_H_INCLUDED
#define IFACE_H_INCLUDED

typedef struct plugin_t {
	void *hndl;
	char *name;
	char *description;
	struct plugin_t *next;
} plugin_t;

#ifdef __cplusplus
extern "C" plugin_t *init();
extern "C" void process(unsigned char *mem_buf, unsigned long int mem_size);
#endif

#endif