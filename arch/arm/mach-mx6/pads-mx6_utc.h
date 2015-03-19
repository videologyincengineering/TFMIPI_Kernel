#undef MX6PAD
#undef MX6NAME
#undef MX6

#ifdef FOR_DL_SOLO
#define MX6(a) MX6DL_##a
#define MX6PAD(a) MX6DL_PAD_##a
#define MX6NAME(a) mx6dl_solo_##a
#else
#define MX6(a) MX6Q_##a
#define MX6PAD(a) MX6Q_PAD_##a
#define MX6NAME(a) mx6q_##a
#endif

#define PAD_CTL_PIS(pull, impede, speed)	(PAD_CTL_PKE | PAD_CTL_PUE |	\
		PAD_CTL_PUS_##pull  | PAD_CTL_SPEED_##speed |		\
		PAD_CTL_DSE_##impede   | PAD_CTL_SRE_FAST  | PAD_CTL_HYS)

#define MX6Q_USDHC_PAD_CTRL_22KPU_34OHM_50MHZ	PAD_CTL_PIS(22K_UP, 34ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_22KPU_40OHM_50MHZ	PAD_CTL_PIS(22K_UP, 40ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_22KPU_48OHM_50MHZ	PAD_CTL_PIS(22K_UP, 48ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_22KPU_60OHM_50MHZ	PAD_CTL_PIS(22K_UP, 60ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_22KPU_80OHM_50MHZ	PAD_CTL_PIS(22K_UP, 80ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_22KPU_120OHM_50MHZ	PAD_CTL_PIS(22K_UP, 120ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_34OHM_50MHZ	PAD_CTL_PIS(47K_UP, 34ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_40OHM_50MHZ	PAD_CTL_PIS(47K_UP, 40ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_48OHM_50MHZ	PAD_CTL_PIS(47K_UP, 48ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_60OHM_50MHZ	PAD_CTL_PIS(47K_UP, 60ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_80OHM_50MHZ	PAD_CTL_PIS(47K_UP, 80ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_47KPU_120OHM_50MHZ	PAD_CTL_PIS(47K_UP, 120ohm, LOW)
#define MX6Q_USDHC_PAD_CTRL_50MHZ		MX6Q_USDHC_PAD_CTRL


#define MX6DL_USDHC_PAD_CTRL_22KPU_34OHM_50MHZ	PAD_CTL_PIS(22K_UP, 34ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_22KPU_40OHM_50MHZ	PAD_CTL_PIS(22K_UP, 40ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_22KPU_48OHM_50MHZ	PAD_CTL_PIS(22K_UP, 48ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_22KPU_60OHM_50MHZ	PAD_CTL_PIS(22K_UP, 60ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_22KPU_80OHM_50MHZ	PAD_CTL_PIS(22K_UP, 80ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_22KPU_120OHM_50MHZ	PAD_CTL_PIS(22K_UP, 120ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_34OHM_50MHZ	PAD_CTL_PIS(47K_UP, 34ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_40OHM_50MHZ	PAD_CTL_PIS(47K_UP, 40ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_48OHM_50MHZ	PAD_CTL_PIS(47K_UP, 48ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_60OHM_50MHZ	PAD_CTL_PIS(47K_UP, 60ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_80OHM_50MHZ	PAD_CTL_PIS(47K_UP, 80ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_47KPU_120OHM_50MHZ	PAD_CTL_PIS(47K_UP, 120ohm, LOW)
#define MX6DL_USDHC_PAD_CTRL_50MHZ		MX6DL_USDHC_PAD_CTRL

