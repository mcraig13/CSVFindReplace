/* File sysCmpSupModImplB1_container.h */

#if !defined(_SYSCMPSUPMODIMPLB1_CONTAINER_H)
#define _SYSCMPSUPMODIMPLB1_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "sysCmpSupModImplB1_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct sysCmpSupModImplB1__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct sysCmpSupModImplB1__platform_hook *platform_hook;
   sysCmpSupModImplB1_user_context user; /* Defined in sysCmpSupModImplB1_user_context.h */
} sysCmpSupModImplB1__context;

/* Logging and fault management services API */
void sysCmpSupModImplB1_container__log_trace
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

void sysCmpSupModImplB1_container__log_debug
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

void sysCmpSupModImplB1_container__log_info
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

void sysCmpSupModImplB1_container__log_warning
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

void sysCmpSupModImplB1_container__raise_error
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

void sysCmpSupModImplB1_container__raise_fatal_error
   (sysCmpSupModImplB1__context* context, const ECOA__log log);

/* Time services API */
ECOA__error sysCmpSupModImplB1_container__get_relative_local_time
   (sysCmpSupModImplB1__context* context, ECOA__hr_time* relative_local_time);

ECOA__error sysCmpSupModImplB1_container__get_UTC_time
   (sysCmpSupModImplB1__context* context, ECOA__global_time* utc_time);

ECOA__error sysCmpSupModImplB1_container__get_absolute_system_time
   (sysCmpSupModImplB1__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void sysCmpSupModImplB1_container__get_relative_local_time_resolution
   (sysCmpSupModImplB1__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void sysCmpSupModImplB1_container__get_UTC_time_resolution
   (sysCmpSupModImplB1__context* context, ECOA__duration* utc_time_resolution);*/

/*void sysCmpSupModImplB1_container__get_absolute_system_time_resolution
   (sysCmpSupModImplB1__context* context, ECOA__duration* absolute_system_time_resolution);*/

/* Provided Service IDs */;
typedef ECOA__uint32 sysCmpSupModImplB1_container__service_id;
#define sysCmpSupModImplB1_container__service_id__sysCmpSvcA1 0

ECOA__error sysCmpSupModImplB1_container__set_service_availability
   (sysCmpSupModImplB1__context* context,
    sysCmpSupModImplB1_container__service_id instance,
    ECOA__boolean8 available);

void sysCmpSupModImplB1_container__get_lifecycle_state__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context,
    ECOA__module_states_type* current_state);

ECOA__error sysCmpSupModImplB1_container__STOP__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context);

ECOA__error sysCmpSupModImplB1_container__START__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context);

ECOA__error sysCmpSupModImplB1_container__INITIALIZE__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context);

ECOA__error sysCmpSupModImplB1_container__SHUTDOWN__sysCmpModInstB1
   (sysCmpSupModImplB1__context* context);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPSUPMODIMPLB1_CONTAINER_H */
