/* Event header for application - AppBuilder 2.03  */

static const ApEventLink_t AbApplLinks[] = {
	{ 3, 0, 0L, 0L, 0L, &base, NULL, NULL, 0, NULL, 0, 5, 0, 40, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window0[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "boton_block", 2009, block, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window3, NULL, "boton_fuera", 2009, NULL, 0, 2, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "boton_fuera", 2009, desacWin3, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "btnMantenimiento00010", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_base[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir0", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "boton_block0", 2009, blocked1, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "boton_block00", 2009, blocked1, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "Iv3Command_auto_block", 2009, blocked1, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window11, NULL, "btnMantenimiento000", 2009, NULL, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnMantenimiento000", 2009, desacWin11, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window5, NULL, "btnMantenimiento0000", 2009, NULL, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnMantenimiento0000", 2009, desacWin5, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window9, NULL, "PtButton7810", 2009, NULL, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton7810", 2009, desacWin9, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window0, NULL, "btnMantenimiento0001", 2009, NULL, 0, 5, 10, 596, },
	{ 3, 0, 0L, 0L, 0L, &Window8, NULL, "PtButton781", 2009, NULL, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton781", 2009, desacWin8, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window_QUEMADOR, NULL, "btnMantenimiento00011", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_MOVIMIENTOS, NULL, "btnMantenimiento00012", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_MORDAZAS, NULL, "btnMantenimiento00013", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_DRI0, NULL, "btnMantenimiento00014", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_LANZAS, NULL, "btnMantenimiento00015", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_INTERRUPCION, NULL, "btnMantenimiento00016", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &Window_TORRE, NULL, "btnMantenimiento00017", 2009, NULL, 0, 5, 1096, 591, },
	{ 3, 0, 0L, 0L, 0L, &Celox_Window, NULL, "btnMantenimiento0001300", 2009, NULL, 0, 5, 1100, 595, },
	{ 3, 0, 0L, 0L, 0L, &vida_taphole_revestimiento, NULL, "btnMantenimiento0001310", 2009, NULL, 0, 5, 1100, 595, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window10[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00010201", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window11[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000102000", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000102000", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window1_INTERRUPCION[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_interrupcion_1", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_interrupcion_1", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window1_MOVIMIENTOS[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_movimientos_1", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_movimientos_1", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window2_MOVIMIENTOS[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window3[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000102001", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000102001", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window5[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000100", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir000100", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window9[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00010200", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00010200", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_DRI[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_dri", 2009, NULL, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_ALCO_TOLVAS, NULL, "btn_431_F1", 2009, compuerta_431_f1, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_ALCO_TOLVAS, NULL, "btn_431_F2", 2009, compuerta_431_f2, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_ALCO_TOLVAS, NULL, "btn_421_F2", 2009, compuerta_421_f2, 0, 9, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_INTERRUPCION[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_mordazas0", 2009, NULL, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_INTERRUPCION, NULL, "btnOp1", 2009, OpWin_interrupcion, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnOp1", 2009, desactWindow, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_INTERRUPCION, NULL, "btnOp2", 2009, OpWin_interrupcion, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnOp2", 2009, desactWindow, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_INTERRUPCION, NULL, "btnOp3", 2009, OpWin_interrupcion, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnOp3", 2009, desactWindow, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_INTERRUPCION, NULL, "btnOp4", 2009, OpWin_interrupcion, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnOp4", 2009, desactWindow, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_INTERRUPCION, NULL, "btnOp0", 2007, OpWin_interrupcion, 0, 9, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "btnOp0", 2007, desactWindow, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_LANZAS[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_lanzas", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_MORDAZAS[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "ChequeoUsuario", 41002, FuncionBloqueo_mordaza, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_mordazas", 2009, deslog_mordaza, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_mordazas", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "boton_block_mordaza", 2009, login_mordaza, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_MOVIMIENTOS[] = {
	{ 3, 0, 0L, 0L, 0L, &Window1_MOVIMIENTOS, NULL, "btnMantenimiento00020", 2009, desacWin_movimientos, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window2_MOVIMIENTOS, NULL, "btnMantenimiento0002", 2009, desacWin_movimientos_2, 0, 9, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir2", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_QUEMADOR[] = {
	{ 3, 0, 0L, 0L, 0L, &Window1_QUEMADOR, NULL, "btnq1_1", 2009, quemador_1, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window2_QUEMADOR, NULL, "btnq1_2", 2009, quemador_2, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window3_QUEMADOR, NULL, "btnq1_3", 2009, quemador_3, 0, 9, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_quemador_4", 2009, NULL, 0, 0, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_QUEMADOR, NULL, "btnq2_1", 2009, quemador_1, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window2_QUEMADOR, NULL, "btnq2_2", 2009, quemador_2, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window3_QUEMADOR, NULL, "btnq2_3", 2009, quemador_3, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_QUEMADOR, NULL, "btnq7_1", 2009, quemador_1, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window2_QUEMADOR, NULL, "btnq7_2", 2009, quemador_2, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window3_QUEMADOR, NULL, "btnq7_3", 2009, quemador_3, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window1_QUEMADOR, NULL, "btnq8_1", 2009, quemador_1, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window2_QUEMADOR, NULL, "btnq8_2", 2009, quemador_2, 0, 9, 0, 0, },
	{ 3, 0, 0L, 0L, 0L, &Window3_QUEMADOR, NULL, "btnq8_3", 2009, quemador_3, 0, 9, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_TORRE[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_torre", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window8[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir0001020", 2009, NULL, 0, 0, 0, 0, },
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir0001020", 2009, funcActivar, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window1_QUEMADOR[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir01", 2009, funcActivar, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir01", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window2_QUEMADOR[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00000", 2009, funcActivar, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir00000", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window3_QUEMADOR[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir0001", 2009, funcActivar, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir0001", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Celox_Window[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_torre0", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_vida_taphole_revestimiento[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_torre00", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window1_ALCO_TOLVAS[] = {
	{ 8, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir010", 2009, funcActivar, 0, 0, 0, 0, },
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_Salir010", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

static const ApEventLink_t AbLinks_Window_DRI0[] = {
	{ 9, 0, 0L, 0L, 0L, NULL, NULL, "PtButton_dri0", 2009, NULL, 0, 0, 0, 0, },
	{ 0 }
	};

const char ApOptions[] = AB_OPTIONS;
