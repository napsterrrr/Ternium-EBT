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

IvUserCfg_t user;
int iUser,iUserBefore;
void ObtenUser()
{
	IvUser_GetCurrent("HE1", 0, &user);
	iUser=user.id;	
}

int login_mordaza( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
	char read_tag[3]="=0\0";
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	ObtenUser();
	if(iUser == 2)
	{	
	    PtSetResource(ABW_bloqueo_mordaza, Iv3_ARG_TAG, read_tag, 0);
	    	printf("deslogueado -> %d",iUser);	
		system("Login -SHE1 -A -L -Uoperador -Pope -C &");
	}
	else
 		system("Login -SHE1  -Uguardiamtto -C -E &");
	return( Pt_CONTINUE );
}

int deslog_mordaza( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	system("Login -SHE1 -A -L -Uoperador -Pope -C ");
	return( Pt_CONTINUE );
}

int FuncionBloqueo_mordaza( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
	char read_tag[3]="=1\0";
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;
	ObtenUser();
 	//printf("id---> %d",iUser);
	if(iUser != iUserBefore )
	{
		iUserBefore = iUser;
		printf("before if---> %d",iUser);
	}
	else
		return( Pt_CONTINUE );
	if(iUser==2)	
	{
		//puts("logueado!");
	    PtSetResource(ABW_bloqueo_mordaza, Iv3_ARG_TAG, read_tag, 0);
	}
	else
	{
		read_tag[1]='0';
		//puts("no eres el user indicado!!!!");
	 	   PtSetResource(ABW_bloqueo_mordaza, Iv3_ARG_TAG, read_tag, 0);
	}
	return( Pt_CONTINUE );
}

