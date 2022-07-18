#include <stdio.h>
#include <string.h>

#include "ui/io.h"

int main() {
	ui_ok("all good");
	ui_warning("uh oh");
	ui_error("lmao no");
	ui_note("just some facts or smth");
	ui_ferror("fatal error whoops");
}
