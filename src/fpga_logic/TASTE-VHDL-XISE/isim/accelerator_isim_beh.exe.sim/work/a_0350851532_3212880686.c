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
static const char *ng0 = "/home/jannis/Code/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/upsample.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0350851532_3212880686_p_0(char *t0)
{
    char t6[16];
    char t8[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 4417);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 62;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (62 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t3 = xsi_base_array_concat(t3, t6, t7, (char)97, t1, t8, (char)99, t5, (char)101);
    t12 = (63U + 1U);
    t13 = (64U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 2744);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 64U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t18 = (t0 + 2664);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(64U, t12, 0);
    goto LAB6;

}


extern void work_a_0350851532_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0350851532_3212880686_p_0};
	xsi_register_didat("work_a_0350851532_3212880686", "isim/accelerator_isim_beh.exe.sim/work/a_0350851532_3212880686.didat");
	xsi_register_executes(pe);
}
