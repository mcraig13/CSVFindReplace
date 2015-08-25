/* File sysCmpModImplB1_container.h */

#if !defined(_SYSCMPMODIMPLB1_CONTAINER_H)
#define _SYSCMPMODIMPLB1_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "sysCmpModImplB1_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct sysCmpModImplB1__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct sysCmpModImplB1__platform_hook *platform_hook;
   sysCmpModImplB1_user_context user; /* Defined in sysCmpModImplB1_user_context.h */
} sysCmpModImplB1__context;

/* Logging and fault management services API */
void sysCmpModImplB1_container__log_trace
   (sysCmpModImplB1__context* context, const ECOA__log log);

void sysCmpModImplB1_container__log_debug
   (sysCmpModImplB1__context* context, const ECOA__log log);

void sysCmpModImplB1_container__log_info
   (sysCmpModImplB1__context* context, const ECOA__log log);

void sysCmpModImplB1_container__log_warning
   (sysCmpModImplB1__context* context, const ECOA__log log);

void sysCmpModImplB1_container__raise_error
   (sysCmpModImplB1__context* context, const ECOA__log log);

void sysCmpModImplB1_container__raise_fatal_error
   (sysCmpModImplB1__context* context, const ECOA__log log);

/* Time services API */
ECOA__error sysCmpModImplB1_container__get_relative_local_time
   (sysCmpModImplB1__context* context, ECOA__hr_time* relative_local_time);

ECOA__error sysCmpModImplB1_container__get_UTC_time
   (sysCmpModImplB1__context* context, ECOA__global_time* utc_time);

ECOA__error sysCmpModImplB1_container__get_absolute_system_time
   (sysCmpModImplB1__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void sysCmpModImplB1_container__get_relative_local_time_resolution
   (sysCmpModImplB1__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void sysCmpModImplB1_container__get_UTC_time_resolution
   (sysCmpModImplB1__context* context, ECOA__duration* utc_time_resolution);*/

/*void sysCmpModImplB1_container__get_absolute_system_time_resolution
   (sysCmpModImplB1__context* context, ECOA__duration* absolute_system_time_resolution);*/

void sysCmpModImplB1_container__sysCmpModOpEvtB2__send
   (sysCmpModImplB1__context* context,
    const Local__Array_String_Type* sysSvcOpEvtIOA1);

ECOA__error sysCmpModImplB1_container__sysCmpModOpRqB1__response_send
   (sysCmpModImplB1__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 sysSvcOpRRIOA2);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _SYSCMPMODIMPLB1_CONTAINER_H */
