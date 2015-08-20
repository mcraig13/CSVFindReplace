/* File HSSup_container.h */

#if !defined(_HSSUP_CONTAINER_H)
#define _HSSUP_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "HSSup_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct HSSup__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct HSSup__platform_hook *platform_hook;
   HSSup_user_context user; /* Defined in HSSup_user_context.h */
} HSSup__context;

/* Logging and fault management services API */
void HSSup_container__log_trace
   (HSSup__context* context, const ECOA__log log);

void HSSup_container__log_debug
   (HSSup__context* context, const ECOA__log log);

void HSSup_container__log_info
   (HSSup__context* context, const ECOA__log log);

void HSSup_container__log_warning
   (HSSup__context* context, const ECOA__log log);

void HSSup_container__raise_error
   (HSSup__context* context, const ECOA__log log);

void HSSup_container__raise_fatal_error
   (HSSup__context* context, const ECOA__log log);

/* Time services API */
ECOA__error HSSup_container__get_relative_local_time
   (HSSup__context* context, ECOA__hr_time* relative_local_time);

ECOA__error HSSup_container__get_UTC_time
   (HSSup__context* context, ECOA__global_time* utc_time);

ECOA__error HSSup_container__get_absolute_system_time
   (HSSup__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void HSSup_container__get_relative_local_time_resolution
   (HSSup__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void HSSup_container__get_UTC_time_resolution
   (HSSup__context* context, ECOA__duration* utc_time_resolution);*/

/*void HSSup_container__get_absolute_system_time_resolution
   (HSSup__context* context, ECOA__duration* absolute_system_time_resolution);*/

/* Provided Service IDs */;
typedef ECOA__uint32 HSSup_container__service_id;
#define HSSup_container__service_id__genSvcA1 0

ECOA__error HSSup_container__set_service_availability
   (HSSup__context* context,
    HSSup_container__service_id instance,
    ECOA__boolean8 available);

void HSSup_container__get_lifecycle_state__HSFuncInst
   (HSSup__context* context,
    ECOA__module_states_type* current_state);

ECOA__error HSSup_container__STOP__HSFuncInst
   (HSSup__context* context);

ECOA__error HSSup_container__START__HSFuncInst
   (HSSup__context* context);

ECOA__error HSSup_container__INITIALIZE__HSFuncInst
   (HSSup__context* context);

ECOA__error HSSup_container__SHUTDOWN__HSFuncInst
   (HSSup__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HSSUP_CONTAINER_H */
