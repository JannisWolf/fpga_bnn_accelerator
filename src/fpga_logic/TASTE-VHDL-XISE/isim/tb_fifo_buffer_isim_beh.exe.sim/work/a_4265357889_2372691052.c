/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/tb_fifo_buffer.vhd";



static void work_a_4265357889_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4265357889_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2768U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4792);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB14:    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 4312);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB18:    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 4328);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB22:    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 4344);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB26:    t2 = (t0 + 4360);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t4 = (t0 + 4360);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4792);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4856);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB30:    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 4376);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB34:    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    t4 = (t0 + 4392);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB38:    t2 = (t0 + 4408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB36:    t4 = (t0 + 4408);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB42:    t2 = (t0 + 4424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t4 = (t0 + 4424);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4856);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4792);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB46:    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB40;
    else
        goto LAB42;

LAB43:    goto LAB41;

LAB44:    t4 = (t0 + 4440);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB50:    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB44;
    else
        goto LAB46;

LAB47:    goto LAB45;

LAB48:    t4 = (t0 + 4456);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4856);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB54:    t2 = (t0 + 4472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    t4 = (t0 + 4472);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB58:    t2 = (t0 + 4488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    t4 = (t0 + 4488);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB62:    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB56;
    else
        goto LAB58;

LAB59:    goto LAB57;

LAB60:    t4 = (t0 + 4504);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB66:    t2 = (t0 + 4520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB60;
    else
        goto LAB62;

LAB63:    goto LAB61;

LAB64:    t4 = (t0 + 4520);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB70:    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    t4 = (t0 + 4536);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB74:    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    t4 = (t0 + 4552);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB78:    t2 = (t0 + 4568);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB72;
    else
        goto LAB74;

LAB75:    goto LAB73;

LAB76:    t4 = (t0 + 4568);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB82:    t2 = (t0 + 4584);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB76;
    else
        goto LAB78;

LAB79:    goto LAB77;

LAB80:    t4 = (t0 + 4584);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4792);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB86:    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    t4 = (t0 + 4600);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB90:    t2 = (t0 + 4616);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB84;
    else
        goto LAB86;

LAB87:    goto LAB85;

LAB88:    t4 = (t0 + 4616);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB94:    t2 = (t0 + 4632);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB88;
    else
        goto LAB90;

LAB91:    goto LAB89;

LAB92:    t4 = (t0 + 4632);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);

LAB98:    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB92;
    else
        goto LAB94;

LAB95:    goto LAB93;

LAB96:    t4 = (t0 + 4648);
    *((int *)t4) = 0;
    xsi_set_current_line(113, ng0);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB96;
    else
        goto LAB98;

LAB99:    goto LAB97;

LAB100:    goto LAB2;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

}


extern void work_a_4265357889_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4265357889_2372691052_p_0,(void *)work_a_4265357889_2372691052_p_1};
	xsi_register_didat("work_a_4265357889_2372691052", "isim/tb_fifo_buffer_isim_beh.exe.sim/work/a_4265357889_2372691052.didat");
	xsi_register_executes(pe);
}
