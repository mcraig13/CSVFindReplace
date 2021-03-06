/* File HSFunc_container.h */

#if !defined(_HSFUNC_CONTAINER_H)
#define _HSFUNC_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "HSFunc_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct HSFunc__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct HSFunc__platform_hook *platform_hook;
   HSFunc_user_context user; /* Defined in HSFunc_user_context.h */
} HSFunc__context;

/* Logging and fault management services API */
void HSFunc_container__log_trace
   (HSFunc__context* context, const ECOA__log log);

void HSFunc_container__log_debug
   (HSFunc__context* context, const ECOA__log log);

void HSFunc_container__log_info
   (HSFunc__context* context, const ECOA__log log);

void HSFunc_container__log_warning
   (HSFunc__context* context, const ECOA__log log);

void HSFunc_container__raise_error
   (HSFunc__context* context, const ECOA__log log);

void HSFunc_container__raise_fatal_error
   (HSFunc__context* context, const ECOA__log log);

/* Time services API */
ECOA__error HSFunc_container__get_relative_local_time
   (HSFunc__context* context, ECOA__hr_time* relative_local_time);

ECOA__error HSFunc_container__get_UTC_time
   (HSFunc__context* context, ECOA__global_time* utc_time);

ECOA__error HSFunc_container__get_absolute_system_time
   (HSFunc__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void HSFunc_container__get_relative_local_time_resolution
   (HSFunc__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void HSFunc_container__get_UTC_time_resolution
   (HSFunc__context* context, ECOA__duration* utc_time_resolution);*/

/*void HSFunc_container__get_absolute_system_time_resolution
   (HSFunc__context* context, ECOA__duration* absolute_system_time_resolution);*/

void HSFunc_container__dochirp__send
   (HSFunc__context* context,
    const Local__Array_String_Type* tweet);

ECOA__error HSFunc_container__HelloFunction__response_send
   (HSFunc__context* context,
    const ECOA__uint32 ID,
    const ECOA__int32 result);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HSFUNC_CONTAINER_H */