#define MX6Q_PAD_SD3_CLK__USDHC3_CLK	MX6Q_PAD_SD3_CLK__USDHC3_CLK_50MHZ
#define MX6Q_PAD_SD3_CMD__USDHC3_CMD	MX6Q_PAD_SD3_CMD__USDHC3_CMD_50MHZ
#define MX6Q_PAD_SD3_DAT0__USDHC3_DAT0	MX6Q_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ
#define MX6Q_PAD_SD3_DAT1__USDHC3_DAT1	MX6Q_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ
#define MX6Q_PAD_SD3_DAT2__USDHC3_DAT2	MX6Q_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ
#define MX6Q_PAD_SD3_DAT3__USDHC3_DAT3	MX6Q_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ
#define MX6Q_PAD_SD4_CLK__USDHC4_CLK	MX6Q_PAD_SD4_CLK__USDHC4_CLK_50MHZ
#define MX6Q_PAD_SD4_CMD__USDHC4_CMD	MX6Q_PAD_SD4_CMD__USDHC4_CMD_50MHZ
#define MX6Q_PAD_SD4_DAT0__USDHC4_DAT0	MX6Q_PAD_SD4_DAT0__USDHC4_DAT0_50MHZ
#define MX6Q_PAD_SD4_DAT1__USDHC4_DAT1	MX6Q_PAD_SD4_DAT1__USDHC4_DAT1_50MHZ
#define MX6Q_PAD_SD4_DAT2__USDHC4_DAT2	MX6Q_PAD_SD4_DAT2__USDHC4_DAT2_50MHZ
#define MX6Q_PAD_SD4_DAT3__USDHC4_DAT3	MX6Q_PAD_SD4_DAT3__USDHC4_DAT3_50MHZ
#define MX6Q_PAD_SD4_DAT4__USDHC4_DAT4	MX6Q_PAD_SD4_DAT4__USDHC4_DAT4_50MHZ
#define MX6Q_PAD_SD4_DAT5__USDHC4_DAT5	MX6Q_PAD_SD4_DAT5__USDHC4_DAT5_50MHZ
#define MX6Q_PAD_SD4_DAT6__USDHC4_DAT6	MX6Q_PAD_SD4_DAT6__USDHC4_DAT6_50MHZ
#define MX6Q_PAD_SD4_DAT7__USDHC4_DAT7	MX6Q_PAD_SD4_DAT7__USDHC4_DAT7_50MHZ


#define MX6DL_PAD_SD3_CLK__USDHC3_CLK	MX6DL_PAD_SD3_CLK__USDHC3_CLK_50MHZ
#define MX6DL_PAD_SD3_CMD__USDHC3_CMD	MX6DL_PAD_SD3_CMD__USDHC3_CMD_50MHZ
#define MX6DL_PAD_SD3_DAT0__USDHC3_DAT0	MX6DL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ
#define MX6DL_PAD_SD3_DAT1__USDHC3_DAT1	MX6DL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ
#define MX6DL_PAD_SD3_DAT2__USDHC3_DAT2	MX6DL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ
#define MX6DL_PAD_SD3_DAT3__USDHC3_DAT3	MX6DL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ
#define MX6DL_PAD_SD4_CLK__USDHC4_CLK	MX6DL_PAD_SD4_CLK__USDHC4_CLK_50MHZ
#define MX6DL_PAD_SD4_CMD__USDHC4_CMD	MX6DL_PAD_SD4_CMD__USDHC4_CMD_50MHZ
#define MX6DL_PAD_SD4_DAT0__USDHC4_DAT0	MX6DL_PAD_SD4_DAT0__USDHC4_DAT0_50MHZ
#define MX6DL_PAD_SD4_DAT1__USDHC4_DAT1	MX6DL_PAD_SD4_DAT1__USDHC4_DAT1_50MHZ
#define MX6DL_PAD_SD4_DAT2__USDHC4_DAT2	MX6DL_PAD_SD4_DAT2__USDHC4_DAT2_50MHZ
#define MX6DL_PAD_SD4_DAT3__USDHC4_DAT3	MX6DL_PAD_SD4_DAT3__USDHC4_DAT3_50MHZ
#define MX6DL_PAD_SD4_DAT4__USDHC4_DAT4	MX6DL_PAD_SD4_DAT4__USDHC4_DAT4_50MHZ
#define MX6DL_PAD_SD4_DAT5__USDHC4_DAT5	MX6DL_PAD_SD4_DAT5__USDHC4_DAT5_50MHZ
#define MX6DL_PAD_SD4_DAT6__USDHC4_DAT6	MX6DL_PAD_SD4_DAT6__USDHC4_DAT6_50MHZ
#define MX6DL_PAD_SD4_DAT7__USDHC4_DAT7	MX6DL_PAD_SD4_DAT7__USDHC4_DAT7_50MHZ

