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
 * File containing server-side RPC functions for the PAD service.
 *
 * @addtogroup PAD_SVC
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/rpc_srv_c.pl */

/* Includes */

#include "main/scfw.h"
#include "main/types.h"
#include "main/main.h"
#include "main/rpc.h"
#include "svc/pad/svc.h"
#include "svc/pad/rpc.h"

/* Local Defines */

/* Local Types */

/*--------------------------------------------------------------------------*/
/* Dispatch incoming RPC function call                                      */
/*--------------------------------------------------------------------------*/
void pad_dispatch(sc_rm_pt_t caller_pt, sc_rsrc_t mu, sc_rpc_msg_t *msg)
{
    uint8_t func = RPC_FUNC(msg);
    sc_err_t err = SC_ERR_NONE;

    switch (func)
    {
        /* Handle uknown function */
        case PAD_FUNC_UNKNOWN :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
        /* Dispatch set_mux() */
        case PAD_FUNC_SET_MUX :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint8_t mux = ((uint8_t) RPC_U8(msg, 2U));
                sc_pad_config_t config = ((sc_pad_config_t) RPC_U8(msg, 3U));
                sc_pad_iso_t iso = ((sc_pad_iso_t) RPC_U8(msg, 4U));

                /* Call function */
                err = pad_set_mux(caller_pt, pad, mux, config, iso);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_mux() */
        case PAD_FUNC_GET_MUX :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint8_t mux = ((uint8_t) 0U);
                sc_pad_config_t config = ((sc_pad_config_t) 0U);
                sc_pad_iso_t iso = ((sc_pad_iso_t) 0U);

                /* Call function */
                err = pad_get_mux(caller_pt, pad, &mux, &config, &iso);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(mux);
                RPC_U8(msg, 1U) = U8(config);
                RPC_U8(msg, 2U) = U8(iso);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch set_gp() */
        case PAD_FUNC_SET_GP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 4U));
                uint32_t ctrl = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = pad_set_gp(caller_pt, pad, ctrl);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_gp() */
        case PAD_FUNC_GET_GP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint32_t ctrl = ((uint32_t) 0U);

                /* Call function */
                err = pad_get_gp(caller_pt, pad, &ctrl);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(ctrl);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch set_wakeup() */
        case PAD_FUNC_SET_WAKEUP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_wakeup_t wakeup = ((sc_pad_wakeup_t) RPC_U8(msg, 2U));

                /* Call function */
                err = pad_set_wakeup(caller_pt, pad, wakeup);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_wakeup() */
        case PAD_FUNC_GET_WAKEUP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_wakeup_t wakeup = ((sc_pad_wakeup_t) 0U);

                /* Call function */
                err = pad_get_wakeup(caller_pt, pad, &wakeup);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(wakeup);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch set_all() */
        case PAD_FUNC_SET_ALL :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 4U));
                uint8_t mux = ((uint8_t) RPC_U8(msg, 6U));
                sc_pad_config_t config = ((sc_pad_config_t) RPC_U8(msg, 7U));
                sc_pad_iso_t iso = ((sc_pad_iso_t) RPC_U8(msg, 8U));
                uint32_t ctrl = ((uint32_t) RPC_U32(msg, 0U));
                sc_pad_wakeup_t wakeup = ((sc_pad_wakeup_t) RPC_U8(msg, 9U));

                /* Call function */
                err = pad_set_all(caller_pt, pad, mux, config, iso, ctrl,
                    wakeup);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get_all() */
        case PAD_FUNC_GET_ALL :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint8_t mux = ((uint8_t) 0U);
                sc_pad_config_t config = ((sc_pad_config_t) 0U);
                sc_pad_iso_t iso = ((sc_pad_iso_t) 0U);
                uint32_t ctrl = ((uint32_t) 0U);
                sc_pad_wakeup_t wakeup = ((sc_pad_wakeup_t) 0U);

                /* Call function */
                err = pad_get_all(caller_pt, pad, &mux, &config, &iso, &ctrl,
                    &wakeup);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 4U) = U8(mux);
                RPC_U8(msg, 5U) = U8(config);
                RPC_U8(msg, 6U) = U8(iso);
                RPC_U32(msg, 0U) = U32(ctrl);
                RPC_U8(msg, 7U) = U8(wakeup);
                RPC_SIZE(msg) = 3U;
                break;
            }
        /* Dispatch set() */
        case PAD_FUNC_SET :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 4U));
                uint32_t val = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = pad_set(caller_pt, pad, val);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
        /* Dispatch get() */
        case PAD_FUNC_GET :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint32_t val = ((uint32_t) 0U);

                /* Call function */
                err = pad_get(caller_pt, pad, &val);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U32(msg, 0U) = U32(val);
                RPC_SIZE(msg) = 2U;
                break;
            }
        /* Dispatch config() */
        case PAD_FUNC_CONFIG :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 4U));
                uint32_t val = ((uint32_t) RPC_U32(msg, 0U));

                /* Call function */
                err = pad_config(caller_pt, pad, val);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#ifdef API_HAS_28FDSOI
        /* Dispatch set_gp_28fdsoi() */
        case PAD_FUNC_SET_GP_28FDSOI :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_28fdsoi_dse_t dse = ((sc_pad_28fdsoi_dse_t) RPC_U8(msg, 2U));
                sc_pad_28fdsoi_ps_t ps = ((sc_pad_28fdsoi_ps_t) RPC_U8(msg, 3U));

                /* Call function */
                err = pad_set_gp_28fdsoi(caller_pt, pad, dse, ps);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#endif
