#include <stdio.h>
#include <stdlib.h>

#include "io.h"

#define CLR_OK      "\x1b[32m"
#define CLR_WARNING "\x1b[33m"
#define CLR_ERROR   "\x1b[5m\x1b[31m"
#define CLR_INFO    "\x1b[36m"
#define CLR_BOLD    "\x1b[1m"
#define CLR_END     "\x1b[0m"

void ui_pretty_print(const char* tooltip, const char* color, const char* text) {
	printf("%s%s", color, CLR_BOLD);
	printf("[%s] %s", tooltip, CLR_END);
	printf("%s\n", text);
}

void ui_ok(const char* text) {
	ui_pretty_print("OK", CLR_OK, text);
}

void ui_warning(const char* text) {
	ui_pretty_print("WARN", CLR_WARNING, text);
}

void ui_error(const char* text) {
	ui_pretty_print("ERR", CLR_ERROR, text);
}

void ui_ferror(const char* text) {
	ui_error(text);
	exit(1);
}

void ui_note(const char* text) {
	ui_pretty_print("NOTE", CLR_INFO, text);
}
