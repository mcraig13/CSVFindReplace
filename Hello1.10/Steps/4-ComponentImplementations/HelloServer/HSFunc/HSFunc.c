/* File sysCmpModImplB1.c */

#include "sysCmpModImplB1.h"

/* Runtime lifecycle API */
void HSFunc__INITIALIZE__received
   (HSFunc__context* context)
{
	printf("INIT sysCmpModImplB1\n");
}

void HSFunc__START__received
   (HSFunc__context* context)
{
	printf("START sysCmpModImplB1\n");
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
    const Local__FixedArray_String_Type* sysSvcOpEvtIOA2)
{
   /* User Code Here */
}

void HSFunc__HelloFunction__request_received
   (HSFunc__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 sysSvcOpRRIOA1)
{
   /* User Code Here */

	printf("Val = %d\n", sysSvcOpRRIOA1);

	HSFunc_container__HelloFunction__response_send(context,ID,sysSvcOpRRIOA1);
}

