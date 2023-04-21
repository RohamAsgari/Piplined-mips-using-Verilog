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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001449263775_2284786852_init();
    work_m_00000000003753979442_1096192584_init();
    work_m_00000000003936846236_1615871889_init();
    work_m_00000000002386620356_4033376979_init();
    work_m_00000000003588425308_3117941762_init();
    work_m_00000000001050637164_1621107508_init();
    work_m_00000000001809008219_2058220583_init();
    work_m_00000000003266019347_1947578403_init();
    work_m_00000000002211021786_1900080952_init();
    work_m_00000000002211021786_4171726649_init();
    work_m_00000000003230885823_1473668398_init();
    work_m_00000000001449263775_1427750154_init();
    work_m_00000000000545926924_0354481618_init();
    work_m_00000000002994179154_0886308060_init();
    work_m_00000000001967975701_4016207469_init();
    work_m_00000000002387511078_2683978841_init();
    work_m_00000000003965857644_4263359993_init();
    work_m_00000000001096221491_0123687403_init();
    work_m_00000000003493937821_3515808994_init();
    work_m_00000000001891001969_1949555310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001891001969_1949555310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