#define NP(id, pin, pad_ctl) \
	NEW_PAD_CTRL(MX6PAD(SD##id##_##pin##__USDHC##id##_##pin), MX6(pad_ctl))

#define SD_PINS(id, pad_ctl) \
	NP(id, CLK, pad_ctl),	\
	NP(id, CMD, pad_ctl),	\
	NP(id, DAT0, pad_ctl),	\
	NP(id, DAT1, pad_ctl),	\
	NP(id, DAT2, pad_ctl),	\
	NP(id, DAT3, pad_ctl)

#define SD_PINS8(id, pad_ctl) \
	SD_PINS(id, pad_ctl), \
	NP(id, DAT4, pad_ctl),	\
	NP(id, DAT5, pad_ctl),	\
	NP(id, DAT6, pad_ctl),	\
	NP(id, DAT7, pad_ctl)

static iomux_v3_cfg_t MX6NAME(utc_pads)[] = {
	/* AUDMUX */
	MX6PAD(CSI0_DAT7__AUDMUX_AUD3_RXD),
	MX6PAD(CSI0_DAT4__AUDMUX_AUD3_TXC),
	MX6PAD(CSI0_DAT5__AUDMUX_AUD3_TXD),
	MX6PAD(CSI0_DAT6__AUDMUX_AUD3_TXFS),

	/* CAN1  */
	MX6PAD(KEY_ROW2__CAN1_RXCAN),
	MX6PAD(KEY_COL2__CAN1_TXCAN),
	MX6PAD(GPIO_2__GPIO_1_2),		/* STNDBY */

	/* CCM  */
	MX6PAD(GPIO_0__CCM_CLKO),		/* SGTL500 sys_mclk */
	MX6PAD(GPIO_3__CCM_CLKO2),		/* J5 - Camera MCLK */

	/* ECSPI1 */
	MX6PAD(EIM_D17__ECSPI1_MISO),
	MX6PAD(EIM_D18__ECSPI1_MOSI),
	MX6PAD(EIM_D16__ECSPI1_SCLK),
	MX6PAD(EIM_D19__GPIO_3_19),	/*SS1*/

	/* ENET */
	MX6PAD(ENET_MDIO__ENET_MDIO),
	MX6PAD(ENET_MDC__ENET_MDC),

#define ENET_PAD_CTRL	(PAD_CTL_SPEED_MED | PAD_CTL_DSE_40ohm | PAD_CTL_HYS)

	NEW_PAD_CTRL(MX6PAD(RGMII_TXC__ENET_RGMII_TXC), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_TD0__ENET_RGMII_TD0), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_TD1__ENET_RGMII_TD1), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_TD2__ENET_RGMII_TD2), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_TD3__ENET_RGMII_TD3), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_TX_CTL__ENET_RGMII_TX_CTL), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(ENET_REF_CLK__ENET_TX_CLK), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RXC__ENET_RGMII_RXC), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RD0__ENET_RGMII_RD0), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RD1__ENET_RGMII_RD1), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RD2__ENET_RGMII_RD2), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RD3__ENET_RGMII_RD3), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(RGMII_RX_CTL__ENET_RGMII_RX_CTL), ENET_PAD_CTRL),
	MX6PAD(ENET_TX_EN__GPIO_1_28),		/* Atheros RGMII Phy Interrupt */
	MX6PAD(ENET_RXD0__GPIO_1_27),		/* Atheros RGMII Phy reset */

	/* GPIO1 */
	MX6PAD(GPIO_4__GPIO_1_4),		/* UGPIO5 */
