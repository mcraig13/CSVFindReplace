/* File sysCmpSupModImplB1.h */

#if !defined(_SYSCMPSUPMODIMPLB1_H)
#define _SYSCMPSUPMODIMPLB1_H

#include "ECOA.h"

#include "Local.h"

#include "sysCmpSupModImplB1_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void sysCmpSupModImplB1__INITIALIZE__received
   (sysCmpSupModImplB1__context* context);

void sysCmpSupModImplB1__START__received
   (sysCmpSupModImplB1__context* context);

void sysCmpSupModImplB1__STOP__received
   (sysCmpSupModImplB1__context* context);

void sysCmpSupModImplB1__SHUTDOWN__received
   (sysCmpSupModImplB1__context* context);

void sysCmpSupModImplB1__REINITIALIZE__received
   (sysCmpSupModImplB1__context* context);

void sysCmpSupModImplB1__exception_notification_handler
   (sysCmpSupModImplB1__context* context,
    const ECOA__exception *exception);

void sysCmpSupModImplB1__lifecycle_notification__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPSUPMODIMPLB1_H */
