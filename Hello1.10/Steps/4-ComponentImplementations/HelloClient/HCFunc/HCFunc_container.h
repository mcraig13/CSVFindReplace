/* File HCFunc_container.h */

#if !defined(_HCFUNC_CONTAINER_H)
#define _HCFUNC_CONTAINER_H

/* Include the types from the XML types files */
#include "ECOA.h"

#include "Local.h"

#include "HCFunc_user_context.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

/* Incomplete definition of the technical (platform-dependent) part of the context
 * (it will be defined privately by the container)
 */
struct HCFunc__platform_hook;

typedef struct 
{
   ECOA__timestamp operation_timestamp;
   struct HCFunc__platform_hook *platform_hook;
   HCFunc_user_context user; /* Defined in HCFunc_user_context.h */
} HCFunc__context;

/* Logging and fault management services API */
void HCFunc_container__log_trace
   (HCFunc__context* context, const ECOA__log log);

void HCFunc_container__log_debug
   (HCFunc__context* context, const ECOA__log log);

void HCFunc_container__log_info
   (HCFunc__context* context, const ECOA__log log);

void HCFunc_container__log_warning
   (HCFunc__context* context, const ECOA__log log);

void HCFunc_container__raise_error
   (HCFunc__context* context, const ECOA__log log);

void HCFunc_container__raise_fatal_error
   (HCFunc__context* context, const ECOA__log log);

/* Time services API */
ECOA__error HCFunc_container__get_relative_local_time
   (HCFunc__context* context, ECOA__hr_time* relative_local_time);

ECOA__error HCFunc_container__get_UTC_time
   (HCFunc__context* context, ECOA__global_time* utc_time);

ECOA__error HCFunc_container__get_absolute_system_time
   (HCFunc__context* context, ECOA__global_time* absolute_system_time);

/* Time resolution services API */
/*void HCFunc_container__get_relative_local_time_resolution
   (HCFunc__context* context, ECOA__duration* relative_local_time_resolution);*/

/*void HCFunc_container__get_UTC_time_resolution
   (HCFunc__context* context, ECOA__duration* utc_time_resolution);*/

/*void HCFunc_container__get_absolute_system_time_resolution
   (HCFunc__context* context, ECOA__duration* absolute_system_time_resolution);*/

void HCFunc_container__doprod__send
   (HCFunc__context* context,
    const Local__FixedArray_String_Type* tell);

ECOA__error HCFunc_container__callHelloFunction__request_sync
   (HCFunc__context* context,
    const ECOA__int32 val,
    ECOA__int32* result);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif  /* _HCFUNC_CONTAINER_H */
