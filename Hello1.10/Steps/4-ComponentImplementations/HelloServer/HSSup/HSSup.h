/* File HSSup.h */

#if !defined(_HSSUP_H)
#define _HSSUP_H

#include "ECOA.h"

#include "Local.h"

#include "HSSup_container.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Runtime lifecycle API */
void HSSup__INITIALIZE__received
   (HSSup__context* context);

void HSSup__START__received
   (HSSup__context* context);

void HSSup__STOP__received
   (HSSup__context* context);

void HSSup__SHUTDOWN__received
   (HSSup__context* context);

void HSSup__REINITIALIZE__received
   (HSSup__context* context);

void HSSup__exception_notification_handler
   (HSSup__context* context,
    const ECOA__exception *exception);

void HSSup__lifecycle_notification__HSFuncInst
   (HSSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HSSUP_H */
