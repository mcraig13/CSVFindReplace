/* File HSSup.c */

#include "HSSup.h"

/* Runtime lifecycle API */
void HSSup__INITIALIZE__received
   (HSSup__context* context)
{
	   printf("INIT HSSup\n");
}

void HSSup__START__received
   (HSSup__context* context)
{
	   printf("START  HSSup\n");

	   HSSup_container__INITIALIZE__HSFuncInst(context);
}

void HSSup__STOP__received
   (HSSup__context* context)
{
   /* User Code Here */
}

void HSSup__SHUTDOWN__received
   (HSSup__context* context)
{
   /* User Code Here */
}

void HSSup__REINITIALIZE__received
   (HSSup__context* context)
{
   /* User Code Here */
}

void HSSup__exception_notification_handler
   (HSSup__context* context,
    const ECOA__exception *exception)
{
   /* User Code Here */
}

void HSSup__lifecycle_notification__HSFuncInst
   (HSSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state)
{

	printf("Module state notification\n");
	if ( previous_state == ECOA__module_states_type_IDLE &&
		 new_state == ECOA__module_states_type_READY
						){
		   HSSup_container__START__HSFuncInst(context);
	}
	if ( previous_state == ECOA__module_states_type_READY &&
		 new_state == ECOA__module_states_type_RUNNING
						){
		printf("Up and running\n");
		//services available...
		HSSup_container__set_service_availability(context,HSSup_container__service_id__svc_Hello, ECOA__TRUE);
	}
}


