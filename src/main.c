#include <stdio.h>
#include <string.h>

#include "ui/io.h"
#include "bml/lexer.h"

int main() {
	BmlInfo info = bml_get_pref_count("meta/example1.bml");

	printf("l %d\n: %d\n\n", info.length, info.prefs);

	ui_ok("all good");
	ui_warning("uh oh");
	ui_error("lmao no");
	ui_note("just some facts or smth");
	ui_ferror("fatal error whoops");
}
