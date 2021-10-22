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
const char *abierto[]={"HE1.CMD.D0WPWRSYS_11","HE1.CMD.D0WPWRSYS_1","HE1.CMD.D0WPWRSYS_5","HE1.CMD.D0WPWRSYS_3","HE1.CMD.D0WPWRSYS_7"};//abrir
const char *cerrado[]={"HE1.CMD.D0WPWRSYS_10","HE1.CMD.D0WPWRSYS_0","HE1.CMD.D0WPWRSYS_4","HE1.CMD.D0WPWRSYS_2","HE1.CMD.D0WPWRSYS_6"};//cerrar
const char *titless[]={"INTER. PRINCIPAL","Q1","Q01_Q02","Q2","Q03_Q04"};

int OpWin_interrupcion( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	//printf("--->%d",	PtSetResource(ABW_Window1,Pt_ARG_POS, &pos, 0));	
	puts ("QUE LA PELOTITA!");
 	if(ApWidget(cbinfo)==ABW_btnOp0)
	{ 
	   printf("--->%d",	PtSetResource(ABW_PtLabel523,Pt_ARG_TEXT_STRING,   titless[0], 0));
	   printf("--->%d",	PtSetResource(ABW_btnOpened, Iv3_ARG_WRITE_TAGS, abierto[0], 0));
	   printf("--->%d",	PtSetResource(ABW_btnClosed, Iv3_ARG_WRITE_TAGS, cerrado[0], 0));
	}
	else if(ApWidget(cbinfo)==ABW_btnOp1)
	{
       printf("--->%d",	PtSetResource(ABW_PtLabel523,Pt_ARG_TEXT_STRING,   titless[1], 0));
	   printf("--->%d",	PtSetResource(ABW_btnOpened, Iv3_ARG_WRITE_TAGS, abierto[1], 0));
	   printf("--->%d",	PtSetResource(ABW_btnClosed, Iv3_ARG_WRITE_TAGS, cerrado[1], 0));
	}
	else if(ApWidget(cbinfo)==ABW_btnOp2)
	{
       printf("--->%d",	PtSetResource(ABW_PtLabel523,Pt_ARG_TEXT_STRING,   titless[2], 0));
	   printf("--->%d",	PtSetResource(ABW_btnOpened, Iv3_ARG_WRITE_TAGS, abierto[2], 0));
	   printf("--->%d",	PtSetResource(ABW_btnClosed, Iv3_ARG_WRITE_TAGS, cerrado[2], 0));			  
	}			
	else if(ApWidget(cbinfo)==ABW_btnOp3)
	{ 
       printf("--->%d",	PtSetResource(ABW_PtLabel523,Pt_ARG_TEXT_STRING,   titless[3], 0));
	   printf("--->%d",	PtSetResource(ABW_btnOpened, Iv3_ARG_WRITE_TAGS, abierto[3], 0));
	   printf("--->%d",	PtSetResource(ABW_btnClosed, Iv3_ARG_WRITE_TAGS, cerrado[3], 0));
	}
	else if(ApWidget(cbinfo)==ABW_btnOp4)
	{ 
	  printf("--->%d",	PtSetResource(ABW_PtLabel523,Pt_ARG_TEXT_STRING,   titless[4], 0));
	  printf("--->%d",	PtSetResource(ABW_btnOpened, Iv3_ARG_WRITE_TAGS, abierto[4], 0));
	  printf("--->%d",	PtSetResource(ABW_btnClosed, Iv3_ARG_WRITE_TAGS, cerrado[4], 0));
	}			
	else
		puts("no lo detecto!!");
	return( Pt_CONTINUE );
}


int desactWindow( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	puts("procedo a desactivar ventana");
	puntero = PtBlockAllWindows(ABW_Window1_INTERRUPCION, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );
}

