/*
** ###################################################################
**     Processors:          MX8
**
**     Compilers:           GNU C Compiler
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MX8
**
**     Copyright (c) 1997 - 2015 Freescale Semiconductor, Inc.
**     Copyright 2017 NXP
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

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_LMEM_CACHE_REGISTERS_H_
#define __HW_LMEM_CACHE_REGISTERS_H_

/* ----------------------------------------------------------------------------
   -- LMEM Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LMEM_Peripheral_Access_Layer LMEM Peripheral Access Layer
 * @{
 */

/** LMEM - Register Layout Typedef */
typedef struct {
  __IO uint32_t PCCCR;                             /**< Cache control register, offset: 0x0 */
  __IO uint32_t PCCLCR;                            /**< Cache line control register, offset: 0x4 */
  __IO uint32_t PCCSAR;                            /**< Cache search address register, offset: 0x8 */
  __IO uint32_t PCCCVR;                            /**< Cache read/write value register, offset: 0xC */
       uint8_t RESERVED_0[16];
  __IO uint32_t PCCRMR;                            /**< Cache regions mode register, offset: 0x20 */
       uint8_t RESERVED_1[2012];
  __IO uint32_t PSCCR;                             /**< Cache control register, offset: 0x800 */
  __IO uint32_t PSCLCR;                            /**< Cache line control register, offset: 0x804 */
  __IO uint32_t PSCSAR;                            /**< Cache search address register, offset: 0x808 */
  __IO uint32_t PSCCVR;                            /**< Cache read/write value register, offset: 0x80C */
       uint8_t RESERVED_2[16];
  __IO uint32_t PSCRMR;                            /**< Cache regions mode register, offset: 0x820 */
} LMEM_Type;

/* ----------------------------------------------------------------------------
   -- LMEM Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup LMEM_Register_Masks LMEM Register Masks
 * @{
 */

/*! @name PCCCR - Cache control register */
#define LMEM_PCCCR_ENCACHE_MASK                  (0x1U)
#define LMEM_PCCCR_ENCACHE_SHIFT                 (0U)
#define LMEM_PCCCR_ENCACHE(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_ENCACHE_SHIFT)) & LMEM_PCCCR_ENCACHE_MASK)
#define LMEM_PCCCR_ENWRBUF_MASK                  (0x2U)
#define LMEM_PCCCR_ENWRBUF_SHIFT                 (1U)
#define LMEM_PCCCR_ENWRBUF(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_ENWRBUF_SHIFT)) & LMEM_PCCCR_ENWRBUF_MASK)
#define LMEM_PCCCR_INVW0_MASK                    (0x1000000U)
#define LMEM_PCCCR_INVW0_SHIFT                   (24U)
#define LMEM_PCCCR_INVW0(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_INVW0_SHIFT)) & LMEM_PCCCR_INVW0_MASK)
#define LMEM_PCCCR_PUSHW0_MASK                   (0x2000000U)
#define LMEM_PCCCR_PUSHW0_SHIFT                  (25U)
#define LMEM_PCCCR_PUSHW0(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_PUSHW0_SHIFT)) & LMEM_PCCCR_PUSHW0_MASK)
#define LMEM_PCCCR_INVW1_MASK                    (0x4000000U)
#define LMEM_PCCCR_INVW1_SHIFT                   (26U)
#define LMEM_PCCCR_INVW1(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_INVW1_SHIFT)) & LMEM_PCCCR_INVW1_MASK)
#define LMEM_PCCCR_PUSHW1_MASK                   (0x8000000U)
#define LMEM_PCCCR_PUSHW1_SHIFT                  (27U)
#define LMEM_PCCCR_PUSHW1(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_PUSHW1_SHIFT)) & LMEM_PCCCR_PUSHW1_MASK)
#define LMEM_PCCCR_GO_MASK                       (0x80000000U)
#define LMEM_PCCCR_GO_SHIFT                      (31U)
#define LMEM_PCCCR_GO(x)                         (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCR_GO_SHIFT)) & LMEM_PCCCR_GO_MASK)

