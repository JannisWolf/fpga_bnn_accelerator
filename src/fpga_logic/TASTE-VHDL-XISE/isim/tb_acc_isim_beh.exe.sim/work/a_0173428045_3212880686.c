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
static const char *ng0 = "/home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/upsample3_64.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0173428045_3212880686_p_0(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 4451);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 60;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (60 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 4408U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (61U + 3U);
    t12 = (64U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 2744);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 64U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 2664);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(64U, t11, 0);
    goto LAB6;

}


extern void work_a_0173428045_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0173428045_3212880686_p_0};
	xsi_register_didat("work_a_0173428045_3212880686", "isim/tb_acc_isim_beh.exe.sim/work/a_0173428045_3212880686.didat");
	xsi_register_executes(pe);
}
