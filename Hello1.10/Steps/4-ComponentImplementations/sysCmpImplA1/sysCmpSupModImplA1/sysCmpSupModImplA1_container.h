/* File sysCmpSupModImplA1_container.h */

#if !defined(_SYSCMPSUPMODIMPLA1_CONTAINER_H)
#define _SYSCMPSUPMODIMPLA1_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "sysCmpSupModImplA1_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct sysCmpSupModImplA1__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct sysCmpSupModImplA1__platform_hook *platform_hook;
   sysCmpSupModImplA1_user_context user; /* Defined in sysCmpSupModImplA1_user_context.h */
} sysCmpSupModImplA1__context;

/* Logging and fault management services API */
void sysCmpSupModImplA1_container__log_trace
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

void sysCmpSupModImplA1_container__log_debug
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

void sysCmpSupModImplA1_container__log_info
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

void sysCmpSupModImplA1_container__log_warning
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

void sysCmpSupModImplA1_container__raise_error
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

void sysCmpSupModImplA1_container__raise_fatal_error
   (sysCmpSupModImplA1__context* context, const ECOA__log log);

/* Time services API */
ECOA__error sysCmpSupModImplA1_container__get_relative_local_time
   (sysCmpSupModImplA1__context* context, ECOA__hr_time* relative_local_time);

ECOA__error sysCmpSupModImplA1_container__get_UTC_time
   (sysCmpSupModImplA1__context* context, ECOA__global_time* utc_time);

ECOA__error sysCmpSupModImplA1_container__get_absolute_system_time
   (sysCmpSupModImplA1__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void sysCmpSupModImplA1_container__get_relative_local_time_resolution
   (sysCmpSupModImplA1__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void sysCmpSupModImplA1_container__get_UTC_time_resolution
   (sysCmpSupModImplA1__context* context, ECOA__duration* utc_time_resolution);*/

/*void sysCmpSupModImplA1_container__get_absolute_system_time_resolution
   (sysCmpSupModImplA1__context* context, ECOA__duration* absolute_system_time_resolution);*/

/* Required Service IDs */;
typedef ECOA__uint32 sysCmpSupModImplA1_container__reference_id;
#define sysCmpSupModImplA1_container__reference_id__sysCmpRefA1 0

ECOA__error sysCmpSupModImplA1_container__get_service_availability
   (sysCmpSupModImplA1__context* context,
    sysCmpSupModImplA1_container__reference_id instance,
    ECOA__boolean8 *available);

void sysCmpSupModImplA1_container__get_lifecycle_state__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context,
    ECOA__module_states_type* current_state);

ECOA__error sysCmpSupModImplA1_container__STOP__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__START__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__INITIALIZE__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__SHUTDOWN__sysCmpModInstA1
   (sysCmpSupModImplA1__context* context);

void sysCmpSupModImplA1_container__get_lifecycle_state__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context,
    ECOA__module_states_type* current_state);

ECOA__error sysCmpSupModImplA1_container__STOP__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__START__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__INITIALIZE__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context);

ECOA__error sysCmpSupModImplA1_container__SHUTDOWN__sysCmpTrigInstA1
   (sysCmpSupModImplA1__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPSUPMODIMPLA1_CONTAINER_H */
