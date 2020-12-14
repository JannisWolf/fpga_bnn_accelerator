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
static const char *ng0 = "/home/jannis/fpga_bnn_accelerator/src/fpga_logic/TASTE-VHDL-XISE/xnor_popcount.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329948342641973_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0969361127_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7408U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 7424U);
    t6 = ieee_p_2592010699_sub_16447329948342641973_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (10U != t9);
    if (t10 == 1)
        goto LAB2;

LAB3:    t11 = (t0 + 4448);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 10U);
    xsi_driver_first_trans_fast(t11);
    t2 = (t0 + 4352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(10U, t9, 0);
    goto LAB3;

}

static void work_a_0969361127_3212880686_p_1(char *t0)
{
    char t10[16];
    char t21[16];
    char t23[16];
    char t32[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned char t33;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 7635);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t3, 4U);
    xsi_set_current_line(70, ng0);
    t7 = (10 - 1);
    t1 = (t0 + 7639);
    *((int *)t1) = 0;
    t3 = (t0 + 7643);
    *((int *)t3) = t7;
    t8 = 0;
    t9 = t7;

LAB5:    if (t8 <= t9)
        goto LAB6;

LAB8:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 7650);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t16 = (3 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t4 = (t5 + t18);
    t11 = ((IEEE_P_1242562249) + 3080);
    t12 = (t21 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 2;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t7 = (2 - 0);
    t27 = (t7 * 1);
    t27 = (t27 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t27;
    t13 = (t23 + 0U);
    t19 = (t13 + 0U);
    *((int *)t19) = 3;
    t19 = (t13 + 4U);
    *((int *)t19) = 0;
    t19 = (t13 + 8U);
    *((int *)t19) = -1;
    t8 = (0 - 3);
    t27 = (t8 * -1);
    t27 = (t27 + 1);
    t19 = (t13 + 12U);
    *((unsigned int *)t19) = t27;
    t6 = xsi_base_array_concat(t6, t10, t11, (char)97, t1, t21, (char)97, t4, t23, (char)101);
    t20 = ((IEEE_P_1242562249) + 3080);
    t19 = xsi_base_array_concat(t19, t32, t20, (char)97, t6, t10, (char)99, (unsigned char)2, (char)101);
    t22 = (t0 + 2688U);
    t24 = *((char **)t22);
    t22 = (t24 + 0);
    t27 = (3U + 4U);
    t31 = (t27 + 1U);
    memcpy(t22, t19, t31);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t1 = (t0 + 4512);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2568U);
    t3 = *((char **)t1);
    t1 = (t0 + 4576);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t11 = *((char **)t6);
    memcpy(t11, t3, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t1 = (t0 + 7520U);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t0 + 7536U);
    t6 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t10, t3, t1, t5, t4);
    t11 = (t10 + 12U);
    t16 = *((unsigned int *)t11);
    t17 = (1U * t16);
    t2 = (8U != t17);
    if (t2 == 1)
        goto LAB10;

LAB11:    t12 = (t0 + 4640);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t7 = (7 - 7);
    t16 = (t7 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t2 = *((unsigned char *)t1);
    t33 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t2);
    t4 = (t0 + 4704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t33;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB6:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2568U);
    t5 = *((char **)t4);
    t4 = (t0 + 7504U);
    t6 = (t0 + 7647);
    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t12 = (t0 + 7639);
    t14 = *((int *)t12);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t12));
    t17 = (1U * t16);
    t18 = (0 + t17);
    t19 = (t13 + t18);
    t2 = *((unsigned char *)t19);
    t22 = ((IEEE_P_1242562249) + 3080);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t20 = xsi_base_array_concat(t20, t21, t22, (char)97, t6, t23, (char)99, t2, (char)101);
    t25 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t10, t5, t4, t20, t21);
    t28 = (t0 + 2568U);
    t29 = *((char **)t28);
    t28 = (t29 + 0);
    t30 = (t10 + 12U);
    t27 = *((unsigned int *)t30);
    t31 = (1U * t27);
    memcpy(t28, t25, t31);

LAB7:    t1 = (t0 + 7639);
    t8 = *((int *)t1);
    t3 = (t0 + 7643);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB8;

LAB9:    t7 = (t8 + 1);
    t8 = t7;
    t4 = (t0 + 7639);
    *((int *)t4) = t8;
    goto LAB5;

LAB10:    xsi_size_not_matching(8U, t17, 0);
    goto LAB11;

}


extern void work_a_0969361127_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0969361127_3212880686_p_0,(void *)work_a_0969361127_3212880686_p_1};
	xsi_register_didat("work_a_0969361127_3212880686", "isim/tb_fully_connected_isim_beh.exe.sim/work/a_0969361127_3212880686.didat");
	xsi_register_executes(pe);
}