/*! @name PCCLCR - Cache line control register */
#define LMEM_PCCLCR_LGO_MASK                     (0x1U)
#define LMEM_PCCLCR_LGO_SHIFT                    (0U)
#define LMEM_PCCLCR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LGO_SHIFT)) & LMEM_PCCLCR_LGO_MASK)
#define LMEM_PCCLCR_CACHEADDR_MASK               (0xFFCU)
#define LMEM_PCCLCR_CACHEADDR_SHIFT              (2U)
#define LMEM_PCCLCR_CACHEADDR(x)                 (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_CACHEADDR_SHIFT)) & LMEM_PCCLCR_CACHEADDR_MASK)
#define LMEM_PCCLCR_WSEL_MASK                    (0x4000U)
#define LMEM_PCCLCR_WSEL_SHIFT                   (14U)
#define LMEM_PCCLCR_WSEL(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_WSEL_SHIFT)) & LMEM_PCCLCR_WSEL_MASK)
#define LMEM_PCCLCR_TDSEL_MASK                   (0x10000U)
#define LMEM_PCCLCR_TDSEL_SHIFT                  (16U)
#define LMEM_PCCLCR_TDSEL(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_TDSEL_SHIFT)) & LMEM_PCCLCR_TDSEL_MASK)
#define LMEM_PCCLCR_LCIVB_MASK                   (0x100000U)
#define LMEM_PCCLCR_LCIVB_SHIFT                  (20U)
#define LMEM_PCCLCR_LCIVB(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LCIVB_SHIFT)) & LMEM_PCCLCR_LCIVB_MASK)
#define LMEM_PCCLCR_LCIMB_MASK                   (0x200000U)
#define LMEM_PCCLCR_LCIMB_SHIFT                  (21U)
#define LMEM_PCCLCR_LCIMB(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LCIMB_SHIFT)) & LMEM_PCCLCR_LCIMB_MASK)
#define LMEM_PCCLCR_LCWAY_MASK                   (0x400000U)
#define LMEM_PCCLCR_LCWAY_SHIFT                  (22U)
#define LMEM_PCCLCR_LCWAY(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LCWAY_SHIFT)) & LMEM_PCCLCR_LCWAY_MASK)
#define LMEM_PCCLCR_LCMD_MASK                    (0x3000000U)
#define LMEM_PCCLCR_LCMD_SHIFT                   (24U)
#define LMEM_PCCLCR_LCMD(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LCMD_SHIFT)) & LMEM_PCCLCR_LCMD_MASK)
#define LMEM_PCCLCR_LADSEL_MASK                  (0x4000000U)
#define LMEM_PCCLCR_LADSEL_SHIFT                 (26U)
#define LMEM_PCCLCR_LADSEL(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LADSEL_SHIFT)) & LMEM_PCCLCR_LADSEL_MASK)
#define LMEM_PCCLCR_LACC_MASK                    (0x8000000U)
#define LMEM_PCCLCR_LACC_SHIFT                   (27U)
#define LMEM_PCCLCR_LACC(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCLCR_LACC_SHIFT)) & LMEM_PCCLCR_LACC_MASK)

/*! @name PCCSAR - Cache search address register */
#define LMEM_PCCSAR_LGO_MASK                     (0x1U)
#define LMEM_PCCSAR_LGO_SHIFT                    (0U)
#define LMEM_PCCSAR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCSAR_LGO_SHIFT)) & LMEM_PCCSAR_LGO_MASK)
#define LMEM_PCCSAR_PHYADDR_MASK                 (0xFFFFFFFCU)
#define LMEM_PCCSAR_PHYADDR_SHIFT                (2U)
#define LMEM_PCCSAR_PHYADDR(x)                   (((uint32_t)(((uint32_t)(x)) << LMEM_PCCSAR_PHYADDR_SHIFT)) & LMEM_PCCSAR_PHYADDR_MASK)

/*! @name PCCCVR - Cache read/write value register */
#define LMEM_PCCCVR_DATA_MASK                    (0xFFFFFFFFU)
#define LMEM_PCCCVR_DATA_SHIFT                   (0U)
#define LMEM_PCCCVR_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PCCCVR_DATA_SHIFT)) & LMEM_PCCCVR_DATA_MASK)

