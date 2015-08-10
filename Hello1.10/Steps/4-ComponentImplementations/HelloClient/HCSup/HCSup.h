/* File HCSup.h */

#if !defined(_HCSUP_H)
#define _HCSUP_H

#include "ECOA.h"

#include "Local.h"

#include "HCSup_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void HCSup__INITIALIZE__received
   (HCSup__context* context);

void HCSup__START__received
   (HCSup__context* context);

void HCSup__STOP__received
   (HCSup__context* context);

void HCSup__SHUTDOWN__received
   (HCSup__context* context);

void HCSup__REINITIALIZE__received
   (HCSup__context* context);

void HCSup__exception_notification_handler
   (HCSup__context* context,
    const ECOA__exception *exception);

void HCSup__service_availability_changed
   (HCSup__context* context,
    HCSup_container__reference_id instance,
    ECOA__boolean8 available);

void HCSup__service_provider_changed
   (HCSup__context* context,
    HCSup_container__reference_id instance);

void HCSup__lifecycle_notification__HCFuncInst
   (HCSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

void HCSup__lifecycle_notification__HCFuncTrigger
   (HCSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HCSUP_H */
