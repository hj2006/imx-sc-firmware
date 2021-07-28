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
 * Header file used to map pads and print debug output.
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/perl/pad_data_h.pl */

#ifndef SC_PAD_DATA_H
#define SC_PAD_DATA_H

/* Defines */

/*!
 * This define is used to initialize the pad mapping array.
 */
#define SC_SVC_PAD_INIT \
        U16((IOMUXD__SIM0_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SIM0_RST >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SIM0_IO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SIM0_PD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SIM0_POWER_EN >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SIM0_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_SIM >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M40_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M40_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M40_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M40_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M41_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M41_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M41_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__M41_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT0_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT0_CAPTURE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT0_COMPARE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT1_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT1_CAPTURE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__GPT1_COMPARE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART0_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART0_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART0_RTS_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART0_CTS_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART1_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART1_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART1_RTS_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__UART1_CTS_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIOLH >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_PMIC_MEMC_ON >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_WDOG_OUT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PMIC_I2C_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PMIC_I2C_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PMIC_EARLY_WARNING >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PMIC_INT_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_02 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_03 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_04 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_05 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_06 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_GPIO0_07 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE4 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SCU_BOOT_MODE5 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_GPIO00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_GPIO01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_I2C1_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS0_I2C1_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_GPIO00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_GPIO01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_I2C1_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__LVDS1_I2C1_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_LVDSGPIO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI0_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI0_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI0_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI0_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI1_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI1_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI1_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_DSI1_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_MIPIDSIGPIO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI0_MCLK_OUT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI0_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI0_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI0_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI0_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI1_MCLK_OUT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI1_GPIO0_00 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI1_GPIO0_01 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI1_I2C0_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MIPI_CSI1_I2C0_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__HDMI_TX0_TS_SCL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__HDMI_TX0_TS_SDA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_3V3_HDMIGPIO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_FSR >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_FST >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_SCKR >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_SCKT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX2_RX3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX3_RX2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX4_RX1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI1_TX5_RX0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPDIF0_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPDIF0_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPDIF0_EXT_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI3_SCK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI3_SDO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI3_SDI >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI3_CS0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI3_CS1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIORHB >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_FSR >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_FST >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_SCKR >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_SCKT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX2_RX3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX3_RX2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX4_RX1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ESAI0_TX5_RX0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MCLK_IN0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MCLK_OUT0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIORHC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI0_SCK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI0_SDO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI0_SDI >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI0_CS0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI0_CS1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI2_SCK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI2_SDO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI2_SDI >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI2_CS0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SPI2_CS1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_RXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_RXD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_RXFS >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_TXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_TXD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__SAI1_TXFS >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIORHT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN7 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN6 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN5 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN4 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ADC_IN0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MLB_SIG >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MLB_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__MLB_DATA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIOLHT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN0_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN0_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN1_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN1_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN2_RX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__FLEXCAN2_TX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIOTHR >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_SS3_TC0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_SS3_TC1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_SS3_TC2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_SS3_TC3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_3V3_USB3IO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_RESET_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_VSELECT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_RESET_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_VSELECT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_WP >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_CD_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_VSELSEP >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_MDIO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_MDC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_REFCLK_125M_25M >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_REFCLK_125M_25M >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_MDIO >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_MDC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_GPIOCT >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_SS0_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_SS1_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_SCLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_DQS >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI1A_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_QSPI1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_DQS >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_SS0_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_SS1_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0A_SCLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_SCLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_DQS >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_SS0_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__QSPI0B_SS1_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_QSPI0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL0_CLKREQ_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL0_WAKE_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL0_PERST_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL1_CLKREQ_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL1_WAKE_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__PCIE_CTRL1_PERST_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_PCIESEP >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_HSIC0_DATA >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USB_HSIC0_STROBE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_CALIBRATION_0_HSIC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_CALIBRATION_1_HSIC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_CMD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA4 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA5 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA6 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_DATA7 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_STROBE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__EMMC0_RESET_B >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_SD1FIX >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_CMD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_CTL_NAND_RE_P_N >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_CTL_NAND_DQS_P_N >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA4 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA5 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA6 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_DATA7 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC1_STROBE >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_VSEL2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_CLK >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_CMD >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_DATA0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_DATA1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_DATA2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__USDHC2_DATA3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_VSEL3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TX_CTL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TXD0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TXD1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TXD2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_TXD3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RX_CTL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RXD0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RXD1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RXD2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET0_RGMII_RXD3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_ENET_ENETB >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TX_CTL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TXD0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TXD1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TXD2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_TXD3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RXC >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RX_CTL >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RXD0 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RXD1 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RXD2 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__ENET1_RGMII_RXD3 >> 4U) & 0xFFFFU), \
        U16((IOMUXD__IOMUXD_COMP_CTL_GPIO_1V8_3V3_ENET_ENETA >> 4U) & 0xFFFFU)

