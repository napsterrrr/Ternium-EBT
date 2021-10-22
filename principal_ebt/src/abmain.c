/* M a i n l i n e                                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

#ifdef __USAGE
%C - This is a QNX/Photon Application.
%C [options]

Options:
  -s server   Server node or device name
  -x x        Initial x position
  -y y        Initial y position
  -h h        Initial h dimension
  -w w        Initial w dimension

Examples:
%C -s4
  Run using Photon server on node 4

%C -s//4/dev/photon
  Same as above

%C -x10 -y10 -h200 -w300
  Run at initial position 10,10 with initial 
  dimension of 200x300.
#endif

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "iv_wgtgeneral.h"

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"
#include "abwidgets.h"
#include "abdefine.h"
#include "abevents.h"
#include "ablinks.h"
#include "abvars.h"

int
main ( int argc, char *argv[] )

	{

	_Ap_.Ap_winstate = 0;
	Iv_AB_DesigneMode = 0;
	/* AppBuilder Initialization */
	ApInitialize( argc, argv, &AbContext );

	/* Display main window */
	ApLinkWindow( NULL, &AbApplLinks[0], NULL );

	/* Loop until user quits application */
	PtMainLoop( );
	PtExit( 0 );

	return 0;
	}

static const ApClassTab_t ClassTable[] = {
	{ "PtWindow", &PtWindow },
	{ "Iv3Timer", &Iv3Timer },
	{ "PtPane", &PtPane },
	{ "PtContainer", &PtContainer },
	{ "PtLabel", &PtLabel },
	{ "Iv3Container", &Iv3Container },
	{ "Iv3Meter", &Iv3Meter },
	{ "Iv3Command", &Iv3Command },
	{ "Iv3Sign", &Iv3Sign },
	{ "Iv3OnOff", &Iv3OnOff },
	{ "PtSeparator", &PtSeparator },
	{ "PtButton", &PtButton },
	{ "PtBkgd", &PtBkgd },
	{ "Iv3Progress", &Iv3Progress },
	{ "IvScale", &IvScale },
	{ "Iv3LblBlink", &Iv3LblBlink },
	{ "IvSystem", &IvSystem },
	{ "PtGroup", &PtGroup },
	{ "Iv3JogSafe", &Iv3JogSafe },
	{ "Iv3Graph", &Iv3Graph },
	{ "PtRect", &PtRect },
	{ "PtLine", &PtLine },
	{ "PtTimer", &PtTimer },
	{ "Iv3Click", &Iv3Click },
	{ NULL, NULL }
	};

ApContext_t AbContext = { ClassTable, 1, AbWidgets };


