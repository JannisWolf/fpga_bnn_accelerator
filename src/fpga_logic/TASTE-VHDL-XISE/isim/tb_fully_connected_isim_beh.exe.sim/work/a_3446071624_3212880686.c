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
static const char *ng0 = "/home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/accumulator.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_7348455036272725216_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3446071624_3212880686_p_0(char *t0)
{
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 3264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 1352U);
    t6 = *((char **)t3);
    t3 = (t0 + 5424U);
    t7 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t6, t3);
    t8 = (t7 - 9);
    t9 = (t8 * -1);
    t10 = (1 * t9);
    t11 = (0U + t10);
    t12 = (t0 + 3344);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t5;
    xsi_driver_first_trans_delta(t12, t11, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 5424U);
    t7 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t3);
    t8 = (10 - 1);
    t5 = (t7 == t8);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(60, ng0);
    t6 = (t0 + 1672U);
    t12 = *((char **)t6);
    t6 = (t0 + 5456U);
    t13 = ieee_p_1242562249_sub_7348455036272725216_1035706684(IEEE_P_1242562249, t17, t12, t6, 2);
    t14 = (t0 + 3408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 10U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB9;

}


extern void work_a_3446071624_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3446071624_3212880686_p_0};
	xsi_register_didat("work_a_3446071624_3212880686", "isim/tb_fully_connected_isim_beh.exe.sim/work/a_3446071624_3212880686.didat");
	xsi_register_executes(pe);
}
