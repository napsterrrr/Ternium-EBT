/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"

PtBlockedList_t *puntero;


int desacWin_movimientos( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	  puntero = PtBlockAllWindows(ABW_Window1_MOVIMIENTOS, Ph_CURSOR_NOINPUT, Pg_BLACK );

	return( Pt_CONTINUE );

}
	
int desacWin_movimientos_2( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	puntero = PtBlockAllWindows(ABW_Window2_MOVIMIENTOS, Ph_CURSOR_NOINPUT, Pg_BLACK );

	return( Pt_CONTINUE );

}