/*! @name PCCRMR - Cache regions mode register */
#define LMEM_PCCRMR_R15_MASK                     (0x3U)
#define LMEM_PCCRMR_R15_SHIFT                    (0U)
#define LMEM_PCCRMR_R15(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R15_SHIFT)) & LMEM_PCCRMR_R15_MASK)
#define LMEM_PCCRMR_R14_MASK                     (0xCU)
#define LMEM_PCCRMR_R14_SHIFT                    (2U)
#define LMEM_PCCRMR_R14(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R14_SHIFT)) & LMEM_PCCRMR_R14_MASK)
#define LMEM_PCCRMR_R13_MASK                     (0x30U)
#define LMEM_PCCRMR_R13_SHIFT                    (4U)
#define LMEM_PCCRMR_R13(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R13_SHIFT)) & LMEM_PCCRMR_R13_MASK)
#define LMEM_PCCRMR_R12_MASK                     (0xC0U)
#define LMEM_PCCRMR_R12_SHIFT                    (6U)
#define LMEM_PCCRMR_R12(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R12_SHIFT)) & LMEM_PCCRMR_R12_MASK)
#define LMEM_PCCRMR_R11_MASK                     (0x300U)
#define LMEM_PCCRMR_R11_SHIFT                    (8U)
#define LMEM_PCCRMR_R11(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R11_SHIFT)) & LMEM_PCCRMR_R11_MASK)
#define LMEM_PCCRMR_R10_MASK                     (0xC00U)
#define LMEM_PCCRMR_R10_SHIFT                    (10U)
#define LMEM_PCCRMR_R10(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R10_SHIFT)) & LMEM_PCCRMR_R10_MASK)
#define LMEM_PCCRMR_R9_MASK                      (0x3000U)
#define LMEM_PCCRMR_R9_SHIFT                     (12U)
#define LMEM_PCCRMR_R9(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R9_SHIFT)) & LMEM_PCCRMR_R9_MASK)
#define LMEM_PCCRMR_R8_MASK                      (0xC000U)
#define LMEM_PCCRMR_R8_SHIFT                     (14U)
#define LMEM_PCCRMR_R8(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R8_SHIFT)) & LMEM_PCCRMR_R8_MASK)
#define LMEM_PCCRMR_R7_MASK                      (0x30000U)
#define LMEM_PCCRMR_R7_SHIFT                     (16U)
#define LMEM_PCCRMR_R7(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R7_SHIFT)) & LMEM_PCCRMR_R7_MASK)
#define LMEM_PCCRMR_R6_MASK                      (0xC0000U)
#define LMEM_PCCRMR_R6_SHIFT                     (18U)
#define LMEM_PCCRMR_R6(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R6_SHIFT)) & LMEM_PCCRMR_R6_MASK)
#define LMEM_PCCRMR_R5_MASK                      (0x300000U)
#define LMEM_PCCRMR_R5_SHIFT                     (20U)
#define LMEM_PCCRMR_R5(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R5_SHIFT)) & LMEM_PCCRMR_R5_MASK)
#define LMEM_PCCRMR_R4_MASK                      (0xC00000U)
#define LMEM_PCCRMR_R4_SHIFT                     (22U)
#define LMEM_PCCRMR_R4(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R4_SHIFT)) & LMEM_PCCRMR_R4_MASK)
#define LMEM_PCCRMR_R3_MASK                      (0x3000000U)
#define LMEM_PCCRMR_R3_SHIFT                     (24U)
#define LMEM_PCCRMR_R3(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R3_SHIFT)) & LMEM_PCCRMR_R3_MASK)
#define LMEM_PCCRMR_R2_MASK                      (0xC000000U)
#define LMEM_PCCRMR_R2_SHIFT                     (26U)
#define LMEM_PCCRMR_R2(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R2_SHIFT)) & LMEM_PCCRMR_R2_MASK)
#define LMEM_PCCRMR_R1_MASK                      (0x30000000U)
#define LMEM_PCCRMR_R1_SHIFT                     (28U)
#define LMEM_PCCRMR_R1(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R1_SHIFT)) & LMEM_PCCRMR_R1_MASK)
#define LMEM_PCCRMR_R0_MASK                      (0xC0000000U)
#define LMEM_PCCRMR_R0_SHIFT                     (30U)
#define LMEM_PCCRMR_R0(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PCCRMR_R0_SHIFT)) & LMEM_PCCRMR_R0_MASK)

