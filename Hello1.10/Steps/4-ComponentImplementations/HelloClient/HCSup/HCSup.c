/* File HCSup.c */

#include "HCSup.h"

/* Runtime lifecycle API */
/* Runtime lifecycle API */
void HCSup__INITIALIZE__received
   (HCSup__context* context)
{
	   printf("INIT HCSup\n");
}

void HCSup__START__received
   (HCSup__context* context)
{
	   printf("START HCSup\n");

	   HCSup_container__INITIALIZE__HCFuncInst(context);

	   HCSup_container__INITIALIZE__HCFuncTrigger(context);

}

void HCSup__STOP__received
   (HCSup__context* context)
{
   /* User Code Here */
}

void HCSup__SHUTDOWN__received
   (HCSup__context* context)
{
   /* User Code Here */
}

void HCSup__REINITIALIZE__received
   (HCSup__context* context)
{
   /* User Code Here */
}

void HCSup__exception_notification_handler
   (HCSup__context* context,
    const ECOA__exception *exception)
{
   /* User Code Here */
}

void HCSup__service_availability_changed
   (HCSup__context* context,
    HCSup_container__reference_id instance,
    ECOA__boolean8 available)
{
   /* User Code Here */
}

void HCSup__service_provider_changed
   (HCSup__context* context,
    HCSup_container__reference_id instance)
{
   /* User Code Here */
}

void HCSup__lifecycle_notification__HCFuncInst
   (HCSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state)
{

	printf("Module state notification\n");
	if ( previous_state == ECOA__module_states_type_IDLE &&
		 new_state == ECOA__module_states_type_READY
						){
		   HCSup_container__START__HCFuncInst(context);
	}
	if ( previous_state == ECOA__module_states_type_READY &&
		 new_state == ECOA__module_states_type_RUNNING
						){
		printf("Up and running\n");
		//services available...
	}
}

void HCSup__lifecycle_notification__HCFuncTrigger
   (HCSup__context* context,
    ECOA__module_states_type previous_state,
    ECOA__module_states_type new_state)
{
	printf("Trigger state notification\n");
	if ( previous_state == ECOA__module_states_type_IDLE &&
		 new_state == ECOA__module_states_type_READY
						){

		   HCSup_container__START__HCFuncTrigger(context);
	}
	if ( previous_state == ECOA__module_states_type_READY &&
		 new_state == ECOA__module_states_type_RUNNING
						){
		printf("Trigger up and running\n");
	}
}

