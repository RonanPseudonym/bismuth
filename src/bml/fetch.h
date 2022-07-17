#ifndef BML_FETCH_H
#define BML_FETCH_H

#include <bool.h>

int          bml_ifetch  (const char* name);
const char*  bml_sfetch  (const char* name);
const char** bml_safetch (const char* name);
bool         bml_bfetch  (const char* name);
bool         bml_is_def  (const char* name);

#endif
