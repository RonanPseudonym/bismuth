#ifndef BML_LEXER_H
#define BML_LEXER_H

#include <stdint.h>

typedef struct {
	uint16_t prefs;
	uint16_t length;
} BmlInfo;

BmlInfo bml_get_pref_count(const char* path);

#endif
