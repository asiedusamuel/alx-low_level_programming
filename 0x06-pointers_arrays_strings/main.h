#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

	#ifndef STR_CONCAT_H
	#define STR_CONCAT_H

	char *_strcat(char *dest, char *src);

	#endif
	
	#ifndef STR_CONCAT_N_H
	#define STR_CONCAT_N_H

	char *_strncat(char *dest, const char *src, int n);

	#endif

	#ifndef PUTCHAR_H
	#define PUTCHAR_H

	int _putchar(char c);

	#endif

#endif /* MAIN_H */