/*!
 * This define is used indicate the number of pads.
 */
#define SC_NUM_PAD 269U

/*!
 * This define is used to indicate the bit width required to contain a pad.
 */
#define SC_PAD_W 9

/*!
 * This define is used to initialize the pad group array.
 */
#define SC_SVC_PAD_IRQ_INIT \
        SC_P_SIM0_CLK, \
        SC_P_GPT0_CLK, \
        SC_P_SCU_WDOG_OUT, \
        SC_P_SCU_GPIO0_02, \
        SC_P_LVDS0_GPIO00, \
        SC_P_MIPI_DSI0_I2C0_SCL, \
        SC_P_MIPI_CSI0_MCLK_OUT, \
        SC_P_ESAI1_FSR, \
        SC_P_SPI3_SDI, \
        SC_P_MCLK_OUT0, \
        SC_P_SAI1_TXC, \
        SC_P_MLB_SIG, \
        SC_P_USDHC1_RESET_B, \
        SC_P_QSPI1A_SS1_B, \
        SC_P_QSPI0A_DATA0, \
        SC_P_QSPI0B_SS1_B, \
        SC_P_USB_HSIC0_DATA, \
        SC_P_EMMC0_CLK, \
        SC_P_USDHC1_DATA1, \
        SC_P_USDHC2_DATA3, \
        SC_P_ENET1_RGMII_TX_CTL

/*!
 * This define is used indicate the number of pad interrupts.
 */
#define SC_NUM_PAD_IRQS 21U

/*!
 * This define is used to initialize the pad debug output array.
 */
