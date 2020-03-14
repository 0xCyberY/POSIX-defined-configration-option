#define _POSIX_SOURCE //allows function part of the POSIX.1 (IEEE Standard 1003.1) standard.
#define _POSIX_C_SOUREC 199309L //
#include <stdio.h>
#include <stdlib.h>
int main()
{
   #ifdef _POSIX_JOB_CONTROL
	printf("The system support _POSIX_JOB_CONTROL is %d\n",_POSIX_JOB_CONTRL);
   #else
	printf("The system not support _POSIX_JOB_CONTROL\n");
   #endif

   #ifdef _POSIX_SAVED_IDS
	printf("The system support saved set UID and set GID : %d\n",_POSIX_SAVID_IDS);
   #else
	printf("The system not support saved set UID and GID\n");
   #endif

   #ifdef _POSIX_CHOWN_RESTRICTED
	printf("The system support restricted option is %d\n",_POSIX_CHOWN_RESTRICTED);
   #else
	printf("The system not support restricterd option\n");
   #endif

   #ifdef _POSIX_NO_TRUNC
	printf("The system support not trincate is %d\n",_POSIX_NO_TRUNC);
   #else
	printf("The _POSIX-NO_TRUNC option is not defined\n");
   #endif

   #ifdef _POSIX_VDISABLE
	printf("disable character terminal file %d \n", _POSIX_VDISABLE);
   #else
	printf("char for terminal device files will not be disable\n");
   #endif

return 0;
}

