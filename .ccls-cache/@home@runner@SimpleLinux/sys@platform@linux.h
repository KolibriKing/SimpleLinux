/* sys/platform/linux.h
 * This file is used to initialize system for Linux/Mac terminal
 */

#include "../version.h"
#include <stdio.h>

void platform_init() {
  /*Initialize linux terminal*/
  version_print();
}