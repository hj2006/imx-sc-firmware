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
 * Header file with prototypes so main can call test functions.
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by test_h.pl */

#ifndef SC_TEST_H
#define SC_TEST_H

/* Includes */

#include "main/types.h"

/* Defines */

#ifdef DEBUG
#ifdef HAS_TEST_PTIM
    #define CHECK_NERR(X)   {SC_PTIM_SETREF(testProf, __FILE__, __LINE__);  \
                            err = (X);                                      \
                            if (err != SC_ERR_NONE)                         \
                            {                                               \
                                error_print("error @ line %d: %d\n",        \
                                    __LINE__, err);                         \
                                board_exit(err);                            \
                            }}
#else
    #define CHECK_NERR(X)   {err = (X);                                     \
                            if (err != SC_ERR_NONE)                         \
                            {                                               \
                                error_print("error @ line %d: %d\n",        \
                                    __LINE__, err);                         \
                                board_exit(err);                            \
                            }}
#endif // HAS_TEST_PTIM
    #ifdef CONFIRM_ERR
#ifdef HAS_TEST_PTIM
        #define CHECK_ERR(X)    {SC_PTIM_SETREF(testProf, __FILE__, __LINE__);  \
                                err = (X);                                      \
                                if ((err = (X)) == SC_ERR_NONE)                 \
                                {                                               \
                                    error_print("non error @ line %d: %d\n",    \
                                       __LINE__, err);                          \
                                    board_exit(err);                            \
                                }}
#else
        #define CHECK_ERR(X)    {err = (X);                                     \
                                if (err == SC_ERR_NONE)                         \
                                {                                               \
                                    error_print("non error @ line %d: %d\n",    \
                                       __LINE__, err);                          \
                                    board_exit(err);                            \
                                }}
#endif
        #else
        #define CHECK_ERR(X)    NOP
    #endif

#else
    #define CHECK_NERR(X)   X
    #define CHECK_ERR(X)    X
#endif

#define ASRT_TST_ERR(X,ERROR)                       \
    if (!(X))                                       \
    {                                               \
        error_print("error @ line %d: %d\n",        \
           __LINE__, ERROR);                        \
        board_exit(ERROR);                          \
    }

#if TEST_LSIO
    #define CHECK_LSIO(X)       NOP
#else    
    #define CHECK_LSIO(X)       return (X)
#endif

#if HAS_SS_MCU_0
    #define CHECK_MCU_0(X)      NOP
#else    
    #define CHECK_MCU_0(X)      return (X)
#endif

#if HAS_SS_MCU_1
    #define CHECK_MCU_1(X)      NOP
#else    
    #define CHECK_MCU_1(X)      return (X)
#endif

#define TEST_DRV_START(X) \
    test_print(TL1, "\n*** %s DRV Test\n\n", X);  

#define TEST_DRV_END \
    test_print(TL1, "\n")

#define TEST_SC_START(X) \
    test_print(TL1, "\n*** %s SC Test\n\n", X); \
    sc_pm_power_mode_t dblogic_mode; \
    (void) pm_get_resource_power_mode(SC_PT, SC_R_DBLOGIC, &dblogic_mode); \
    pm_force_resource_power_mode_v(SC_R_DBLOGIC, SC_PM_PW_MODE_ON); \
    sc_pm_power_mode_t db_mode[SC_NUM_DB]; \
    for (uint8_t db = 0U; db < SC_NUM_DB; db++) \
    { \
        (void) pm_get_resource_power_mode(SC_PT, sc_db_info[db].rsrc, &db_mode[db]); \
        pm_force_resource_power_mode_v(sc_db_info[db].rsrc, SC_PM_PW_MODE_ON); \
    }

#define TEST_SC_END \
    for (uint8_t db = SC_NUM_DB; db > 0U; db--) \
    { \
        if (db_mode[db - 1U] == SC_PM_PW_MODE_OFF) \
        { \
            pm_force_resource_power_mode_v(sc_db_info[db - 1U].rsrc, SC_PM_PW_MODE_OFF); \
        } \
    } \
    if (dblogic_mode == SC_PM_PW_MODE_OFF) \
        pm_force_resource_power_mode_v(SC_R_DBLOGIC, SC_PM_PW_MODE_OFF); \
    test_print(TL1, "\n")

#define TEST_AP_START(X) \
    sc_ipc_t ipc_sc; \
    test_print(TL1, "\n*** %s AP Test\n\n", X); \
    sc_ipc_open(&ipc_sc, (sc_ipc_id_t) MU_SC_1A); \
    (void) sc_rm_set_peripheral_permissions(ipc_sc, SC_R_MU_0A, SC_PT, SC_RM_PERM_FULL)

#define TEST_AP_END \
    sc_ipc_close(ipc_sc); \
    test_print(TL1, "\n")

#define TEST_DRV(X)     sc_err_t test_drv_ ## X(sc_bool_t *const stop)
#define TEST_SC(X)      sc_err_t test_sc_ ## X(sc_bool_t *const stop)
#define TEST_AP(X)      sc_err_t test_ap_ ## X(sc_bool_t *const stop)

#define TEST_PROTO(X)   sc_err_t test_drv_ ## X(sc_bool_t *const stop); \
                        sc_err_t test_sc_ ## X(sc_bool_t *const stop);  \
                        sc_err_t test_ap_ ## X(sc_bool_t *const stop);

