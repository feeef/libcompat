#include "libcompat.h"

int strcasecmp(const char *s1, const char *s2)
{
	while(1) {
		char c1 = tolower(*s1++),
		     c2 = tolower(*s2++);
		
		if(c1 < c2) return -1;
		if(c1 > c2) return 1;
		if(c1 == 0) return 0;
	}
}