/* File sysCmpModImplA1_container.h */

#if !defined(_SYSCMPMODIMPLA1_CONTAINER_H)
#define _SYSCMPMODIMPLA1_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "sysCmpModImplA1_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct sysCmpModImplA1__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct sysCmpModImplA1__platform_hook *platform_hook;
   sysCmpModImplA1_user_context user; /* Defined in sysCmpModImplA1_user_context.h */
} sysCmpModImplA1__context;

/* Logging and fault management services API */
void sysCmpModImplA1_container__log_trace
   (sysCmpModImplA1__context* context, const ECOA__log log);

void sysCmpModImplA1_container__log_debug
   (sysCmpModImplA1__context* context, const ECOA__log log);

void sysCmpModImplA1_container__log_info
   (sysCmpModImplA1__context* context, const ECOA__log log);

void sysCmpModImplA1_container__log_warning
   (sysCmpModImplA1__context* context, const ECOA__log log);

void sysCmpModImplA1_container__raise_error
   (sysCmpModImplA1__context* context, const ECOA__log log);

void sysCmpModImplA1_container__raise_fatal_error
   (sysCmpModImplA1__context* context, const ECOA__log log);

/* Time services API */
ECOA__error sysCmpModImplA1_container__get_relative_local_time
   (sysCmpModImplA1__context* context, ECOA__hr_time* relative_local_time);

ECOA__error sysCmpModImplA1_container__get_UTC_time
   (sysCmpModImplA1__context* context, ECOA__global_time* utc_time);

ECOA__error sysCmpModImplA1_container__get_absolute_system_time
   (sysCmpModImplA1__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void sysCmpModImplA1_container__get_relative_local_time_resolution
   (sysCmpModImplA1__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void sysCmpModImplA1_container__get_UTC_time_resolution
   (sysCmpModImplA1__context* context, ECOA__duration* utc_time_resolution);*/

/*void sysCmpModImplA1_container__get_absolute_system_time_resolution
   (sysCmpModImplA1__context* context, ECOA__duration* absolute_system_time_resolution);*/

void sysCmpModImplA1_container__sysCmpModOpEvtA1__send
   (sysCmpModImplA1__context* context,
    const Local__FixedArray_String_Type* sysSvcOpEvtIOA2);

ECOA__error sysCmpModImplA1_container__sysCmpModOpRqA1__request_sync
   (sysCmpModImplA1__context* context,
    const ECOA__int32 sysSvcOpRRIOA1,
    ECOA__int32* sysSvcOpRRIOA2);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPMODIMPLA1_CONTAINER_H */
