#include <stdio.h>
#include <string.h>

#define DEBUG_ON

#include "debug.h"
#include "text_file.h"

int main() {
  FileData fdata = {};

  FILE* file = fopen("text", "r");

  fdata.GetData(file);

  // fdata.Dump();
  // fdata.PutData(stderr);

  fdata.FreeData();

  return 0;
}