#define DBGSTR_PU   "Power up %s\n"
#define DBGSTR_PD   "Power down %s\n"
#define DBGSTR_TRY  "Try %s access...\n"
#define DBGSTR_READ_GPIO "Read from GPIO_%s = 0x%08x\n"
#define DBGSTR_READ_IGPIO "Read from GPIO_%u = 0x%08x\n"
#define DBGSTR_READ_MU "Read from MU_%s.SR = 0x%08x\n"
#define DBGSTR_READ_UART "Read from UART_%s.VERID = 0x%08x\n"
#define DBGSTR_READ_I2C "Read from I2C_%s.VERID = 0x%08x\n"
#define DBGSTR_READ_LPCG "Read from LPCG_%s = 0x%08x\n"

#define TEST_RSRC_NUM   43U

#define TEST_READ32(X)          test_read32(U32(X))
#define TEST_WRITE32(X,Y)       test_write32(U32(X), (Y))
#define TEST_CHECK32(X,Y)       test_check32(U32(X), (Y))
#define TEST_NO_READ32(X)       test_pid32(0U, U32(X), SC_TRUE)
#define TEST_PID_READ32(X,Y)    test_pid32((X), U32(Y), SC_FALSE)
#define TEST_PID_NO_READ32(X,Y) test_pid32((X), U32(Y), SC_TRUE)

/* Types */

/* Enums */

/* Sub Includes */

/* Functions */

#if defined(HAS_TEST) || defined(DEBUG)
TEST_PROTO(all)
TEST_PROTO(pm)
TEST_PROTO(misc)
TEST_PROTO(timer)
TEST_PROTO(pad)
TEST_PROTO(rm2)
TEST_PROTO(seco)
TEST_PROTO(rm)
TEST_PROTO(smmu)
TEST_PROTO(reboot)
TEST_PROTO(partnum)
TEST_PROTO(dump)
TEST_PROTO(wdog)
TEST_PROTO(mtr)
TEST_PROTO(board)
TEST_PROTO(temp)
TEST_PROTO(xrdc)
TEST_PROTO(boot)
TEST_PROTO(rpc)
TEST_PROTO(version)
TEST_PROTO(uboot)
TEST_PROTO(pd)
TEST_PROTO(nmi_lockup)
TEST_PROTO(pllchar)
TEST_PROTO(bench)
TEST_PROTO(fusedump)
TEST_PROTO(memreg)
TEST_PROTO(powerall)
TEST_PROTO(profile)
TEST_PROTO(timers)
TEST_PROTO(mtemp)
TEST_PROTO(obd)
TEST_PROTO(rtc2038)
TEST_PROTO(audio_pll)
TEST_PROTO(timestamp)
TEST_PROTO(nmi_msi)
TEST_PROTO(event)
TEST_PROTO(refgencal)
TEST_PROTO(nmi_ecc)
TEST_PROTO(hmppm)
TEST_PROTO(membw)
TEST_PROTO(osc24trim)
TEST_PROTO(fusewrite)
TEST_PROTO(critsec)
TEST_PROTO(boottime)
TEST_PROTO(examples)
TEST_PROTO(drc)
TEST_PROTO(img)
TEST_PROTO(mcu)
TEST_PROTO(pi)
TEST_PROTO(cci)
TEST_PROTO(dma)
TEST_PROTO(mipi)
TEST_PROTO(db)
TEST_PROTO(conn)
TEST_PROTO(v2x)
TEST_PROTO(lsio)
TEST_PROTO(hdmi_rx)
TEST_PROTO(gpu)
TEST_PROTO(dc_lvds)
TEST_PROTO(lcdif)
TEST_PROTO(lvds)
TEST_PROTO(audio)
TEST_PROTO(isi)
TEST_PROTO(vpu)
TEST_PROTO(hsio)
TEST_PROTO(dblogic)
TEST_PROTO(csi)
TEST_PROTO(ap)
TEST_PROTO(hdmi)
TEST_PROTO(dc)
TEST_PROTO(hexdump)
TEST_PROTO(ddr_selfrefresh)
TEST_PROTO(ddr_retention)
TEST_PROTO(ddr)
TEST_PROTO(lpi2c)
TEST_PROTO(pmic)
TEST_PROTO(snvs)
TEST_PROTO(pll)
TEST_PROTO(otp)
TEST_PROTO(dsc)
TEST_PROTO(drv)
#endif

sc_err_t test_force_power(sc_rsrc_t resource, sc_pm_power_mode_t mode);
sc_err_t test_power(sc_ipc_t ipc, sc_rsrc_t resource,
    sc_pm_power_mode_t mode);
sc_err_t test_force_power_list_on(const sc_rsrc_t *resource, uint32_t num);
sc_err_t test_force_power_list_off(const sc_rsrc_t *resource, uint32_t num);
sc_err_t test_power_list_on(sc_ipc_t ipc, const sc_rsrc_t *resource,
    uint32_t num);
sc_err_t test_power_list_off(sc_ipc_t ipc, const sc_rsrc_t *resource,
    uint32_t num);
uint32_t test_read32(uint32_t addr);
void test_write32(uint32_t addr, uint32_t val);
void test_check32(uint32_t addr, uint32_t val);
void test_pid32(uint32_t pid, uint32_t addr, sc_bool_t fail);
void test_reset(sc_rsrc_t resource, uint32_t addr, uint32_t val,
    uint32_t reset_val);
sc_err_t test_clock_rate_change(sc_ipc_t ipc, sc_rsrc_t resource,
    sc_pm_clk_t clk, uint32_t new_rate);

/* External Variables. */

extern sc_bool_t dma_up_down;
extern volatile uint32_t test_val;
extern const sc_rsrc_t test_rsrc_list[TEST_RSRC_NUM];

#endif /* SC_TEST_H */

