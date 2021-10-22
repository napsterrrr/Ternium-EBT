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
/*DEFINES*/
#define MAX_APPS			500
#define MAX_APPS_TAM		16

PtBlockedList_t *puntero;

int desacWin11( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	 puntero = PtBlockAllWindows(ABW_Window11, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}


int desacWin5( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	 puntero = PtBlockAllWindows(ABW_Window5, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}

int desacWin8( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	 puntero = PtBlockAllWindows(ABW_Window8, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}
int desacWin3( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	 puntero = PtBlockAllWindows(ABW_Window3, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );

}
int funcActivar( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	PtUnblockWindows(puntero);

	return( Pt_CONTINUE );

}
int block ( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
    char read_tag[3]="=1\0";
    PtArg_t args[1];
	unsigned long* pnGetFlags = 0;
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	if( ApWidget(cbinfo)==ABW_boton_block)
	{	

 		PtGetResource(ABW_boton_fuera, Pt_ARG_FLAGS, &pnGetFlags, 0);
   		if(*pnGetFlags & Pt_BLOCKED) 
		{	
			puts("desbloqueo boton");
			PtSetArg(&args[0],Pt_ARG_FLAGS,Pt_FALSE, Pt_GHOST | Pt_BLOCKED );
		   	PtSetResource(ABW_bloqueo, Iv3_ARG_TAG , read_tag, 0);		  	
		   	
		}
		else
		{
			read_tag[1]='0';
			puts("bloqueo boton");
			PtSetArg(&args[0],Pt_ARG_FLAGS,Pt_TRUE, Pt_BLOCKED );
			PtSetResource(ABW_bloqueo, Iv3_ARG_TAG , read_tag, 0);		  	
	   	}
	   	PtSetResources(ABW_boton_fuera, 1, args);
	}
	else
		puts("BOTON NO ADECUADO, REVISA EL NOMBRE DEL WIDGET");
	return( Pt_CONTINUE );
}
int desacWin9( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{

	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	puntero = PtBlockAllWindows(ABW_Window9, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );
}

int blocked1( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
	/* eliminate 'unreferenced' warnings */
	int valor;
	int setpoint = 1;
	double tagg_val;
	double valor_1=0;
	char tagg [] = "HE1.ES.D0RDRI_103";
	char tagg_envia[]="HE1.CMD.D0WDRI_26";
	char Host [256];
	char programa[256];
	IvUserCfg_t usu;
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	_cmdname(programa);
	valor = IvRtServer_GetNumeric(tagg,&tagg_val, NULL);

	if (tagg_val == 1)
	{
		IvUser_GetCurrent("HE1", 0, &usu);
		if (usu.id == 2)
		{
			strcpy(usu.user, "ope");;
			gethostname(Host, 256);
			if(ApWidget(cbinfo)==ABW_boton_block0)
				valor_1=1;
			IvCommandsServer_Write(tagg_envia, setpoint, valor_1, usu.user, programa, Host);
			printf("escribi en el tag %s el valor %f\n", tagg_envia, valor_1);
		}
		else
		{
			printf ("impsible escribir en dicho tag,el tag %s valor = %f el permiso de ususario no es correcto\n", tagg, tagg_val);
			IvNotice ("ATENCION", 2, "Acceso denegado. Codigo -12013");
		}
			
	}
	else
	{
		printf ("impsible escribir en dicho tag,el tag %s valor = %f\n", tagg, tagg_val);
		IvNotice ("ERROR", 0, "El comando no podra ser enviado hasta que EL Tag HE1.ES.D0RDRI_103 tome el valor de 1");
		//void IvNotice(const char *title, int image, const char *text, ...);
	}
	return( Pt_CONTINUE );
}

