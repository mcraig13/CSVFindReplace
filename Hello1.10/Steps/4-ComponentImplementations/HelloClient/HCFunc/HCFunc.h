/* File HCFunc.h */

#if !defined(_HCFUNC_H)
#define _HCFUNC_H

#include "ECOA.h"

#include "Local.h"

#include "HCFunc_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void HCFunc__INITIALIZE__received
   (HCFunc__context* context);

void HCFunc__START__received
   (HCFunc__context* context);

void HCFunc__STOP__received
   (HCFunc__context* context);

void HCFunc__SHUTDOWN__received
   (HCFunc__context* context);

void HCFunc__REINITIALIZE__received
   (HCFunc__context* context);

void HCFunc__getchirp__received
   (HCFunc__context* context,
    const Local__Array_String_Type* tweet);

void HCFunc__trigger__received
   (HCFunc__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HCFUNC_H */
