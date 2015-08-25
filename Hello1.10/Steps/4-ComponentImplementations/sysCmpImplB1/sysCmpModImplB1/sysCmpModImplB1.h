/* File sysCmpModImplB1.h */

#if !defined(_SYSCMPMODIMPLB1_H)
#define _SYSCMPMODIMPLB1_H

#include "ECOA.h"

#include "Local.h"

#include "sysCmpModImplB1_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void sysCmpModImplB1__INITIALIZE__received
   (sysCmpModImplB1__context* context);

void sysCmpModImplB1__START__received
   (sysCmpModImplB1__context* context);

void sysCmpModImplB1__STOP__received
   (sysCmpModImplB1__context* context);

void sysCmpModImplB1__SHUTDOWN__received
   (sysCmpModImplB1__context* context);

void sysCmpModImplB1__REINITIALIZE__received
   (sysCmpModImplB1__context* context);

void sysCmpModImplB1__sysCmpModOpEvtB1__received
   (sysCmpModImplB1__context* context,
    const Local__FixedArray_String_Type* sysSvcOpEvtIOA2);

void sysCmpModImplB1__sysCmpModOpRqB1__request_received
   (sysCmpModImplB1__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 sysSvcOpRRIOA1);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPMODIMPLB1_H */