#ifdef API_HAS_28FDSOI
        /* Dispatch get_gp_28fdsoi() */
        case PAD_FUNC_GET_GP_28FDSOI :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_28fdsoi_dse_t dse = ((sc_pad_28fdsoi_dse_t) 0U);
                sc_pad_28fdsoi_ps_t ps = ((sc_pad_28fdsoi_ps_t) 0U);

                /* Call function */
                err = pad_get_gp_28fdsoi(caller_pt, pad, &dse, &ps);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(dse);
                RPC_U8(msg, 1U) = U8(ps);
                RPC_SIZE(msg) = 2U;
                break;
            }
#endif
#ifdef API_HAS_28FDSOI
        /* Dispatch set_gp_28fdsoi_hsic() */
        case PAD_FUNC_SET_GP_28FDSOI_HSIC :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_28fdsoi_dse_t dse = ((sc_pad_28fdsoi_dse_t) RPC_U8(msg, 2U));
                sc_bool_t hys = U2B(RPC_U8(msg, 4U));
                sc_pad_28fdsoi_pus_t pus = ((sc_pad_28fdsoi_pus_t) RPC_U8(msg, 3U));
                sc_bool_t pke = U2B(RPC_U8(msg, 5U));
                sc_bool_t pue = U2B(RPC_U8(msg, 6U));

                /* Call function */
                err = pad_set_gp_28fdsoi_hsic(caller_pt, pad, dse, hys, pus, pke,
                    pue);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#endif
#ifdef API_HAS_28FDSOI
        /* Dispatch get_gp_28fdsoi_hsic() */
        case PAD_FUNC_GET_GP_28FDSOI_HSIC :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                sc_pad_28fdsoi_dse_t dse = ((sc_pad_28fdsoi_dse_t) 0U);
                sc_bool_t hys = SC_FALSE;
                sc_pad_28fdsoi_pus_t pus = ((sc_pad_28fdsoi_pus_t) 0U);
                sc_bool_t pke = SC_FALSE;
                sc_bool_t pue = SC_FALSE;

                /* Call function */
                err = pad_get_gp_28fdsoi_hsic(caller_pt, pad, &dse, &hys, &pus,
                    &pke, &pue);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(dse);
                RPC_U8(msg, 2U) = B2U8(hys);
                RPC_U8(msg, 1U) = U8(pus);
                RPC_U8(msg, 3U) = B2U8(pke);
                RPC_U8(msg, 4U) = B2U8(pue);
                RPC_SIZE(msg) = 3U;
                break;
            }
#endif
#ifdef API_HAS_28FDSOI
        /* Dispatch set_gp_28fdsoi_comp() */
        case PAD_FUNC_SET_GP_28FDSOI_COMP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint8_t compen = ((uint8_t) RPC_U8(msg, 2U));
                sc_bool_t fastfrz = U2B(RPC_U8(msg, 5U));
                uint8_t rasrcp = ((uint8_t) RPC_U8(msg, 3U));
                uint8_t rasrcn = ((uint8_t) RPC_U8(msg, 4U));
                sc_bool_t nasrc_sel = U2B(RPC_U8(msg, 6U));
                sc_bool_t psw_ovr = U2B(RPC_U8(msg, 7U));

                /* Call function */
                err = pad_set_gp_28fdsoi_comp(caller_pt, pad, compen, fastfrz,
                    rasrcp, rasrcn, nasrc_sel, psw_ovr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_SIZE(msg) = 1U;
                break;
            }
#endif
#ifdef API_HAS_28FDSOI
        /* Dispatch get_gp_28fdsoi_comp() */
        case PAD_FUNC_GET_GP_28FDSOI_COMP :
            {
                /* Declare return and parameters */
                sc_err_t result;
                sc_pad_t pad = ((sc_pad_t) RPC_U16(msg, 0U));
                uint8_t compen = ((uint8_t) 0U);
                sc_bool_t fastfrz = SC_FALSE;
                uint8_t rasrcp = ((uint8_t) 0U);
                uint8_t rasrcn = ((uint8_t) 0U);
                sc_bool_t nasrc_sel = SC_FALSE;
                sc_bool_t compok = SC_FALSE;
                uint8_t nasrc = ((uint8_t) 0U);
                sc_bool_t psw_ovr = SC_FALSE;

                /* Call function */
                err = pad_get_gp_28fdsoi_comp(caller_pt, pad, &compen, &fastfrz,
                    &rasrcp, &rasrcn, &nasrc_sel, &compok, &nasrc, &psw_ovr);
                result = err;

                /* Copy in return parameters */
                RPC_R8(msg) = U8(result);
                RPC_U8(msg, 0U) = U8(compen);
                RPC_U8(msg, 4U) = B2U8(fastfrz);
                RPC_U8(msg, 1U) = U8(rasrcp);
                RPC_U8(msg, 2U) = U8(rasrcn);
                RPC_U8(msg, 5U) = B2U8(nasrc_sel);
                RPC_U8(msg, 6U) = B2U8(compok);
                RPC_U8(msg, 3U) = U8(nasrc);
                RPC_U8(msg, 7U) = B2U8(psw_ovr);
                RPC_SIZE(msg) = 3U;
                break;
            }
#endif
        /* Handle default */
        default :
            {
                RPC_SIZE(msg) = 1;
                err = SC_ERR_NOTFOUND;
                RPC_R8(msg) = (uint8_t) err;
            }
            break;
    }

    /* Fill in header */
    RPC_VER(msg) = SC_RPC_VERSION;
    RPC_SVC(msg) = (uint8_t) SC_RPC_SVC_RETURN;

    /* Handle error debug */
    if (err != SC_ERR_NONE)
    {
        if (rpc_debug)
        {
            always_print("ipc_err: api=pad, func=%d, err=%d\n", func, err);
        }
        else
        {
            rpc_print(0, "ipc_err: api=pad, func=%d, err=%d\n", func, err);
        }
    }
}

/** @} */

