/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
**     Copyright 2017-2022 NXP
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
 * Subsystem side functions for interfacing with the subsystems.
 *
 * @addtogroup INF_SS
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/inf_ss_h.pl */

#ifndef SC_SS_INF_SS_H
#define SC_SS_INF_SS_H

/* Includes */

/* Defines */

/*! Define used to create subsystem function prototypes */
#define SS_FUNC_PROTO(X) \
    void ss_init_##X(sc_sub_t ss, sc_bool_t api_phase); \
    void ss_trans_power_mode_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t \
        to_mode); \
    sc_err_t ss_rsrc_reset_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_rm_pt_t pt, sc_bool_t pre); \
    sc_err_t ss_set_cpu_power_mode_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_power_mode_t mode, sc_pm_wake_src_t \
        wake_src); \
    sc_err_t ss_set_cpu_resume_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t isPrimary, sc_faddr_t addr); \
    sc_err_t ss_req_sys_if_power_mode_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_sys_if_t sys_if, sc_pm_power_mode_t hpm, \
        sc_pm_power_mode_t lpm); \
    sc_err_t ss_set_clock_rate_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate); \
    sc_err_t ss_get_clock_rate_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate); \
    sc_err_t ss_clock_enable_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable, sc_bool_t autog); \
    sc_err_t ss_force_clock_enable_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable); \
    sc_err_t ss_set_clock_parent_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t \
        new_parent); \
    sc_err_t ss_get_clock_parent_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t *parent); \
    sc_bool_t ss_is_rsrc_accessible_##X(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx); \
    void ss_mu_irq_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t rsrc_idx, \
        uint32_t mask); \
    sc_err_t ss_cpu_start_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t enable, sc_faddr_t addr); \
    void ss_rdc_enable_##X(sc_sub_t ss, sc_bool_t master); \
    void ss_rdc_set_master_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, sc_rm_spa_t sa, \
        sc_rm_spa_t pa, sc_rm_did_t did, sc_rm_sid_t sid, uint8_t cid); \
    void ss_rdc_set_peripheral_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_bool_t valid, sc_bool_t lock, const sc_rm_perm_t \
        *perms, sc_bool_t no_update); \
    sc_err_t ss_rdc_set_memory_##X(sc_sub_t ss, sc_faddr_t start, \
        sc_faddr_t end, sc_bool_t valid, const sc_rm_perm_t *perms, \
        sc_rm_det_t det, sc_rm_rmsg_t rmsg, sc_faddr_t new_start, \
        sc_faddr_t new_end); \
    sc_err_t ss_set_control_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, uint32_t ctrl, uint32_t val); \
    sc_err_t ss_get_control_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, uint32_t ctrl, uint32_t *val); \
    sc_err_t ss_irq_enable_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_irq_group_t group, uint32_t mask, sc_bool_t enable); \
    sc_err_t ss_irq_status_##X(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t \
        rsrc_idx, sc_irq_group_t group, uint32_t *status); \
    void ss_irq_trigger_##X(sc_sub_t ss, sc_irq_group_t group, uint32_t \
        irq, sc_rm_pt_t pt); \
    void ss_dump_##X(sc_sub_t ss, sc_bool_t xrdc, sc_bool_t dsc, sc_bool_t \
        clk); \
    void ss_do_mem_repair_##X(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t \
        enable); \
    void ss_updown_##X(sc_sub_t ss, sc_bool_t up); \
    void ss_prepost_power_mode_##X(sc_sub_t ss, dsc_pdom_t pd, ss_prepost_t \
        type, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t to_mode, \
        sc_bool_t rom_boot); \
    void ss_iso_disable_##X(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t enable); \
    void ss_link_enable_##X(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t enable); \
    void ss_ssi_power_##X(sc_sub_t ss, sc_bool_t enable); \
    void ss_ssi_bhole_mode_##X(sc_sub_t ss, sc_sub_t remote, uint8_t port, \
        sc_bool_t enable); \
    void ss_ssi_pause_mode_##X(sc_sub_t ss, sc_sub_t remote, uint8_t port, \
        sc_bool_t enable); \
    void ss_ssi_wait_idle_##X(sc_sub_t ss, sc_sub_t remote, uint8_t port); \
    void ss_adb_enable_##X(sc_sub_t ss, sc_sub_t remote, sc_bool_t enable); \
    void ss_adb_wait_##X(sc_sub_t ss, sc_sub_t remote, sc_bool_t enable); \
    void ss_prepost_clock_mode_##X(sc_sub_t ss, ss_clock_t clk, \
        ss_prepost_t type, sc_pm_clk_mode_t from_mode, sc_pm_clk_mode_t \
        to_mode); \
    sc_bool_t ss_rdc_is_did_vld_##X(sc_sub_t ss, const sc_rm_perm_t \
        *perms); \


