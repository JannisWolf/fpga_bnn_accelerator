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
static const char *ng0 = "/home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/xnor_popcount.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_1079952590_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3144);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 5232);
    *((int *)t4) = 0;
    t8 = (t0 + 5236);
    *((int *)t8) = 2;
    t9 = 0;
    t10 = 2;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 1192U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t11 = (t0 + 1352U);
    t14 = *((char **)t11);
    t11 = (t0 + 5232);
    t15 = *((int *)t11);
    t16 = (t15 - 2);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t11));
    t18 = (1U * t17);
    t19 = (0 + t18);
    t20 = (t14 + t19);
    t21 = *((unsigned char *)t20);
    t22 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t21);
    t23 = (t0 + 5232);
    t24 = *((int *)t23);
    t25 = (t24 - 2);
    t26 = (t25 * -1);
    t27 = (1 * t26);
    t28 = (0U + t27);
    t29 = (t0 + 3224);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = t22;
    xsi_driver_first_trans_delta(t29, t28, 1, 0LL);

LAB10:    t2 = (t0 + 5232);
    t9 = *((int *)t2);
    t4 = (t0 + 5236);
    t10 = *((int *)t4);
    if (t9 == t10)
        goto LAB11;

LAB12:    t15 = (t9 + 1);
    t9 = t15;
    t5 = (t0 + 5232);
    *((int *)t5) = t9;
    goto LAB8;

}


extern void work_a_1079952590_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1079952590_3212880686_p_0};
	xsi_register_didat("work_a_1079952590_3212880686", "isim/tb_xnor_isim_beh.exe.sim/work/a_1079952590_3212880686.didat");
	xsi_register_executes(pe);
}
