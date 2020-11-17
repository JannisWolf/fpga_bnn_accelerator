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
static const char *ng0 = "/home/taste/iris_fc/src/fpga_logic/TASTE-VHDL-XISE/fifo_regs.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3573576699_1516540902_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    char *t17;
    unsigned char t18;
    unsigned int t19;
    unsigned int t20;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4384);
    t2 = (t0 + 3928U);
    t3 = (t0 + 11160);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 12;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (12 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_write7(STD_TEXTIO, t1, t2, t3, t5, (unsigned char)0, 0);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4384);
    t2 = ((STD_TEXTIO) + 1480U);
    t3 = (t0 + 3928U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t3);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1152U);
    t10 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t10 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB11;

LAB12:    t10 = (unsigned char)0;

LAB13:    if (t10 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB16;

LAB17:    t10 = (unsigned char)0;

LAB18:    if (t10 != 0)
        goto LAB14;

LAB15:
LAB9:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB22;

LAB23:    t10 = (unsigned char)0;

LAB24:    if (t10 != 0)
        goto LAB19;

LAB21:
LAB20:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB31;

LAB32:    t10 = (unsigned char)0;

LAB33:    if (t10 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB37;

LAB39:
LAB38:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 6560);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    *((int *)t13) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 6688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t16 = (t8 + 1);
    t1 = (t0 + 6560);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t17 = *((char **)t13);
    *((int *)t17) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB13;

LAB14:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t16 = (t8 - 1);
    t1 = (t0 + 6560);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t17 = *((char **)t13);
    *((int *)t17) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB16:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)3);
    t10 = t15;
    goto LAB18;

LAB19:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t16 = (4 - 1);
    t18 = (t8 == t16);
    if (t18 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t16 = (t8 + 1);
    t1 = (t0 + 6624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t16;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB20;

LAB22:    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB24;

LAB25:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6624);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t17 = *((char **)t13);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t16 = (4 - 1);
    t18 = (t8 == t16);
    if (t18 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t16 = (t8 + 1);
    t1 = (t0 + 6688);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t16;
    xsi_driver_first_trans_fast(t1);

LAB35:    goto LAB29;

LAB31:    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    t10 = t15;
    goto LAB33;

LAB34:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6688);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t17 = *((char **)t13);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t16 = (t8 - 0);
    t9 = (t16 * 1);
    t19 = (3U * t9);
    t20 = (0U + t19);
    t1 = (t0 + 6752);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t13 = (t7 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 3U);
    xsi_driver_first_trans_delta(t1, t20, 3U, 0LL);
    goto LAB38;

}

static void work_a_3573576699_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(121, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 3, 1, t4);
    t7 = (3U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 6816);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 6400);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3573576699_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 4);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 6880);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6416);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3573576699_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 6944);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 6432);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6944);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3573576699_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7008);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6448);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3573576699_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(127, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7072);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6464);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3573576699_1516540902_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;

LAB0:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    xsi_set_current_line(136, ng0);
    t4 = (t0 + 11172);
    xsi_report(t4, 70U, (unsigned char)3);
    goto LAB6;

LAB8:    t4 = (t0 + 2952U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB10;

LAB11:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 11242);
    xsi_report(t1, 68U, (unsigned char)3);
    goto LAB12;

LAB14:    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t7 = *((unsigned char *)t5);
    t9 = (t7 == (unsigned char)3);
    t2 = t9;
    goto LAB16;

}


extern void work_a_3573576699_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3573576699_1516540902_p_0,(void *)work_a_3573576699_1516540902_p_1,(void *)work_a_3573576699_1516540902_p_2,(void *)work_a_3573576699_1516540902_p_3,(void *)work_a_3573576699_1516540902_p_4,(void *)work_a_3573576699_1516540902_p_5,(void *)work_a_3573576699_1516540902_p_6};
	xsi_register_didat("work_a_3573576699_1516540902", "isim/module_fifo_regs_no_flags_tb_isim_beh.exe.sim/work/a_3573576699_1516540902.didat");
	xsi_register_executes(pe);
}
