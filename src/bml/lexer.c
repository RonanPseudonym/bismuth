#include <stdio.h>
#include <string.h>

#include "../ui/io.h"
#include "lexer.h"

BmlInfo bml_get_pref_count(const char* path) {
	FILE *f;
	f = fopen(path,"r");

	if (f == NULL) {
		ui_ferror(strcat("Unable to open file ", path));
	}

	BmlInfo info = {0, 0};

	char c;

	for (c = getc(f); c != EOF; c = getc(f)) {
		info.length ++;

		if (c == ':') info.prefs ++;
	}

	fclose(f);
	return info;
}