/*! Define used to make subsystem info external */
#define SS_BASE_INFO_PROTO(X) extern const ss_base_info_t ss_base_info_##X;

/* Types */

/*!
 * @name Type defines for SS entry point pointers
 */
/** @{ */
typedef void ss_init_t(sc_sub_t ss, sc_bool_t api_phase);
typedef void ss_trans_power_mode_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t to_mode);
typedef sc_err_t ss_rsrc_reset_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_rm_pt_t pt, sc_bool_t pre);
typedef sc_err_t ss_set_cpu_power_mode_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_power_mode_t mode, sc_pm_wake_src_t
    wake_src);
typedef sc_err_t ss_set_cpu_resume_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_bool_t isPrimary, sc_faddr_t addr);
typedef sc_err_t ss_req_sys_if_power_mode_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_sys_if_t sys_if, sc_pm_power_mode_t hpm,
    sc_pm_power_mode_t lpm);
typedef sc_err_t ss_set_clock_rate_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate);
typedef sc_err_t ss_get_clock_rate_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clock_rate_t *rate);
typedef sc_err_t ss_clock_enable_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable, sc_bool_t autog);
typedef sc_err_t ss_force_clock_enable_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_bool_t enable);
typedef sc_err_t ss_set_clock_parent_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t new_parent);
typedef sc_err_t ss_get_clock_parent_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_pm_clk_t clk, sc_pm_clk_parent_t *parent);
typedef sc_bool_t ss_is_rsrc_accessible_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx);
typedef void ss_mu_irq_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t rsrc_idx,
    uint32_t mask);
typedef sc_err_t ss_cpu_start_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_bool_t enable, sc_faddr_t addr);
typedef void ss_rdc_enable_t(sc_sub_t ss, sc_bool_t master);
typedef void ss_rdc_set_master_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_bool_t valid, sc_bool_t lock, sc_rm_spa_t sa, sc_rm_spa_t
    pa, sc_rm_did_t did, sc_rm_sid_t sid, uint8_t cid);
typedef void ss_rdc_set_peripheral_t(sc_sub_t ss, ss_idx_t ss_idx,
    ss_ridx_t rsrc_idx, sc_bool_t valid, sc_bool_t lock, const sc_rm_perm_t
    *perms, sc_bool_t no_update);
typedef sc_err_t ss_rdc_set_memory_t(sc_sub_t ss, sc_faddr_t start,
    sc_faddr_t end, sc_bool_t valid, const sc_rm_perm_t *perms, sc_rm_det_t
    det, sc_rm_rmsg_t rmsg, sc_faddr_t new_start, sc_faddr_t new_end);
typedef sc_err_t ss_set_control_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, uint32_t ctrl, uint32_t val);
typedef sc_err_t ss_get_control_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, uint32_t ctrl, uint32_t *val);
typedef sc_err_t ss_irq_enable_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_irq_group_t group, uint32_t mask, sc_bool_t enable);
typedef sc_err_t ss_irq_status_t(sc_sub_t ss, ss_idx_t ss_idx, ss_ridx_t
    rsrc_idx, sc_irq_group_t group, uint32_t *status);
typedef void ss_irq_trigger_t(sc_sub_t ss, sc_irq_group_t group, uint32_t
    irq, sc_rm_pt_t pt);
typedef void ss_dump_t(sc_sub_t ss, sc_bool_t xrdc, sc_bool_t dsc,
    sc_bool_t clk);
typedef void ss_do_mem_repair_t(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t
    enable);
typedef void ss_updown_t(sc_sub_t ss, sc_bool_t up);
typedef void ss_prepost_power_mode_t(sc_sub_t ss, dsc_pdom_t pd,
    ss_prepost_t type, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t
    to_mode, sc_bool_t rom_boot);
typedef void ss_iso_disable_t(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t
    enable);
