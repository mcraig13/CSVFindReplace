/* File HCSup_container.h */

#if !defined(_HCSUP_CONTAINER_H)
#define _HCSUP_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "HCSup_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct HCSup__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct HCSup__platform_hook *platform_hook;
   HCSup_user_context user; /* Defined in HCSup_user_context.h */
} HCSup__context;

/* Logging and fault management services API */
void HCSup_container__log_trace
   (HCSup__context* context, const ECOA__log log);

void HCSup_container__log_debug
   (HCSup__context* context, const ECOA__log log);

void HCSup_container__log_info
   (HCSup__context* context, const ECOA__log log);

void HCSup_container__log_warning
   (HCSup__context* context, const ECOA__log log);

void HCSup_container__raise_error
   (HCSup__context* context, const ECOA__log log);

void HCSup_container__raise_fatal_error
   (HCSup__context* context, const ECOA__log log);

/* Time services API */
ECOA__error HCSup_container__get_relative_local_time
   (HCSup__context* context, ECOA__hr_time* relative_local_time);

ECOA__error HCSup_container__get_UTC_time
   (HCSup__context* context, ECOA__global_time* utc_time);

ECOA__error HCSup_container__get_absolute_system_time
   (HCSup__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void HCSup_container__get_relative_local_time_resolution
   (HCSup__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void HCSup_container__get_UTC_time_resolution
   (HCSup__context* context, ECOA__duration* utc_time_resolution);*/

/*void HCSup_container__get_absolute_system_time_resolution
   (HCSup__context* context, ECOA__duration* absolute_system_time_resolution);*/

/* Required Service IDs */;
typedef ECOA__uint32 HCSup_container__reference_id;
#define HCSup_container__reference_id__ref_Hello 0

ECOA__error HCSup_container__get_service_availability
   (HCSup__context* context,
    HCSup_container__reference_id instance,
    ECOA__boolean8 *available);

void HCSup_container__get_lifecycle_state__HCFuncInst
   (HCSup__context* context,
    ECOA__module_states_type* current_state);

ECOA__error HCSup_container__STOP__HCFuncInst
   (HCSup__context* context);

ECOA__error HCSup_container__START__HCFuncInst
   (HCSup__context* context);

ECOA__error HCSup_container__INITIALIZE__HCFuncInst
   (HCSup__context* context);

ECOA__error HCSup_container__SHUTDOWN__HCFuncInst
   (HCSup__context* context);

void HCSup_container__get_lifecycle_state__HCFuncTrigger
   (HCSup__context* context,
    ECOA__module_states_type* current_state);

ECOA__error HCSup_container__STOP__HCFuncTrigger
   (HCSup__context* context);

ECOA__error HCSup_container__START__HCFuncTrigger
   (HCSup__context* context);

ECOA__error HCSup_container__INITIALIZE__HCFuncTrigger
   (HCSup__context* context);

ECOA__error HCSup_container__SHUTDOWN__HCFuncTrigger
   (HCSup__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HCSUP_CONTAINER_H */
