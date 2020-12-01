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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16447329948342641973_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1079952590_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 7264U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 7280U);
    t6 = ieee_p_2592010699_sub_16447329948342641973_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (10U != t9);
    if (t10 == 1)
        goto LAB2;

LAB3:    t11 = (t0 + 4328);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 10U);
    xsi_driver_first_trans_fast(t11);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(10U, t9, 0);
    goto LAB3;

}

static void work_a_1079952590_3212880686_p_1(char *t0)
{
    char t7[16];
    char t20[16];
    char t22[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned char t32;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 7487);
    t3 = (t0 + 2448U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7491);
    *((int *)t1) = 0;
    t2 = (t0 + 7495);
    *((int *)t2) = 9;
    t5 = 0;
    t6 = 9;

LAB2:    if (t5 <= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 7502);
    t3 = (t0 + 2448U);
    t4 = *((char **)t3);
    t14 = (3 - 3);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t3 = (t4 + t16);
    t9 = ((IEEE_P_1242562249) + 3080);
    t10 = (t20 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t5 = (2 - 0);
    t26 = (t5 * 1);
    t26 = (t26 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t26;
    t11 = (t22 + 0U);
    t17 = (t11 + 0U);
    *((int *)t17) = 3;
    t17 = (t11 + 4U);
    *((int *)t17) = 0;
    t17 = (t11 + 8U);
    *((int *)t17) = -1;
    t6 = (0 - 3);
    t26 = (t6 * -1);
    t26 = (t26 + 1);
    t17 = (t11 + 12U);
    *((unsigned int *)t17) = t26;
    t8 = xsi_base_array_concat(t8, t7, t9, (char)97, t1, t20, (char)97, t3, t22, (char)101);
    t19 = ((IEEE_P_1242562249) + 3080);
    t17 = xsi_base_array_concat(t17, t31, t19, (char)97, t8, t7, (char)99, (unsigned char)2, (char)101);
    t21 = (t0 + 2568U);
    t23 = *((char **)t21);
    t21 = (t23 + 0);
    t26 = (3U + 4U);
    t30 = (t26 + 1U);
    memcpy(t21, t17, t30);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 4392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 4456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2568U);
    t2 = *((char **)t1);
    t1 = (t0 + 7376U);
    t3 = (t0 + 2688U);
    t4 = *((char **)t3);
    t3 = (t0 + 7392U);
    t8 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t7, t2, t1, t4, t3);
    t9 = (t7 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t18 = (8U != t15);
    if (t18 == 1)
        goto LAB7;

LAB8:    t10 = (t0 + 4520);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t8, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t5 = (7 - 7);
    t14 = (t5 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t18 = *((unsigned char *)t1);
    t32 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t18);
    t3 = (t0 + 4584);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t32;
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 4248);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2448U);
    t4 = *((char **)t3);
    t3 = (t0 + 7360U);
    t8 = (t0 + 7499);
    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t10 = (t0 + 7491);
    t12 = *((int *)t10);
    t13 = (t12 - 9);
    t14 = (t13 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t10));
    t15 = (1U * t14);
    t16 = (0 + t15);
    t17 = (t11 + t16);
    t18 = *((unsigned char *)t17);
    t21 = ((IEEE_P_1242562249) + 3080);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 2;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (2 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t8, t22, (char)99, t18, (char)101);
    t24 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t7, t4, t3, t19, t20);
    t27 = (t0 + 2448U);
    t28 = *((char **)t27);
    t27 = (t28 + 0);
    t29 = (t7 + 12U);
    t26 = *((unsigned int *)t29);
    t30 = (1U * t26);
    memcpy(t27, t24, t30);

LAB4:    t1 = (t0 + 7491);
    t5 = *((int *)t1);
    t2 = (t0 + 7495);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB6:    t12 = (t5 + 1);
    t5 = t12;
    t3 = (t0 + 7491);
    *((int *)t3) = t5;
    goto LAB2;

LAB7:    xsi_size_not_matching(8U, t15, 0);
    goto LAB8;

}


extern void work_a_1079952590_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1079952590_3212880686_p_0,(void *)work_a_1079952590_3212880686_p_1};
	xsi_register_didat("work_a_1079952590_3212880686", "isim/tb_fully_connected_isim_beh.exe.sim/work/a_1079952590_3212880686.didat");
	xsi_register_executes(pe);
}
