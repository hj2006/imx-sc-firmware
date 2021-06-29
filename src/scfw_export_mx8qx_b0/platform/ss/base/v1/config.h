/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
**     Copyright 2017-2020 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/*!
 * @file
 *
 * Header file containing the entry points and debug resource strings
 * for the BASE subsystem.
 *
 * @addtogroup BASE_SS
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/config_ss_h.pl */

#ifndef SC_SS_BASE_CONFIG_H
#define SC_SS_BASE_CONFIG_H

/*!
 * This define defines the number of resources.
 */
#define SS_NUM_RSRC_BASE 0

/*! Define used to create subsystem function prototypes */
#define SS_FUNC_PROTO_BASE \
    void ss_init_base(sc_sub_t ss, sc_bool_t api_phase); \
    void ss_trans_power_mode_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t \
        to_mode); \
    sc_err_t ss_rsrc_reset_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_rm_pt_t pt, sc_bool_t pre); \
    sc_err_t ss_set_cpu_power_mode_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_power_mode_t mode, sc_pm_wake_src_t \
        wake_src); \
    sc_err_t ss_set_cpu_resume_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t isPrimary, sc_faddr_t addr); \
    sc_err_t ss_req_sys_if_power_mode_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_sys_if_t sys_if, sc_pm_power_mode_t hpm, \
        sc_pm_power_mode_t lpm); \
    sc_err_t ss_set_clock_rate_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate); \
    sc_err_t ss_get_clock_rate_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate); \
    sc_err_t ss_clock_enable_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable, sc_bool_t autog); \
    sc_err_t ss_force_clock_enable_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable); \
    sc_err_t ss_set_clock_parent_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t \
        new_parent); \
    sc_err_t ss_get_clock_parent_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t *parent); \
    sc_bool_t ss_is_rsrc_accessible_base(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx); \
    void ss_mu_irq_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t rsrc_idx, \
        uint32_t mask); \
    sc_err_t ss_cpu_start_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t enable, sc_faddr_t addr); \
    void ss_rdc_enable_base(sc_sub_t ss, sc_bool_t master); \
    void ss_rdc_set_master_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, sc_rm_spa_t sa, \
        sc_rm_spa_t pa, sc_rm_did_t did, sc_rm_sid_t sid, uint8_t cid); \
    void ss_rdc_set_peripheral_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, const sc_rm_perm_t \
        *perms, sc_bool_t no_update); \
    sc_err_t ss_rdc_set_memory_base(sc_sub_t ss, sc_faddr_t start, \
        sc_faddr_t end, sc_bool_t valid, const sc_rm_perm_t *perms, \
        sc_rm_det_t det, sc_rm_rmsg_t rmsg, sc_faddr_t new_start, \
        sc_faddr_t new_end); \
    sc_err_t ss_set_control_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, uint32_t ctrl, uint32_t val); \
    sc_err_t ss_get_control_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, uint32_t ctrl, uint32_t *val); \
    sc_err_t ss_irq_enable_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_irq_group_t group, uint32_t mask, sc_bool_t enable); \
    sc_err_t ss_irq_status_base(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_irq_group_t group, uint32_t *status); \
    void ss_irq_trigger_base(sc_sub_t ss, sc_irq_group_t group, uint32_t \
        irq, sc_rm_pt_t pt); \
    void ss_dump_base(sc_sub_t ss, sc_bool_t xrdc, sc_bool_t dsc, sc_bool_t \
        clk); \
    void ss_do_mem_repair_base(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t \
        enable); \
    void ss_updown_base(sc_sub_t ss, sc_bool_t up); \
    void ss_prepost_power_mode_base(sc_sub_t ss, dsc_pdom_t pd, \
        ss_prepost_t type, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t \
        to_mode, sc_bool_t rom_boot); \
    void ss_iso_disable_base(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t enable); \
    void ss_link_enable_base(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t enable); \
    void ss_ssi_power_base(sc_sub_t ss, sc_bool_t enable); \
    void ss_ssi_bhole_mode_base(sc_sub_t ss, sc_sub_t remote, uint8_t port, \
        sc_bool_t enable); \
    void ss_ssi_pause_mode_base(sc_sub_t ss, sc_sub_t remote, uint8_t port, \
        sc_bool_t enable); \
    void ss_ssi_wait_idle_base(sc_sub_t ss, sc_sub_t remote, uint8_t port); \
    void ss_adb_enable_base(sc_sub_t ss, sc_sub_t remote, sc_bool_t \
        enable); \
    void ss_adb_wait_base(sc_sub_t ss, sc_sub_t remote, sc_bool_t enable); \
    void ss_prepost_clock_mode_base(sc_sub_t ss, ss_clock_t clk, \
        ss_prepost_t type, sc_pm_clk_mode_t from_mode, sc_pm_clk_mode_t \
        to_mode); \
    sc_bool_t ss_rdc_is_did_vld_base(sc_sub_t ss, const sc_rm_perm_t \
        *perms); \


/*!
 * This define is used to override the default SS function entry points.
 * If this isn't defined, then the SS uses functions in base.
 */
#define SS_EP_INIT_BASE \
    { \
        ss_init_base, \
        ss_trans_power_mode_base, \
        ss_rsrc_reset_base, \
        ss_set_cpu_power_mode_base, \
        ss_set_cpu_resume_base, \
        ss_req_sys_if_power_mode_base, \
        ss_set_clock_rate_base, \
        ss_get_clock_rate_base, \
        ss_clock_enable_base, \
        ss_force_clock_enable_base, \
        ss_set_clock_parent_base, \
        ss_get_clock_parent_base, \
        ss_is_rsrc_accessible_base, \
        ss_mu_irq_base, \
        ss_cpu_start_base, \
        ss_rdc_enable_base, \
        ss_rdc_set_master_base, \
        ss_rdc_set_peripheral_base, \
        ss_rdc_set_memory_base, \
        ss_set_control_base, \
        ss_get_control_base, \
        ss_irq_enable_base, \
        ss_irq_status_base, \
        ss_irq_trigger_base, \
        ss_dump_base, \
        ss_do_mem_repair_base, \
        ss_updown_base, \
        ss_prepost_power_mode_base, \
        ss_iso_disable_base, \
        ss_link_enable_base, \
        ss_ssi_power_base, \
        ss_ssi_bhole_mode_base, \
        ss_ssi_pause_mode_base, \
        ss_ssi_wait_idle_base, \
        ss_adb_enable_base, \
        ss_adb_wait_base, \
        ss_prepost_clock_mode_base, \
        ss_rdc_is_did_vld_base, \
    }

#ifdef DEBUG

#endif

#endif /* SC_SS_BASE_CONFIG_H */

/** @} */

