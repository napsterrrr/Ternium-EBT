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


const	char *titles[]={"QUEMADOR 1","QUEMADOR 2","QUEMADOR 7","QUEMADOR 8"};
char *tags[]={"HE1.SP.A0WBURNER_16","HE1.SP.A0WBURNER_17","HE1.SP.A0WBURNER_22","HE1.SP.A0WBURNER_23"};//tgas de estados de los quemadores ALTO , BAJO, R1,R2,R3,R4
PtBlockedList_t *puntero;


int quemador_1( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{
	/* eliminate 'unreferenced' warnings */
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	/* eliminate 'unreferenced' warnings */
	if(ApWidget(cbinfo)==ABW_btnq1_1)
	{
		puts("estoy en quemador 1");			
		printf("--->%d",	PtSetResource(ABW_PtLabel1,Pt_ARG_TEXT_STRING, titles[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnAlto, Iv3_ARG_WRITE_TAGS, tags[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnBajo, Iv3_ARG_WRITE_TAGS, tags[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnR1, Iv3_ARG_WRITE_TAGS,   tags[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnR2, Iv3_ARG_WRITE_TAGS,   tags[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnR3, Iv3_ARG_WRITE_TAGS,   tags[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnR4, Iv3_ARG_WRITE_TAGS,   tags[0], 0));	   
	}
	else
		if(ApWidget(cbinfo)==ABW_btnq2_1)
		{
			puts("estoy en quemador 2");	 
		   	printf("--->%d",	PtSetResource(ABW_PtLabel1,Pt_ARG_TEXT_STRING, titles[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnAlto, Iv3_ARG_WRITE_TAGS, tags[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnBajo, Iv3_ARG_WRITE_TAGS, tags[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnR1, Iv3_ARG_WRITE_TAGS,   tags[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnR2, Iv3_ARG_WRITE_TAGS,   tags[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnR3, Iv3_ARG_WRITE_TAGS,   tags[1], 0));
		   	printf("--->%d",	PtSetResource(ABW_btnR4, Iv3_ARG_WRITE_TAGS,   tags[1], 0));
		}	
		else
			if(ApWidget(cbinfo)==ABW_btnq7_1)
			{	
				puts("estoy en quemador 7"); 	  
		       	printf("--->%d",	PtSetResource(ABW_PtLabel1,Pt_ARG_TEXT_STRING, titles[2], 0));		
			   	printf("--->%d",	PtSetResource(ABW_btnAlto, Iv3_ARG_WRITE_TAGS, tags[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnBajo, Iv3_ARG_WRITE_TAGS, tags[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnR1, Iv3_ARG_WRITE_TAGS,   tags[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnR2, Iv3_ARG_WRITE_TAGS,   tags[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnR3, Iv3_ARG_WRITE_TAGS,   tags[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnR4, Iv3_ARG_WRITE_TAGS,   tags[2], 0));
			}
			else
				if(ApWidget(cbinfo)==ABW_btnq8_1)
				{
					puts("estoy en quemador 8");			  
			       	printf("--->%d",	PtSetResource(ABW_PtLabel1,Pt_ARG_TEXT_STRING, titles[3], 0));							
			   		printf("--->%d",	PtSetResource(ABW_btnAlto, Iv3_ARG_WRITE_TAGS, tags[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnBajo, Iv3_ARG_WRITE_TAGS, tags[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnR1, Iv3_ARG_WRITE_TAGS,   tags[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnR2, Iv3_ARG_WRITE_TAGS,   tags[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnR3, Iv3_ARG_WRITE_TAGS,   tags[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnR4, Iv3_ARG_WRITE_TAGS,   tags[3], 0));
				}			
				else
					puts("no lo detecto!!");
	puntero = PtBlockAllWindows(ABW_Window1_QUEMADOR, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE ); 
}

int quemador_2( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )
{	
	//PhPoint_t pos={1308,663};
	char *tagsEnableDesableBurner[]={ 
	"HE1.CMD.D0WBURNER_16","HE1.CMD.D0WBURNER_17","HE1.CMD.D0WBURNER_22","HE1.CMD.D0WBURNER_23",//habilitan quemadores 1,2,7 y 8 
    "HE1.CMD.D0WBURNER_24","HE1.CMD.D0WBURNER_25","HE1.CMD.D0WBURNER_30","HE1.CMD.D0WBURNER_31"//desabilitan quemadores 1,2,7 y 8 
	};
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	//printf("--->%d",	PtSetResource(ABW_Window2,Pt_ARG_POS, &pos, 0));	
	if(ApWidget(cbinfo)==ABW_btnq1_2)
	{
		puts("estoy en quemador 1");
  	   	printf("--->%d",	PtSetResource(ABW_PtLabel2,Pt_ARG_TEXT_STRING, titles[0], 0));		
		printf("--->%d",	PtSetResource(ABW_btnEnable1, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnEnable2, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[4], 0));
	}
	else
		if(ApWidget(cbinfo)==ABW_btnq2_2)
		{
			puts("estoy en quemador 2");
			printf("--->%d",	PtSetResource(ABW_PtLabel2,Pt_ARG_TEXT_STRING, titles[1], 0));		
			printf("--->%d",	PtSetResource(ABW_btnEnable1, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[1], 0));
			printf("--->%d",	PtSetResource(ABW_btnEnable2, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[5], 0));
		}
		else
			if(ApWidget(cbinfo)==ABW_btnq7_2)
			{
				puts("estoy en quemador 7");
   			   	printf("--->%d",	PtSetResource(ABW_PtLabel2,Pt_ARG_TEXT_STRING, titles[2], 0));			
			   	printf("--->%d",	PtSetResource(ABW_btnEnable1, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[2], 0));
			   	printf("--->%d",	PtSetResource(ABW_btnEnable2, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[6], 0));
			}
			else
				if(ApWidget(cbinfo)==ABW_btnq8_2)
				{
					puts("estoy en quemador 8");
			   		printf("--->%d",	PtSetResource(ABW_PtLabel2,Pt_ARG_TEXT_STRING, titles[3], 0));		
			   		printf("--->%d",	PtSetResource(ABW_btnEnable1, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[3], 0));
			   		printf("--->%d",	PtSetResource(ABW_btnEnable2, Iv3_ARG_WRITE_TAGS, tagsEnableDesableBurner[7], 0));
				}
				else
					puts("no lo detecto!!");
	puntero = PtBlockAllWindows(ABW_Window2_QUEMADOR, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );
}

int quemador_3( PtWidget_t *link_instance, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

{
	//PhPoint_t pos={1308,711};
	//tagsde  de quemadores: ENCENDER , ENCENDER, ENCE.. PURGA Y APA.. PURGA
	//DEL 0 AL 3 ENCIENDEN QUEMADFORES 1,2,7,8 RESPECTIVAMENTE
	//DEL 4 AL 7  APAGAN QUEMADORES
	//DEL 8 AL 11 ENCIENDEN PURGA
	//DEL 12 AL 15 APAGAN PURGA 
	char *tagsOnOffBurner[]={
    "HE1.CMD.D0WBURNER_0","HE1.CMD.D0WBURNER_1","HE1.CMD.D0WBURNER_6","HE1.CMD.D0WBURNER_7",
    "HE1.CMD.D0WBURNER_8","HE1.CMD.D0WBURNER_9","HE1.CMD.D0WBURNER_14","HE1.CMD.D0WBURNER_15",
    "HE1.CMD.D0WBURNER_48","HE1.CMD.D0WBURNER_49","HE1.CMD.D0WBURNER_54","HE1.CMD.D0WBURNER_55",
    "HE1.CMD.D0WBURNER_56","HE1.CMD.D0WBURNER_57","HE1.CMD.D0WBURNER_62","HE1.CMD.D0WBURNER_63"
    };
	/* eliminate 'unreferenced' warnings */
	//printf("--->%d",	PtSetResource(ABW_Window3,Pt_ARG_POS, &pos, 0));	
	link_instance = link_instance, apinfo = apinfo, cbinfo = cbinfo;
	if(ApWidget(cbinfo)==ABW_btnq1_3)
	{
		puts("estoy en quemador 1");
        printf("--->%d",	PtSetResource(ABW_PtLabel3,Pt_ARG_TEXT_STRING, titles[0], 0));	
		printf("--->%d",	PtSetResource(ABW_btnOn, Iv3_ARG_WRITE_TAGS,           tagsOnOffBurner[0], 0));
		printf("--->%d",	PtSetResource(ABW_btnOff, Iv3_ARG_WRITE_TAGS,          tagsOnOffBurner[4], 0));
		printf("--->%d",	PtSetResource(ABW_btnEnablePurga, Iv3_ARG_WRITE_TAGS,  tagsOnOffBurner[8], 0));
		printf("--->%d",	PtSetResource(ABW_btnDesablePurga, Iv3_ARG_WRITE_TAGS, tagsOnOffBurner[12], 0));
	}
	else
		if(ApWidget(cbinfo)==ABW_btnq2_3)
		{
			puts("estoy en quemador 2");	
            printf("--->%d",	PtSetResource(ABW_PtLabel3,Pt_ARG_TEXT_STRING, titles[1], 0));
			printf("--->%d",	PtSetResource(ABW_btnOn, Iv3_ARG_WRITE_TAGS,           tagsOnOffBurner[1], 0));
			printf("--->%d",	PtSetResource(ABW_btnOff, Iv3_ARG_WRITE_TAGS,          tagsOnOffBurner[5], 0));
			printf("--->%d",	PtSetResource(ABW_btnEnablePurga, Iv3_ARG_WRITE_TAGS,  tagsOnOffBurner[9], 0));
			printf("--->%d",	PtSetResource(ABW_btnDesablePurga, Iv3_ARG_WRITE_TAGS, tagsOnOffBurner[13], 0));
		}
		else
			if(ApWidget(cbinfo)==ABW_btnq7_3)
			{
				puts("estoy en quemador 7");	
              	printf("--->%d",	PtSetResource(ABW_PtLabel3,Pt_ARG_TEXT_STRING, titles[2], 0));		
			  	printf("--->%d",	PtSetResource(ABW_btnOn, Iv3_ARG_WRITE_TAGS,           tagsOnOffBurner[2], 0));
			  	printf("--->%d",	PtSetResource(ABW_btnOff, Iv3_ARG_WRITE_TAGS,          tagsOnOffBurner[6], 0));
			  	printf("--->%d",	PtSetResource(ABW_btnEnablePurga, Iv3_ARG_WRITE_TAGS,  tagsOnOffBurner[10], 0));
			  	printf("--->%d",	PtSetResource(ABW_btnDesablePurga, Iv3_ARG_WRITE_TAGS, tagsOnOffBurner[14], 0));
			}
			else
				if(ApWidget(cbinfo)==ABW_btnq8_3)
				{
					puts("estoy en quemador 8");
		 			printf("--->%d",	PtSetResource(ABW_PtLabel3,Pt_ARG_TEXT_STRING, titles[3], 0));
			  		printf("--->%d",	PtSetResource(ABW_btnOn, Iv3_ARG_WRITE_TAGS,           tagsOnOffBurner[3], 0));
			  		printf("--->%d",	PtSetResource(ABW_btnOff, Iv3_ARG_WRITE_TAGS,          tagsOnOffBurner[7], 0));
			  		printf("--->%d",	PtSetResource(ABW_btnEnablePurga, Iv3_ARG_WRITE_TAGS,  tagsOnOffBurner[11], 0));
			  		printf("--->%d",	PtSetResource(ABW_btnDesablePurga, Iv3_ARG_WRITE_TAGS, tagsOnOffBurner[15], 0));
				}
				else
					puts("no lo detecto!!");
	puntero = PtBlockAllWindows(ABW_Window3_QUEMADOR, Ph_CURSOR_NOINPUT, Pg_BLACK );
	return( Pt_CONTINUE );
}