#ifdef DEBUG
    #define PNAME_INIT \
        "SIM0_CLK", \
        "SIM0_RST", \
        "SIM0_IO", \
        "SIM0_PD", \
        "SIM0_POWER_EN", \
        "SIM0_GPIO0_00", \
        "COMP_CTL_GPIO_1V8_3V3_SIM", \
        "M40_I2C0_SCL", \
        "M40_I2C0_SDA", \
        "M40_GPIO0_00", \
        "M40_GPIO0_01", \
        "M41_I2C0_SCL", \
        "M41_I2C0_SDA", \
        "M41_GPIO0_00", \
        "M41_GPIO0_01", \
        "GPT0_CLK", \
        "GPT0_CAPTURE", \
        "GPT0_COMPARE", \
        "GPT1_CLK", \
        "GPT1_CAPTURE", \
        "GPT1_COMPARE", \
        "UART0_RX", \
        "UART0_TX", \
        "UART0_RTS_B", \
        "UART0_CTS_B", \
        "UART1_TX", \
        "UART1_RX", \
        "UART1_RTS_B", \
        "UART1_CTS_B", \
        "COMP_CTL_GPIO_1V8_3V3_GPIOLH", \
        "SCU_PMIC_MEMC_ON", \
        "SCU_WDOG_OUT", \
        "PMIC_I2C_SDA", \
        "PMIC_I2C_SCL", \
        "PMIC_EARLY_WARNING", \
        "PMIC_INT_B", \
        "SCU_GPIO0_00", \
        "SCU_GPIO0_01", \
        "SCU_GPIO0_02", \
        "SCU_GPIO0_03", \
        "SCU_GPIO0_04", \
        "SCU_GPIO0_05", \
        "SCU_GPIO0_06", \
        "SCU_GPIO0_07", \
        "SCU_BOOT_MODE0", \
        "SCU_BOOT_MODE1", \
        "SCU_BOOT_MODE2", \
        "SCU_BOOT_MODE3", \
        "SCU_BOOT_MODE4", \
        "SCU_BOOT_MODE5", \
        "LVDS0_GPIO00", \
        "LVDS0_GPIO01", \
        "LVDS0_I2C0_SCL", \
        "LVDS0_I2C0_SDA", \
        "LVDS0_I2C1_SCL", \
        "LVDS0_I2C1_SDA", \
        "LVDS1_GPIO00", \
        "LVDS1_GPIO01", \
        "LVDS1_I2C0_SCL", \
        "LVDS1_I2C0_SDA", \
        "LVDS1_I2C1_SCL", \
        "LVDS1_I2C1_SDA", \
        "COMP_CTL_GPIO_1V8_3V3_LVDSGPIO", \
        "MIPI_DSI0_I2C0_SCL", \
        "MIPI_DSI0_I2C0_SDA", \
        "MIPI_DSI0_GPIO0_00", \
        "MIPI_DSI0_GPIO0_01", \
        "MIPI_DSI1_I2C0_SCL", \
        "MIPI_DSI1_I2C0_SDA", \
        "MIPI_DSI1_GPIO0_00", \
        "MIPI_DSI1_GPIO0_01", \
        "COMP_CTL_GPIO_1V8_3V3_MIPIDSIGPIO", \
        "MIPI_CSI0_MCLK_OUT", \
        "MIPI_CSI0_I2C0_SCL", \
        "MIPI_CSI0_I2C0_SDA", \
        "MIPI_CSI0_GPIO0_00", \
        "MIPI_CSI0_GPIO0_01", \
        "MIPI_CSI1_MCLK_OUT", \
        "MIPI_CSI1_GPIO0_00", \
        "MIPI_CSI1_GPIO0_01", \
        "MIPI_CSI1_I2C0_SCL", \
        "MIPI_CSI1_I2C0_SDA", \
        "HDMI_TX0_TS_SCL", \
        "HDMI_TX0_TS_SDA", \
        "COMP_CTL_GPIO_3V3_HDMIGPIO", \
        "ESAI1_FSR", \
        "ESAI1_FST", \
        "ESAI1_SCKR", \
        "ESAI1_SCKT", \
        "ESAI1_TX0", \
        "ESAI1_TX1", \
        "ESAI1_TX2_RX3", \
        "ESAI1_TX3_RX2", \
        "ESAI1_TX4_RX1", \
        "ESAI1_TX5_RX0", \
        "SPDIF0_RX", \
        "SPDIF0_TX", \
        "SPDIF0_EXT_CLK", \
        "SPI3_SCK", \
        "SPI3_SDO", \
        "SPI3_SDI", \
        "SPI3_CS0", \
        "SPI3_CS1", \
        "COMP_CTL_GPIO_1V8_3V3_GPIORHB", \
        "ESAI0_FSR", \
        "ESAI0_FST", \
        "ESAI0_SCKR", \
        "ESAI0_SCKT", \
        "ESAI0_TX0", \
        "ESAI0_TX1", \
        "ESAI0_TX2_RX3", \
        "ESAI0_TX3_RX2", \
        "ESAI0_TX4_RX1", \
        "ESAI0_TX5_RX0", \
        "MCLK_IN0", \
        "MCLK_OUT0", \
        "COMP_CTL_GPIO_1V8_3V3_GPIORHC", \
        "SPI0_SCK", \
        "SPI0_SDO", \
        "SPI0_SDI", \
        "SPI0_CS0", \
        "SPI0_CS1", \
        "SPI2_SCK", \
        "SPI2_SDO", \
        "SPI2_SDI", \
        "SPI2_CS0", \
        "SPI2_CS1", \
        "SAI1_RXC", \
        "SAI1_RXD", \
        "SAI1_RXFS", \
        "SAI1_TXC", \
        "SAI1_TXD", \
        "SAI1_TXFS", \
        "COMP_CTL_GPIO_1V8_3V3_GPIORHT", \
        "ADC_IN7", \
        "ADC_IN6", \
        "ADC_IN5", \
        "ADC_IN4", \
        "ADC_IN3", \
        "ADC_IN2", \
        "ADC_IN1", \
        "ADC_IN0", \
        "MLB_SIG", \
        "MLB_CLK", \
        "MLB_DATA", \
        "COMP_CTL_GPIO_1V8_3V3_GPIOLHT", \
        "FLEXCAN0_RX", \
        "FLEXCAN0_TX", \
        "FLEXCAN1_RX", \
        "FLEXCAN1_TX", \
        "FLEXCAN2_RX", \
        "FLEXCAN2_TX", \
        "COMP_CTL_GPIO_1V8_3V3_GPIOTHR", \
        "USB_SS3_TC0", \
        "USB_SS3_TC1", \
        "USB_SS3_TC2", \
        "USB_SS3_TC3", \
        "COMP_CTL_GPIO_3V3_USB3IO", \
        "USDHC1_RESET_B", \
        "USDHC1_VSELECT", \
        "USDHC2_RESET_B", \
        "USDHC2_VSELECT", \
        "USDHC2_WP", \
        "USDHC2_CD_B", \
        "COMP_CTL_GPIO_1V8_3V3_VSELSEP", \
        "ENET0_MDIO", \
        "ENET0_MDC", \
        "ENET0_REFCLK_125M_25M", \
        "ENET1_REFCLK_125M_25M", \
        "ENET1_MDIO", \
        "ENET1_MDC", \
        "COMP_CTL_GPIO_1V8_3V3_GPIOCT", \
        "QSPI1A_SS0_B", \
        "QSPI1A_SS1_B", \
        "QSPI1A_SCLK", \
        "QSPI1A_DQS", \
        "QSPI1A_DATA3", \
        "QSPI1A_DATA2", \
        "QSPI1A_DATA1", \
        "QSPI1A_DATA0", \
        "COMP_CTL_GPIO_1V8_3V3_QSPI1", \
        "QSPI0A_DATA0", \
        "QSPI0A_DATA1", \
        "QSPI0A_DATA2", \
        "QSPI0A_DATA3", \
        "QSPI0A_DQS", \
        "QSPI0A_SS0_B", \
        "QSPI0A_SS1_B", \
        "QSPI0A_SCLK", \
        "QSPI0B_SCLK", \
        "QSPI0B_DATA0", \
        "QSPI0B_DATA1", \
        "QSPI0B_DATA2", \
        "QSPI0B_DATA3", \
        "QSPI0B_DQS", \
        "QSPI0B_SS0_B", \
        "QSPI0B_SS1_B", \
        "COMP_CTL_GPIO_1V8_3V3_QSPI0", \
        "PCIE_CTRL0_CLKREQ_B", \
        "PCIE_CTRL0_WAKE_B", \
        "PCIE_CTRL0_PERST_B", \
        "PCIE_CTRL1_CLKREQ_B", \
        "PCIE_CTRL1_WAKE_B", \
        "PCIE_CTRL1_PERST_B", \
        "COMP_CTL_GPIO_1V8_3V3_PCIESEP", \
        "USB_HSIC0_DATA", \
        "USB_HSIC0_STROBE", \
        "CALIBRATION_0_HSIC", \
        "CALIBRATION_1_HSIC", \
        "EMMC0_CLK", \
        "EMMC0_CMD", \
        "EMMC0_DATA0", \
        "EMMC0_DATA1", \
        "EMMC0_DATA2", \
        "EMMC0_DATA3", \
        "EMMC0_DATA4", \
        "EMMC0_DATA5", \
        "EMMC0_DATA6", \
        "EMMC0_DATA7", \
        "EMMC0_STROBE", \
        "EMMC0_RESET_B", \
        "COMP_CTL_GPIO_1V8_3V3_SD1FIX", \
        "USDHC1_CLK", \
        "USDHC1_CMD", \
        "USDHC1_DATA0", \
        "USDHC1_DATA1", \
        "CTL_NAND_RE_P_N", \
        "USDHC1_DATA2", \
        "USDHC1_DATA3", \
        "CTL_NAND_DQS_P_N", \
        "USDHC1_DATA4", \
        "USDHC1_DATA5", \
        "USDHC1_DATA6", \
        "USDHC1_DATA7", \
        "USDHC1_STROBE", \
        "COMP_CTL_GPIO_1V8_3V3_VSEL2", \
        "USDHC2_CLK", \
        "USDHC2_CMD", \
        "USDHC2_DATA0", \
        "USDHC2_DATA1", \
        "USDHC2_DATA2", \
        "USDHC2_DATA3", \
        "COMP_CTL_GPIO_1V8_3V3_VSEL3", \
        "ENET0_RGMII_TXC", \
        "ENET0_RGMII_TX_CTL", \
        "ENET0_RGMII_TXD0", \
        "ENET0_RGMII_TXD1", \
        "ENET0_RGMII_TXD2", \
        "ENET0_RGMII_TXD3", \
        "ENET0_RGMII_RXC", \
        "ENET0_RGMII_RX_CTL", \
        "ENET0_RGMII_RXD0", \
        "ENET0_RGMII_RXD1", \
        "ENET0_RGMII_RXD2", \
        "ENET0_RGMII_RXD3", \
        "COMP_CTL_GPIO_1V8_3V3_ENET_ENETB", \
        "ENET1_RGMII_TXC", \
        "ENET1_RGMII_TX_CTL", \
        "ENET1_RGMII_TXD0", \
        "ENET1_RGMII_TXD1", \
        "ENET1_RGMII_TXD2", \
        "ENET1_RGMII_TXD3", \
        "ENET1_RGMII_RXC", \
        "ENET1_RGMII_RX_CTL", \
        "ENET1_RGMII_RXD0", \
        "ENET1_RGMII_RXD1", \
        "ENET1_RGMII_RXD2", \
        "ENET1_RGMII_RXD3", \
        "COMP_CTL_GPIO_1V8_3V3_ENET_ENETA"
#endif

#endif /* SC_PAD_DATA_H */