/*! @name PSCCR - Cache control register */
#define LMEM_PSCCR_ENCACHE_MASK                  (0x1U)
#define LMEM_PSCCR_ENCACHE_SHIFT                 (0U)
#define LMEM_PSCCR_ENCACHE(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_ENCACHE_SHIFT)) & LMEM_PSCCR_ENCACHE_MASK)
#define LMEM_PSCCR_ENWRBUF_MASK                  (0x2U)
#define LMEM_PSCCR_ENWRBUF_SHIFT                 (1U)
#define LMEM_PSCCR_ENWRBUF(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_ENWRBUF_SHIFT)) & LMEM_PSCCR_ENWRBUF_MASK)
#define LMEM_PSCCR_INVW0_MASK                    (0x1000000U)
#define LMEM_PSCCR_INVW0_SHIFT                   (24U)
#define LMEM_PSCCR_INVW0(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_INVW0_SHIFT)) & LMEM_PSCCR_INVW0_MASK)
#define LMEM_PSCCR_PUSHW0_MASK                   (0x2000000U)
#define LMEM_PSCCR_PUSHW0_SHIFT                  (25U)
#define LMEM_PSCCR_PUSHW0(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_PUSHW0_SHIFT)) & LMEM_PSCCR_PUSHW0_MASK)
#define LMEM_PSCCR_INVW1_MASK                    (0x4000000U)
#define LMEM_PSCCR_INVW1_SHIFT                   (26U)
#define LMEM_PSCCR_INVW1(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_INVW1_SHIFT)) & LMEM_PSCCR_INVW1_MASK)
#define LMEM_PSCCR_PUSHW1_MASK                   (0x8000000U)
#define LMEM_PSCCR_PUSHW1_SHIFT                  (27U)
#define LMEM_PSCCR_PUSHW1(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_PUSHW1_SHIFT)) & LMEM_PSCCR_PUSHW1_MASK)
#define LMEM_PSCCR_GO_MASK                       (0x80000000U)
#define LMEM_PSCCR_GO_SHIFT                      (31U)
#define LMEM_PSCCR_GO(x)                         (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCR_GO_SHIFT)) & LMEM_PSCCR_GO_MASK)

