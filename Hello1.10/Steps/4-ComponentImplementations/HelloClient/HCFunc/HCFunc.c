/* File HCFunc.c */

#include "HCFunc.h"

/* Runtime lifecycle API */
void HCFunc__INITIALIZE__received
   (HCFunc__context* context)
{
	printf("INIT HCFunc\n");
}

void HCFunc__START__received
   (HCFunc__context* context)
{
	printf("START HCFunc\n");
}

void HCFunc__STOP__received
   (HCFunc__context* context)
{
   /* User Code Here */
}

void HCFunc__SHUTDOWN__received
   (HCFunc__context* context)
{
   /* User Code Here */
}

void HCFunc__REINITIALIZE__received
   (HCFunc__context* context)
{
   /* User Code Here */
}

void HCFunc__getchirp__received
   (HCFunc__context* context,
    const Local__Array_String_Type* tweet)
{
   /* User Code Here */
}

void HCFunc__trigger__received
   (HCFunc__context* context)
{
   static ECOA__uint32 fred = 0;
   static ECOA__uint32 return_val = 0;

   printf("HCFunc Trigger\n");
   HCFunc_container__callHelloFunction__request_sync(context, fred, &return_val);

   printf("Return Value = %d\n", return_val);

   fred++;


}

