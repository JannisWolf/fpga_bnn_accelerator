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
static const char *ng0 = "/home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/memory3Bit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2970061603_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 4717);
    t6 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t6 = 0;

LAB10:    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4724);
    t2 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t2 = 0;

LAB18:    if (t2 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4731);
    t2 = 1;
    if (4U == 4U)
        goto LAB24;

LAB25:    t2 = 0;

LAB26:    if (t2 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4738);
    t2 = 1;
    if (4U == 4U)
        goto LAB32;

LAB33:    t2 = 0;

LAB34:    if (t2 != 0)
        goto LAB30;

LAB31:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4745);
    t2 = 1;
    if (4U == 4U)
        goto LAB40;

LAB41:    t2 = 0;

LAB42:    if (t2 != 0)
        goto LAB38;

LAB39:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4752);
    t2 = 1;
    if (4U == 4U)
        goto LAB48;

LAB49:    t2 = 0;

LAB50:    if (t2 != 0)
        goto LAB46;

LAB47:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4759);
    t2 = 1;
    if (4U == 4U)
        goto LAB56;

LAB57:    t2 = 0;

LAB58:    if (t2 != 0)
        goto LAB54;

LAB55:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4766);
    t2 = 1;
    if (4U == 4U)
        goto LAB64;

LAB65:    t2 = 0;

LAB66:    if (t2 != 0)
        goto LAB62;

LAB63:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4773);
    t2 = 1;
    if (4U == 4U)
        goto LAB72;

LAB73:    t2 = 0;

LAB74:    if (t2 != 0)
        goto LAB70;

LAB71:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 4780);
    t2 = 1;
    if (4U == 4U)
        goto LAB80;

LAB81:    t2 = 0;

LAB82:    if (t2 != 0)
        goto LAB78;

LAB79:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(47, ng0);
    t10 = (t0 + 4721);
    t12 = (t0 + 2904);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 3U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB8:    t7 = 0;

LAB11:    if (t7 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t7 = (t7 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(49, ng0);
    t9 = (t0 + 4728);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB16:    t7 = 0;

LAB19:    if (t7 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB17;

LAB21:    t7 = (t7 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 4735);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB24:    t7 = 0;

LAB27:    if (t7 < 4U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB25;

LAB29:    t7 = (t7 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(53, ng0);
    t9 = (t0 + 4742);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB32:    t7 = 0;

LAB35:    if (t7 < 4U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB33;

LAB37:    t7 = (t7 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 4749);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB40:    t7 = 0;

LAB43:    if (t7 < 4U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB41;

LAB45:    t7 = (t7 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(57, ng0);
    t9 = (t0 + 4756);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB48:    t7 = 0;

LAB51:    if (t7 < 4U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB49;

LAB53:    t7 = (t7 + 1);
    goto LAB51;

LAB54:    xsi_set_current_line(59, ng0);
    t9 = (t0 + 4763);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB56:    t7 = 0;

LAB59:    if (t7 < 4U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB57;

LAB61:    t7 = (t7 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 4770);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB64:    t7 = 0;

LAB67:    if (t7 < 4U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB65;

LAB69:    t7 = (t7 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(63, ng0);
    t9 = (t0 + 4777);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB72:    t7 = 0;

LAB75:    if (t7 < 4U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB73;

LAB77:    t7 = (t7 + 1);
    goto LAB75;

LAB78:    xsi_set_current_line(65, ng0);
    t9 = (t0 + 4784);
    t11 = (t0 + 2904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 3U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB80:    t7 = 0;

LAB83:    if (t7 < 4U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB81;

LAB85:    t7 = (t7 + 1);
    goto LAB83;

}


extern void work_a_2970061603_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2970061603_3212880686_p_0};
	xsi_register_didat("work_a_2970061603_3212880686", "isim/fully_connected2_isim_beh.exe.sim/work/a_2970061603_3212880686.didat");
	xsi_register_executes(pe);
}