/*! @name PSCLCR - Cache line control register */
#define LMEM_PSCLCR_LGO_MASK                     (0x1U)
#define LMEM_PSCLCR_LGO_SHIFT                    (0U)
#define LMEM_PSCLCR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LGO_SHIFT)) & LMEM_PSCLCR_LGO_MASK)
#define LMEM_PSCLCR_CACHEADDR_MASK               (0xFFCU)
#define LMEM_PSCLCR_CACHEADDR_SHIFT              (2U)
#define LMEM_PSCLCR_CACHEADDR(x)                 (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_CACHEADDR_SHIFT)) & LMEM_PSCLCR_CACHEADDR_MASK)
#define LMEM_PSCLCR_WSEL_MASK                    (0x4000U)
#define LMEM_PSCLCR_WSEL_SHIFT                   (14U)
#define LMEM_PSCLCR_WSEL(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_WSEL_SHIFT)) & LMEM_PSCLCR_WSEL_MASK)
#define LMEM_PSCLCR_TDSEL_MASK                   (0x10000U)
#define LMEM_PSCLCR_TDSEL_SHIFT                  (16U)
#define LMEM_PSCLCR_TDSEL(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_TDSEL_SHIFT)) & LMEM_PSCLCR_TDSEL_MASK)
#define LMEM_PSCLCR_LCIVB_MASK                   (0x100000U)
#define LMEM_PSCLCR_LCIVB_SHIFT                  (20U)
#define LMEM_PSCLCR_LCIVB(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LCIVB_SHIFT)) & LMEM_PSCLCR_LCIVB_MASK)
#define LMEM_PSCLCR_LCIMB_MASK                   (0x200000U)
#define LMEM_PSCLCR_LCIMB_SHIFT                  (21U)
#define LMEM_PSCLCR_LCIMB(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LCIMB_SHIFT)) & LMEM_PSCLCR_LCIMB_MASK)
#define LMEM_PSCLCR_LCWAY_MASK                   (0x400000U)
#define LMEM_PSCLCR_LCWAY_SHIFT                  (22U)
#define LMEM_PSCLCR_LCWAY(x)                     (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LCWAY_SHIFT)) & LMEM_PSCLCR_LCWAY_MASK)
#define LMEM_PSCLCR_LCMD_MASK                    (0x3000000U)
#define LMEM_PSCLCR_LCMD_SHIFT                   (24U)
#define LMEM_PSCLCR_LCMD(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LCMD_SHIFT)) & LMEM_PSCLCR_LCMD_MASK)
#define LMEM_PSCLCR_LADSEL_MASK                  (0x4000000U)
#define LMEM_PSCLCR_LADSEL_SHIFT                 (26U)
#define LMEM_PSCLCR_LADSEL(x)                    (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LADSEL_SHIFT)) & LMEM_PSCLCR_LADSEL_MASK)
#define LMEM_PSCLCR_LACC_MASK                    (0x8000000U)
#define LMEM_PSCLCR_LACC_SHIFT                   (27U)
#define LMEM_PSCLCR_LACC(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCLCR_LACC_SHIFT)) & LMEM_PSCLCR_LACC_MASK)

/*! @name PSCSAR - Cache search address register */
#define LMEM_PSCSAR_LGO_MASK                     (0x1U)
#define LMEM_PSCSAR_LGO_SHIFT                    (0U)
#define LMEM_PSCSAR_LGO(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCSAR_LGO_SHIFT)) & LMEM_PSCSAR_LGO_MASK)
#define LMEM_PSCSAR_PHYADDR_MASK                 (0xFFFFFFFCU)
#define LMEM_PSCSAR_PHYADDR_SHIFT                (2U)
#define LMEM_PSCSAR_PHYADDR(x)                   (((uint32_t)(((uint32_t)(x)) << LMEM_PSCSAR_PHYADDR_SHIFT)) & LMEM_PSCSAR_PHYADDR_MASK)

/*! @name PSCCVR - Cache read/write value register */
#define LMEM_PSCCVR_DATA_MASK                    (0xFFFFFFFFU)
#define LMEM_PSCCVR_DATA_SHIFT                   (0U)
#define LMEM_PSCCVR_DATA(x)                      (((uint32_t)(((uint32_t)(x)) << LMEM_PSCCVR_DATA_SHIFT)) & LMEM_PSCCVR_DATA_MASK)

