/* File HSFunc.c */

#include "HSFunc.h"

/* Runtime lifecycle API */
void HSFunc__INITIALIZE__received
   (HSFunc__context* context)
{
	printf("INIT HSFunc\n");
}

void HSFunc__START__received
   (HSFunc__context* context)
{
	printf("START HSFunc\n");
}

void HSFunc__STOP__received
   (HSFunc__context* context)
{
   /* User Code Here */
}

void HSFunc__SHUTDOWN__received
   (HSFunc__context* context)
{
   /* User Code Here */
}

void HSFunc__REINITIALIZE__received
   (HSFunc__context* context)
{
   /* User Code Here */
}

void HSFunc__getprod__received
   (HSFunc__context* context,
    const Local__FixedArray_String_Type* tell)
{
   /* User Code Here */
}

void HSFunc__HelloFunction__request_received
   (HSFunc__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 val)
{
   /* User Code Here */

	printf("Val = %d\n", val);

	HSFunc_container__HelloFunction__response_send(context,ID,val);
}

