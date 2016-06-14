#ifdef _LARGEFILE_SOURCE
int largefile_defined_at_start = 1;
#else
int largefile_defined_at_start = 0;
#endif

#include <stdio.h>

int main(void)
{
    // DESC passed in during build
    printf("largefile_demo type: %s\n\n", DESC);

#ifdef _GNU_SOURCE
    printf("_GNU_SOURCE is defined\n");
#else
    printf("_GNU_SOURCE is not defined\n");
#endif

#ifdef _FILE_OFFSET_BITS   
   printf("_FILE_OFFSET_BITS is %d\n", _FILE_OFFSET_BITS);
#else
   printf("_FILE_OFFSET_BITS not defined.\n");
#endif
   
#ifdef __LP64__
   printf("__LP64__ defined: %i\n", __LP64__);
#else
   printf("__LP64__ not defined.\n");
#endif
   
#ifdef _LARGEFILE_SOURCE
   printf("_LARGEFILE_SOURCE defined\n");
#else
   printf("_LARGEFILE_SOURCE not defined.\n");
#endif

   printf("_LARGEFILE_SOURCE defined before includes: %d\n", 
          largefile_defined_at_start);
   
#ifdef _LARGEFILE64_SOURCE
   printf("_LARGEFILE64_SOURCE defined\n");
#else
   printf("_LARGEFILE64_SOURCE not defined.\n");
#endif

   printf("sizeof(off_t) is %d\n", (int)sizeof(off_t));
   printf("sizeof(size_t) is %d\n", (int)sizeof(size_t));

   puts("");
   
   return 0;
}