/*! @name PSCRMR - Cache regions mode register */
#define LMEM_PSCRMR_R15_MASK                     (0x3U)
#define LMEM_PSCRMR_R15_SHIFT                    (0U)
#define LMEM_PSCRMR_R15(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R15_SHIFT)) & LMEM_PSCRMR_R15_MASK)
#define LMEM_PSCRMR_R14_MASK                     (0xCU)
#define LMEM_PSCRMR_R14_SHIFT                    (2U)
#define LMEM_PSCRMR_R14(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R14_SHIFT)) & LMEM_PSCRMR_R14_MASK)
#define LMEM_PSCRMR_R13_MASK                     (0x30U)
#define LMEM_PSCRMR_R13_SHIFT                    (4U)
#define LMEM_PSCRMR_R13(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R13_SHIFT)) & LMEM_PSCRMR_R13_MASK)
#define LMEM_PSCRMR_R12_MASK                     (0xC0U)
#define LMEM_PSCRMR_R12_SHIFT                    (6U)
#define LMEM_PSCRMR_R12(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R12_SHIFT)) & LMEM_PSCRMR_R12_MASK)
#define LMEM_PSCRMR_R11_MASK                     (0x300U)
#define LMEM_PSCRMR_R11_SHIFT                    (8U)
#define LMEM_PSCRMR_R11(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R11_SHIFT)) & LMEM_PSCRMR_R11_MASK)
#define LMEM_PSCRMR_R10_MASK                     (0xC00U)
#define LMEM_PSCRMR_R10_SHIFT                    (10U)
#define LMEM_PSCRMR_R10(x)                       (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R10_SHIFT)) & LMEM_PSCRMR_R10_MASK)
#define LMEM_PSCRMR_R9_MASK                      (0x3000U)
#define LMEM_PSCRMR_R9_SHIFT                     (12U)
#define LMEM_PSCRMR_R9(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R9_SHIFT)) & LMEM_PSCRMR_R9_MASK)
#define LMEM_PSCRMR_R8_MASK                      (0xC000U)
#define LMEM_PSCRMR_R8_SHIFT                     (14U)
#define LMEM_PSCRMR_R8(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R8_SHIFT)) & LMEM_PSCRMR_R8_MASK)
#define LMEM_PSCRMR_R7_MASK                      (0x30000U)
#define LMEM_PSCRMR_R7_SHIFT                     (16U)
#define LMEM_PSCRMR_R7(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R7_SHIFT)) & LMEM_PSCRMR_R7_MASK)
#define LMEM_PSCRMR_R6_MASK                      (0xC0000U)
#define LMEM_PSCRMR_R6_SHIFT                     (18U)
#define LMEM_PSCRMR_R6(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R6_SHIFT)) & LMEM_PSCRMR_R6_MASK)
#define LMEM_PSCRMR_R5_MASK                      (0x300000U)
#define LMEM_PSCRMR_R5_SHIFT                     (20U)
#define LMEM_PSCRMR_R5(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R5_SHIFT)) & LMEM_PSCRMR_R5_MASK)
#define LMEM_PSCRMR_R4_MASK                      (0xC00000U)
#define LMEM_PSCRMR_R4_SHIFT                     (22U)
#define LMEM_PSCRMR_R4(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R4_SHIFT)) & LMEM_PSCRMR_R4_MASK)
#define LMEM_PSCRMR_R3_MASK                      (0x3000000U)
#define LMEM_PSCRMR_R3_SHIFT                     (24U)
#define LMEM_PSCRMR_R3(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R3_SHIFT)) & LMEM_PSCRMR_R3_MASK)
#define LMEM_PSCRMR_R2_MASK                      (0xC000000U)
#define LMEM_PSCRMR_R2_SHIFT                     (26U)
#define LMEM_PSCRMR_R2(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R2_SHIFT)) & LMEM_PSCRMR_R2_MASK)
#define LMEM_PSCRMR_R1_MASK                      (0x30000000U)
#define LMEM_PSCRMR_R1_SHIFT                     (28U)
#define LMEM_PSCRMR_R1(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R1_SHIFT)) & LMEM_PSCRMR_R1_MASK)
#define LMEM_PSCRMR_R0_MASK                      (0xC0000000U)
#define LMEM_PSCRMR_R0_SHIFT                     (30U)
#define LMEM_PSCRMR_R0(x)                        (((uint32_t)(((uint32_t)(x)) << LMEM_PSCRMR_R0_SHIFT)) & LMEM_PSCRMR_R0_MASK)


/*!
 * @}
 */ /* end of group LMEM_Register_Masks */


/* LMEM - Peripheral instance base addresses */
/** Peripheral LMEM base pointer */
#define LMEM                                     ((LMEM_Type *)LMEM_BASE)
/** Array initializer of LMEM peripheral base addresses */
#define LMEM_BASE_ADDRS                          { LMEM_BASE }
/** Array initializer of LMEM peripheral base pointers */
#define LMEM_BASE_PTRS                           { LMEM }

/*!
 * @}
 */ /* end of group LMEM_Peripheral_Access_Layer */

#endif /* __HW_LMEM_CACHE_REGISTERS_H_ */

/* EOF */
