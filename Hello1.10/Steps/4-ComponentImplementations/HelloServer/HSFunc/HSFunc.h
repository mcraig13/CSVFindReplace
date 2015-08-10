/* File HSFunc.h */

#if !defined(_HSFUNC_H)
#define _HSFUNC_H

#include "ECOA.h"

#include "Local.h"

#include "HSFunc_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void HSFunc__INITIALIZE__received
   (HSFunc__context* context);

void HSFunc__START__received
   (HSFunc__context* context);

void HSFunc__STOP__received
   (HSFunc__context* context);

void HSFunc__SHUTDOWN__received
   (HSFunc__context* context);

void HSFunc__REINITIALIZE__received
   (HSFunc__context* context);

void HSFunc__getprod__received
   (HSFunc__context* context,
    const Local__FixedArray_String_Type* tell);

void HSFunc__HelloFunction__request_received
   (HSFunc__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 val);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HSFUNC_H */