//	MX6PAD(GPIO_6__GPIO_1_6),		/* UGPIO6/DO_NOT_USE */
	MX6PAD(GPIO_7__GPIO_1_7),		/* UGPIO7 */
	MX6PAD(GPIO_8__GPIO_1_8),		/* UGPIO8 */
	MX6PAD(GPIO_9__GPIO_1_9),		/* UGPIO9 */

	/* GPIO2 */
	MX6PAD(NANDF_D2__GPIO_2_2),		/* GPIO spare */
	MX6PAD(NANDF_D5__GPIO_2_5),		/* EMMC reset */
	NEW_PAD_CTRL(MX6PAD(EIM_LBA__GPIO_2_27), ISL1208_IRQ_PADCFG), /* RTC ISL1208 interrupt */
	MX6PAD(EIM_EB3__GPIO_2_31),		/* UGPIO10/CSI RGB GP */

	/* GPIO3 */
	MX6PAD(EIM_DA10__GPIO_3_10),		/* CSI RGB GP */
	MX6PAD(EIM_DA13__GPIO_3_13),		/* UGPIO13/PCIe reset */

	/* GPIO4 */
	MX6PAD(KEY_COL0__GPIO_4_6),		/* UGPIO0 */
	MX6PAD(KEY_ROW0__GPIO_4_7),		/* UGPIO1 */
	MX6PAD(KEY_COL1__GPIO_4_8),		/* UGPIO2 */
	MX6PAD(KEY_ROW1__GPIO_4_9),		/* UGPIO3/CSI RGB GP */
	MX6PAD(KEY_ROW4__GPIO_4_15),		/* UGPIO4 */

	/* GPIO5 */
	MX6PAD(EIM_WAIT__GPIO_5_0),		/* UGPIO12/Microphone Detect*/

	/* GPIO6 */
	MX6PAD(NANDF_ALE__GPIO_6_8),		/* GPIO spare */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS1__GPIO_6_14), WL1271_IRQ_PADCFG),	/* wl1271 wl_irq */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS2__GPIO_6_15), WL1271_EN_PADCFG),	/* wl1271 wl_en */
	NEW_PAD_CTRL(MX6PAD(NANDF_CS3__GPIO_6_16), WL1271_EN_PADCFG),	/* wl1271 bt_en */

	/* GPIO7 */
	MX6PAD(SD3_DAT4__GPIO_7_1),	/* GPIO spare */
	MX6PAD(GPIO_17__GPIO_7_12),	/* USB Hub Reset */

	/* I2C1, SGTL5000 */
	MX6PAD(EIM_D21__I2C1_SCL),	/* GPIO3[21] */
	MX6PAD(EIM_D28__I2C1_SDA),	/* GPIO3[28] */

	/* I2C2 Camera, MIPI */
	MX6PAD(KEY_COL3__I2C2_SCL),	/* GPIO4[12] */
	MX6PAD(KEY_ROW3__I2C2_SDA),	/* GPIO4[13] */

	/* I2C3 */
	MX6PAD(GPIO_5__I2C3_SCL),	/* GPIO1[5] - J7 - Display card */
	MX6PAD(GPIO_16__I2C3_SDA),	/* GPIO7[11] - J15 - RGB connector */

	/* DISPLAY */
	MX6PAD(DI0_DISP_CLK__IPU1_DI0_DISP_CLK),
	MX6PAD(DI0_PIN15__IPU1_DI0_PIN15),		/* DE */
	MX6PAD(DI0_PIN2__IPU1_DI0_PIN2),		/* HSync */
	MX6PAD(DI0_PIN3__IPU1_DI0_PIN3),		/* VSync */
	NEW_PAD_CTRL(MX6PAD(DI0_PIN4__GPIO_4_20),
		     WEAK_PULLUP),			/* I2C Touch IRQ */
	MX6PAD(DISP0_DAT0__IPU1_DISP0_DAT_0),
	MX6PAD(DISP0_DAT1__IPU1_DISP0_DAT_1),
	MX6PAD(DISP0_DAT2__IPU1_DISP0_DAT_2),
	MX6PAD(DISP0_DAT3__IPU1_DISP0_DAT_3),
	MX6PAD(DISP0_DAT4__IPU1_DISP0_DAT_4),
	MX6PAD(DISP0_DAT5__IPU1_DISP0_DAT_5),
	MX6PAD(DISP0_DAT6__IPU1_DISP0_DAT_6),
	MX6PAD(DISP0_DAT7__IPU1_DISP0_DAT_7),
	MX6PAD(DISP0_DAT8__IPU1_DISP0_DAT_8),
	MX6PAD(DISP0_DAT9__IPU1_DISP0_DAT_9),
	MX6PAD(DISP0_DAT10__IPU1_DISP0_DAT_10),
	MX6PAD(DISP0_DAT11__IPU1_DISP0_DAT_11),
	MX6PAD(DISP0_DAT12__IPU1_DISP0_DAT_12),
	MX6PAD(DISP0_DAT13__IPU1_DISP0_DAT_13),
	MX6PAD(DISP0_DAT14__IPU1_DISP0_DAT_14),
	MX6PAD(DISP0_DAT15__IPU1_DISP0_DAT_15),
	MX6PAD(DISP0_DAT16__IPU1_DISP0_DAT_16),
	MX6PAD(DISP0_DAT17__IPU1_DISP0_DAT_17),
	MX6PAD(DISP0_DAT18__IPU1_DISP0_DAT_18),
	MX6PAD(DISP0_DAT19__IPU1_DISP0_DAT_19),
	MX6PAD(DISP0_DAT20__IPU1_DISP0_DAT_20),
	MX6PAD(DISP0_DAT21__IPU1_DISP0_DAT_21),
	MX6PAD(DISP0_DAT22__IPU1_DISP0_DAT_22),
	MX6PAD(DISP0_DAT23__IPU1_DISP0_DAT_23),
	MX6PAD(NANDF_D0__GPIO_2_0),		/* J6 - LVDS Display contrast */


	/* PWM1 */
	MX6PAD(SD1_DAT3__PWM1_PWMO),		/* GPIO1[21] */

	/* PWM3 */
	MX6PAD(SD1_DAT1__PWM3_PWMO),		/* GPIO1[17] */

	/* PWM4 */
	MX6PAD(SD1_CMD__PWM4_PWMO),		/* GPIO1[18] */

	/* UART1  */
	MX6PAD(SD3_DAT7__UART1_TXD),
	MX6PAD(SD3_DAT6__UART1_RXD),

	/* UART2 for debug */
	MX6PAD(EIM_D26__UART2_TXD),
	MX6PAD(EIM_D27__UART2_RXD),

	/* UART3 for wl1271, (bluetoooth) */
	MX6PAD(EIM_D24__UART3_TXD),
	MX6PAD(EIM_D25__UART3_RXD),
	MX6PAD(EIM_D23__UART3_CTS),
	MX6PAD(EIM_D31__UART3_RTS),

	/* USBOTG ID pin */
	MX6PAD(GPIO_1__USBOTG_ID),

	/* USB OC pin */
	MX6PAD(KEY_COL4__USBOH3_USBOTG_OC),
	MX6PAD(EIM_D30__USBOH3_USBH1_OC),

	/* USDHC2, (WiFi) wl1271 */
	SD_PINS(2, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),
        MX6PAD(SD1_CLK__OSC32K_32K_OUT), /* wl1271 clock */

	/* USDHC3 */
	SD_PINS(3, USDHC_PAD_CTRL_47KPU_80OHM_50MHZ),
	MX6PAD(SD3_DAT5__GPIO_7_0),		/* J18 - SD3_CD */

	/* USDHC4 */
	SD_PINS8(4, USDHC_PAD_CTRL_50MHZ),
	0
};

