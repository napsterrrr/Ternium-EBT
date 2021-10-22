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

const char *compuerta [] = {"431-F1", "431-F2", "421-F2"};
const char *tag_abrir [] = {"HE1.CMD.D0WDRI_16","HE1.CMD.D0WDRI_18","HE1.CMD.ABRIR_COMPUERTA421_F2"};
const char *tag_cerrar [] = {"HE1.CMD.D0WDRI_17","HE1.CMD.D0WDRI_19","HE1.CMD.CERRAR_COMPUERTA421_F2"};
PtBlockedList_t *puntero;


int compuerta_431_f1( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	
	if (ApWidget (cbinfo) == ABW_btn_431_F1)
	{
		PtSetResource (ABW_PtLabel11, Pt_ARG_TEXT_STRING, compuerta [0], 0);
		PtSetResource (ABW_btn_abrir, Iv3_ARG_WRITE_TAGS, tag_abrir [0], 0);
		PtSetResource (ABW_btn_cerrar, Iv3_ARG_WRITE_TAGS, tag_cerrar [0], 0);
	}

	
	puntero = PtBlockAllWindows(ABW_Window1_ALCO_TOLVAS, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}


int compuerta_431_f2( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	
	if (ApWidget (cbinfo) == ABW_btn_431_F2)
	{
		PtSetResource (ABW_PtLabel11, Pt_ARG_TEXT_STRING, compuerta [1], 0);
		PtSetResource (ABW_btn_abrir, Iv3_ARG_WRITE_TAGS, tag_abrir [1], 0);
		PtSetResource (ABW_btn_cerrar, Iv3_ARG_WRITE_TAGS, tag_cerrar [1], 0);
	}

	puntero = PtBlockAllWindows(ABW_Window1_ALCO_TOLVAS, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}

int compuerta_421_f2( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	if (ApWidget (cbinfo) == ABW_btn_421_F2)
	{
		PtSetResource (ABW_PtLabel11, Pt_ARG_TEXT_STRING, compuerta [2], 0);
		PtSetResource (ABW_btn_abrir, Iv3_ARG_WRITE_TAGS, tag_abrir [2], 0);
		PtSetResource (ABW_btn_cerrar, Iv3_ARG_WRITE_TAGS, tag_cerrar [2], 0);
	}

	puntero = PtBlockAllWindows(ABW_Window1_ALCO_TOLVAS, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}
