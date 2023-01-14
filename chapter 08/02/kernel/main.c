#include "print.h"
#include "init.h"
#include "debug.h"
#include "string.h"

int main(void) {
   put_str("I am kernel\n");
   init_all();
   put_str("length:");
   put_int(strlen("Hello OS"));
   ASSERT(strcmp("bbb","bbb"));
   while(1);
}