#if defined(CONFIG_MXC_CAMERA_OV5640_MIPI) || defined(CONFIG_MXC_CAMERA_OV5640_MIPI_MODULE)
static iomux_v3_cfg_t MX6NAME(mipi_pads)[] = {
	MX6PAD(NANDF_WP_B__GPIO_6_9),		/* J16 - MIPI Powerdown  */
	MX6PAD(EIM_BCLK__GPIO_6_31),		/* J16 - MIPI camera reset */
	0
};
#endif

static iomux_v3_cfg_t MX6NAME(hdmi_ddc_pads)[] = {
	MX6PAD(KEY_COL3__HDMI_TX_DDC_SCL), /* HDMI DDC SCL */
	MX6PAD(KEY_ROW3__HDMI_TX_DDC_SDA), /* HDMI DDC SDA */
	0
};

static iomux_v3_cfg_t MX6NAME(i2c2_pads)[] = {
	MX6PAD(KEY_COL3__I2C2_SCL),	/* I2C2 SCL */
	MX6PAD(KEY_ROW3__I2C2_SDA),	/* I2C2 SDA */
	0
};

#define MX6_USDHC_PAD_SETTING(id, speed, pad_ctl)	\
		MX6NAME(sd##id##_##speed##mhz)[] = { SD_PINS(id, pad_ctl), 0 }

#define MX6_USDHC_PAD_SETTING8(id, speed, pad_ctl)	\
		MX6NAME(sd##id##_##speed##mhz)[] = { SD_PINS8(id, pad_ctl), 0 }

static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 50, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 50, USDHC_PAD_CTRL_47KPU_80OHM_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(3, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(4, 50, USDHC_PAD_CTRL_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(4, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(4, 200, USDHC_PAD_CTRL_200MHZ);

static iomux_v3_cfg_t * MX6NAME(sd_pads)[] =
{
	MX6NAME(sd2_50mhz),
	MX6NAME(sd2_100mhz),
	MX6NAME(sd2_200mhz),
	MX6NAME(sd3_50mhz),
	MX6NAME(sd3_100mhz),
	MX6NAME(sd3_200mhz),
	MX6NAME(sd4_50mhz),
	MX6NAME(sd4_100mhz),
	MX6NAME(sd4_200mhz),
};
