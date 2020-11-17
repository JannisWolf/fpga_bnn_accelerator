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
static const char *ng0 = "/home/taste/iris_fc/src/fpga_logic/TASTE-VHDL-XISE/tb_fifo.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0147313912_0831356973_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (5 * 1000LL);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 4584);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 4584);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 4184);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0147313912_0831356973_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3672);
    t3 = (t0 + 2968U);
    t4 = (t0 + 7568);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 12;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (12 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    std_textio_write7(STD_TEXTIO, t2, t3, t4, t6, (unsigned char)0, 0);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3672);
    t3 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 2968U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    xsi_set_current_line(84, ng0);

LAB6:    t2 = (t0 + 4200);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 4200);
    *((int *)t3) = 0;
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);

LAB10:    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 4216);
    *((int *)t3) = 0;
    xsi_set_current_line(87, ng0);

LAB14:    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 4232);
    *((int *)t3) = 0;
    xsi_set_current_line(88, ng0);

LAB18:    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t3 = (t0 + 4248);
    *((int *)t3) = 0;
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 7580);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    memcpy(t13, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);

LAB22:    t2 = (t0 + 4264);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t3 = (t0 + 4264);
    *((int *)t3) = 0;
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);

LAB26:    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t3 = (t0 + 4280);
    *((int *)t3) = 0;
    xsi_set_current_line(95, ng0);

LAB30:    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t3 = (t0 + 4296);
    *((int *)t3) = 0;
    xsi_set_current_line(96, ng0);

LAB34:    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    t3 = (t0 + 4312);
    *((int *)t3) = 0;
    xsi_set_current_line(97, ng0);

LAB38:    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB36:    t3 = (t0 + 4328);
    *((int *)t3) = 0;
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 7583);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    memcpy(t13, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);

LAB42:    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t3 = (t0 + 4344);
    *((int *)t3) = 0;
    xsi_set_current_line(102, ng0);

LAB46:    t2 = (t0 + 4360);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB40;
    else
        goto LAB42;

LAB43:    goto LAB41;

LAB44:    t3 = (t0 + 4360);
    *((int *)t3) = 0;
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);

LAB50:    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB44;
    else
        goto LAB46;

LAB47:    goto LAB45;

LAB48:    t3 = (t0 + 4376);
    *((int *)t3) = 0;
    xsi_set_current_line(105, ng0);

LAB54:    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    t3 = (t0 + 4392);
    *((int *)t3) = 0;
    xsi_set_current_line(106, ng0);

LAB58:    t2 = (t0 + 4408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    t3 = (t0 + 4408);
    *((int *)t3) = 0;
    xsi_set_current_line(107, ng0);

LAB62:    t2 = (t0 + 4424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB56;
    else
        goto LAB58;

LAB59:    goto LAB57;

LAB60:    t3 = (t0 + 4424);
    *((int *)t3) = 0;
    xsi_set_current_line(108, ng0);

LAB66:    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB60;
    else
        goto LAB62;

LAB63:    goto LAB61;

LAB64:    t3 = (t0 + 4440);
    *((int *)t3) = 0;
    xsi_set_current_line(109, ng0);

LAB70:    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    t3 = (t0 + 4456);
    *((int *)t3) = 0;
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7586);
    t4 = (t0 + 4712);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    memcpy(t13, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(112, ng0);

LAB74:    t2 = (t0 + 4472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    t3 = (t0 + 4472);
    *((int *)t3) = 0;
    xsi_set_current_line(113, ng0);

LAB78:    t2 = (t0 + 4488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB72;
    else
        goto LAB74;

LAB75:    goto LAB73;

LAB76:    t3 = (t0 + 4488);
    *((int *)t3) = 0;
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);

LAB82:    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB76;
    else
        goto LAB78;

LAB79:    goto LAB77;

LAB80:    t3 = (t0 + 4504);
    *((int *)t3) = 0;
    goto LAB2;

LAB81:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

}


extern void work_a_0147313912_0831356973_init()
{
	static char *pe[] = {(void *)work_a_0147313912_0831356973_p_0,(void *)work_a_0147313912_0831356973_p_1};
	xsi_register_didat("work_a_0147313912_0831356973", "isim/module_fifo_regs_no_flags_tb_isim_beh.exe.sim/work/a_0147313912_0831356973.didat");
	xsi_register_executes(pe);
}
