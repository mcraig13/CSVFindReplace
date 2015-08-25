/* File sysCmpModImplA1.h */

#if !defined(_SYSCMPMODIMPLA1_H)
#define _SYSCMPMODIMPLA1_H

#include "ECOA.h"

#include "Local.h"

#include "sysCmpModImplA1_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void sysCmpModImplA1__INITIALIZE__received
   (sysCmpModImplA1__context* context);

void sysCmpModImplA1__START__received
   (sysCmpModImplA1__context* context);

void sysCmpModImplA1__STOP__received
   (sysCmpModImplA1__context* context);

void sysCmpModImplA1__SHUTDOWN__received
   (sysCmpModImplA1__context* context);

void sysCmpModImplA1__REINITIALIZE__received
   (sysCmpModImplA1__context* context);

void sysCmpModImplA1__sysCmpModOpEvtA2__received
   (sysCmpModImplA1__context* context,
    const Local__Array_String_Type* sysSvcOpEvtIOA1);

void sysCmpModImplA1__trigger__received
   (sysCmpModImplA1__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPMODIMPLA1_H */