typedef void ss_link_enable_t(sc_sub_t ss, dsc_pdom_t pd, sc_bool_t
    enable);
typedef void ss_ssi_power_t(sc_sub_t ss, sc_bool_t enable);
typedef void ss_ssi_bhole_mode_t(sc_sub_t ss, sc_sub_t remote, uint8_t
    port, sc_bool_t enable);
typedef void ss_ssi_pause_mode_t(sc_sub_t ss, sc_sub_t remote, uint8_t
    port, sc_bool_t enable);
typedef void ss_ssi_wait_idle_t(sc_sub_t ss, sc_sub_t remote, uint8_t
    port);
typedef void ss_adb_enable_t(sc_sub_t ss, sc_sub_t remote, sc_bool_t
    enable);
typedef void ss_adb_wait_t(sc_sub_t ss, sc_sub_t remote, sc_bool_t enable);
typedef void ss_prepost_clock_mode_t(sc_sub_t ss, ss_clock_t clk,
    ss_prepost_t type, sc_pm_clk_mode_t from_mode, sc_pm_clk_mode_t
    to_mode);
typedef sc_bool_t ss_rdc_is_did_vld_t(sc_sub_t ss, const sc_rm_perm_t
    *perms);
/** @} */

/*!
 * This type is used to store static constant function pointers for a
 * subsystem. An array for all subsystems is declared in inf.c called
 * sc_ss_ep. From this array direct calls can be made to subsystems.
 */
typedef struct
{
    ss_init_t * const ep_ss_init;
    ss_trans_power_mode_t * const ep_ss_trans_power_mode;
    ss_rsrc_reset_t * const ep_ss_rsrc_reset;
    ss_set_cpu_power_mode_t * const ep_ss_set_cpu_power_mode;
    ss_set_cpu_resume_t * const ep_ss_set_cpu_resume;
    ss_req_sys_if_power_mode_t * const ep_ss_req_sys_if_power_mode;
    ss_set_clock_rate_t * const ep_ss_set_clock_rate;
    ss_get_clock_rate_t * const ep_ss_get_clock_rate;
    ss_clock_enable_t * const ep_ss_clock_enable;
    ss_force_clock_enable_t * const ep_ss_force_clock_enable;
    ss_set_clock_parent_t * const ep_ss_set_clock_parent;
    ss_get_clock_parent_t * const ep_ss_get_clock_parent;
    ss_is_rsrc_accessible_t * const ep_ss_is_rsrc_accessible;
    ss_mu_irq_t * const ep_ss_mu_irq;
    ss_cpu_start_t * const ep_ss_cpu_start;
    ss_rdc_enable_t * const ep_ss_rdc_enable;
    ss_rdc_set_master_t * const ep_ss_rdc_set_master;
    ss_rdc_set_peripheral_t * const ep_ss_rdc_set_peripheral;
    ss_rdc_set_memory_t * const ep_ss_rdc_set_memory;
    ss_set_control_t * const ep_ss_set_control;
    ss_get_control_t * const ep_ss_get_control;
    ss_irq_enable_t * const ep_ss_irq_enable;
    ss_irq_status_t * const ep_ss_irq_status;
    ss_irq_trigger_t * const ep_ss_irq_trigger;
    ss_dump_t * const ep_ss_dump;
    ss_do_mem_repair_t * const ep_ss_do_mem_repair;
    ss_updown_t * const ep_ss_updown;
    ss_prepost_power_mode_t * const ep_ss_prepost_power_mode;
    ss_iso_disable_t * const ep_ss_iso_disable;
    ss_link_enable_t * const ep_ss_link_enable;
    ss_ssi_power_t * const ep_ss_ssi_power;
    ss_ssi_bhole_mode_t * const ep_ss_ssi_bhole_mode;
    ss_ssi_pause_mode_t * const ep_ss_ssi_pause_mode;
    ss_ssi_wait_idle_t * const ep_ss_ssi_wait_idle;
    ss_adb_enable_t * const ep_ss_adb_enable;
    ss_adb_wait_t * const ep_ss_adb_wait;
    ss_prepost_clock_mode_t * const ep_ss_prepost_clock_mode;
    ss_rdc_is_did_vld_t * const ep_ss_rdc_is_did_vld;
} sc_ss_ep_t;

#endif /* SC_SS_INF_SS_H */

/** @} */

