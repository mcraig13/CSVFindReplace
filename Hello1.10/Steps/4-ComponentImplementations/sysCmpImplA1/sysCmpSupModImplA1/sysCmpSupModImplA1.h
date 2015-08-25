/* File sysCmpSupModImplA1.h */

#if !defined(_SYSCMPSUPMODIMPLA1_H)
#define _SYSCMPSUPMODIMPLA1_H

#include "ECOA.h"

#include "Local.h"

#include "sysCmpSupModImplA1_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void sysCmpSupModImplA1__INITIALIZE__received
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1__START__received
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1__STOP__received
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1__SHUTDOWN__received
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1__REINITIALIZE__received
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1__exception_notification_handler
   (sysCmpSupModImplA1__context* context,
    const ECOA__exception *exception);

void sysCmpSupModImplA1__service_availability_changed
   (sysCmpSupModImplA1__context* context,
    sysCmpSupModImplA1_container__reference_id instance,
    ECOA__boolean8 available);

void sysCmpSupModImplA1__service_provider_changed
   (sysCmpSupModImplA1__context* context,
    sysCmpSupModImplA1_container__reference_id instance);

void sysCmpSupModImplA1__lifecycle_notification__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

void sysCmpSupModImplA1__lifecycle_notification__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPSUPMODIMPLA1_H */
