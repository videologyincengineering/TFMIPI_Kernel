#undef MX6PAD
#undef MX6NAME
#undef MX6

//#define ONE_WIRE

#ifdef FOR_DL_SOLO
#define MX6(a) MX6DL_##a
#define MX6PAD(a) MX6DL_PAD_##a
#define MX6NAME(a) mx6dl_solo_##a
#else
#define MX6(a) MX6Q_##a
#define MX6PAD(a) MX6Q_PAD_##a
#define MX6NAME(a) mx6q_##a
#endif

#define PADCFG_INPUT	(PAD_CTL_SPEED_MED | PAD_CTL_DSE_40ohm | PAD_CTL_HYS)
#define PADCFG_INPUT_DN	(PADCFG_INPUT | PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_100K_DOWN)
#define PADCFG_INPUT_UP	(PADCFG_INPUT | PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_100K_UP)

#define CSI_PAD_CTRL	(PADCFG_INPUT_UP | PAD_CTL_SRE_FAST)
#define UART_PAD_CTRL	(PADCFG_INPUT_UP | PAD_CTL_SRE_FAST)
#define WEAK_PULLDN	PADCFG_INPUT_DN
#define ENET_PAD_CTRL	(PADCFG_INPUT | PAD_CTL_PUS_100K_UP)
#define SPI_PAD_CTRL	(PADCFG_INPUT | PAD_CTL_SRE_FAST)


#define PADCFG_FLOAT_IRQ (PADCFG_INPUT | PAD_CTL_PUE | PAD_CTL_PUS_100K_DOWN)
#define WEAK_PULLUP	(PADCFG_INPUT | PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_100K_UP)
#define STRONG_PULLUP	(PADCFG_INPUT | PAD_CTL_PKE | PAD_CTL_PUE | PAD_CTL_PUS_22K_UP)
#define OUTPUT_40OHM	(PAD_CTL_SPEED_MED | PAD_CTL_DSE_40ohm)

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
#define MX6Q_PAD_SD3_DAT4__USDHC3_DAT4	MX6Q_PAD_SD3_DAT4__USDHC3_DAT4_50MHZ
#define MX6Q_PAD_SD3_DAT5__USDHC3_DAT5	MX6Q_PAD_SD3_DAT5__USDHC3_DAT5_50MHZ
#define MX6Q_PAD_SD3_DAT6__USDHC3_DAT6	MX6Q_PAD_SD3_DAT6__USDHC3_DAT6_50MHZ
#define MX6Q_PAD_SD3_DAT7__USDHC3_DAT7	MX6Q_PAD_SD3_DAT7__USDHC3_DAT7_50MHZ

#define MX6DL_PAD_SD3_CLK__USDHC3_CLK	MX6DL_PAD_SD3_CLK__USDHC3_CLK_50MHZ
#define MX6DL_PAD_SD3_CMD__USDHC3_CMD	MX6DL_PAD_SD3_CMD__USDHC3_CMD_50MHZ
#define MX6DL_PAD_SD3_DAT0__USDHC3_DAT0	MX6DL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ
#define MX6DL_PAD_SD3_DAT1__USDHC3_DAT1	MX6DL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ
#define MX6DL_PAD_SD3_DAT2__USDHC3_DAT2	MX6DL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ
#define MX6DL_PAD_SD3_DAT3__USDHC3_DAT3	MX6DL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ
#define MX6DL_PAD_SD3_DAT4__USDHC3_DAT4	MX6DL_PAD_SD3_DAT4__USDHC3_DAT4_50MHZ
#define MX6DL_PAD_SD3_DAT5__USDHC3_DAT5	MX6DL_PAD_SD3_DAT5__USDHC3_DAT5_50MHZ
#define MX6DL_PAD_SD3_DAT6__USDHC3_DAT6	MX6DL_PAD_SD3_DAT6__USDHC3_DAT6_50MHZ
#define MX6DL_PAD_SD3_DAT7__USDHC3_DAT7	MX6DL_PAD_SD3_DAT7__USDHC3_DAT7_50MHZ

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

static iomux_v3_cfg_t MX6NAME(board_pads)[] = {
	/* Adv7391 - I2C3 */
#define GP_ADV7391_RESET	IMX_GPIO_NR(4, 20)
	MX6PAD(DI0_PIN4__GPIO_4_20),		/* Adv7391 reset */

	/* ECSPI1 */
	NEW_PAD_CTRL(MX6PAD(EIM_D17__ECSPI1_MISO), SPI_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(EIM_D18__ECSPI1_MOSI), SPI_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(EIM_D16__ECSPI1_SCLK), SPI_PAD_CTRL),
#define GP_ECSPI1_CS1		IMX_GPIO_NR(3, 19)
	NEW_PAD_CTRL(MX6PAD(EIM_D19__GPIO_3_19), WEAK_PULLUP),		/* SS1 */

	/* ECSPI3 - GS2971 */
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT2__ECSPI3_MISO), SPI_PAD_CTRL),		/* pin E7 - SDOUT */
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT1__ECSPI3_MOSI), SPI_PAD_CTRL),		/* pin E8 - SDIN */
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT0__ECSPI3_SCLK), SPI_PAD_CTRL),		/* pin F8 - SCLK */
#define GP_ECSPI3_GS2971_CS	IMX_GPIO_NR(4, 24)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT3__GPIO_4_24), WEAK_PULLUP),		/* 0 - pin F7 - CS0 */

	/* ENET - micrel 9021 - J85 */
	NEW_PAD_CTRL(MX6PAD(ENET_MDIO__ENET_MDIO), ENET_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(ENET_MDC__ENET_MDC), ENET_PAD_CTRL),
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
#define GP_ENET_PHY_RESET	IMX_GPIO_NR(1, 27)
	MX6PAD(ENET_RXD0__GPIO_1_27),		/* Micrel RGMII Phy Reset */
#define GP_ENET_PHY_INT		IMX_GPIO_NR(1, 28)
	MX6PAD(ENET_TX_EN__GPIO_1_28),		/* Micrel RGMII Phy Interrupt */

	/* gpios J91  */
	/* grounds, 1,2,11,12,29,46,47,48,49,50 */
#define GP_BT_GPIO1	IMX_GPIO_NR(2, 15)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT7__GPIO_2_15), WEAK_PULLUP),		/* bt_gpio1, pin 3 */
#define GP_BT_GPIO2	IMX_GPIO_NR(2, 14)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT6__GPIO_2_14), WEAK_PULLUP),		/* bt_gpio2, pin 4 */
#define GP_BT_GPIO3	IMX_GPIO_NR(2, 13)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT5__GPIO_2_13), WEAK_PULLUP),		/* bt_gpio3, pin 5 */
#define GP_BT_GPIO4	IMX_GPIO_NR(2, 12)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT4__GPIO_2_12), WEAK_PULLUP),		/* bt_gpio4, pin 6 */
#define GP_BT_GPIO5	IMX_GPIO_NR(2, 11)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT3__GPIO_2_11), WEAK_PULLUP),		/* bt_gpio5, pin 7 */
#define GP_BT_GPIO6	IMX_GPIO_NR(2, 10)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT2__GPIO_2_10), WEAK_PULLUP),		/* bt_gpio6, pin 8 */
#define GP_BT_GPIO7	IMX_GPIO_NR(2, 9)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT1__GPIO_2_9), WEAK_PULLUP),		/* bt_gpio7, pin 9 */
#define GP_BT_GPIO8	IMX_GPIO_NR(2, 8)
	NEW_PAD_CTRL(MX6PAD(SD4_DAT0__GPIO_2_8), WEAK_PULLUP),		/* bt_gpio8, pin 10 */
#define GP_BT_GPIO9	IMX_GPIO_NR(7, 9)
	NEW_PAD_CTRL(MX6PAD(SD4_CMD__GPIO_7_9), WEAK_PULLUP),		/* bt_gpio9, pin 13 */
#define GP_BT_GPIO10	IMX_GPIO_NR(7, 10)
	NEW_PAD_CTRL(MX6PAD(SD4_CLK__GPIO_7_10), WEAK_PULLUP),		/* bt_gpio10, pin 14 */
#define GP_BT_GPIO11	IMX_GPIO_NR(2, 7)
	NEW_PAD_CTRL(MX6PAD(NANDF_D7__GPIO_2_7), WEAK_PULLUP),		/* bt_gpio11, pin 15 */
#define GP_BT_GPIO12	IMX_GPIO_NR(2, 6)
	NEW_PAD_CTRL(MX6PAD(NANDF_D6__GPIO_2_6), WEAK_PULLUP),		/* bt_gpio12, pin 16 */
#define GP_BT_GPIO13	IMX_GPIO_NR(2, 5)
	NEW_PAD_CTRL(MX6PAD(NANDF_D5__GPIO_2_5), WEAK_PULLUP),		/* bt_gpio13, pin 17 */
#define GP_BT_GPIO14	IMX_GPIO_NR(2, 4)
	NEW_PAD_CTRL(MX6PAD(NANDF_D4__GPIO_2_4), WEAK_PULLUP),		/* bt_gpio14, pin 18 */
#define GP_BT_GPIO15	IMX_GPIO_NR(2, 3)
	NEW_PAD_CTRL(MX6PAD(NANDF_D3__GPIO_2_3), WEAK_PULLUP),		/* bt_gpio15, pin 19 */
#define GP_BT_GPIO16	IMX_GPIO_NR(2, 2)
	NEW_PAD_CTRL(MX6PAD(NANDF_D2__GPIO_2_2), WEAK_PULLUP),		/* bt_gpio16, pin 20 */
#define GP_BT_GPIO17	IMX_GPIO_NR(2, 1)
	NEW_PAD_CTRL(MX6PAD(NANDF_D1__GPIO_2_1), WEAK_PULLUP),		/* bt_gpio17, pin 21 */
#define GP_BT_GPIO18	IMX_GPIO_NR(2, 0)
	NEW_PAD_CTRL(MX6PAD(NANDF_D0__GPIO_2_0), WEAK_PULLUP),		/* bt_gpio18, pin 22 */
#define GP_BT_GPIO19	IMX_GPIO_NR(6, 10)
	NEW_PAD_CTRL(MX6PAD(NANDF_RB0__GPIO_6_10), WEAK_PULLUP),	/* bt_gpio19, pin 23 */
#define GP_BT_GPIO20	IMX_GPIO_NR(6, 9)
	NEW_PAD_CTRL(MX6PAD(NANDF_WP_B__GPIO_6_9), WEAK_PULLUP),	/* bt_gpio20, pin 24 */
#define GP_BT_GPIO21	IMX_GPIO_NR(6, 7)
	NEW_PAD_CTRL(MX6PAD(NANDF_CLE__GPIO_6_7), WEAK_PULLUP),		/* bt_gpio21, pin 25 */
#define GP_BT_GPIO22	IMX_GPIO_NR(6, 8)
	NEW_PAD_CTRL(MX6PAD(NANDF_ALE__GPIO_6_8), WEAK_PULLUP),		/* bt_gpio22, pin 26 */
#define GP_BT_GPIO23	IMX_GPIO_NR(6, 16)
	NEW_PAD_CTRL(MX6PAD(NANDF_CS3__GPIO_6_16), WEAK_PULLUP),	/* bt_gpio23, pin 27 */
#define GP_BT_GPIO24	IMX_GPIO_NR(6, 15)
	NEW_PAD_CTRL(MX6PAD(NANDF_CS2__GPIO_6_15), WEAK_PULLUP),	/* bt_gpio24, pin 28 */
#define GP_BT_GPIO25	IMX_GPIO_NR(6, 14)
	NEW_PAD_CTRL(MX6PAD(NANDF_CS1__GPIO_6_14), WEAK_PULLUP),	/* bt_gpio25, pin 30 */
#define GP_BT_GPIO26	IMX_GPIO_NR(6, 11)
	NEW_PAD_CTRL(MX6PAD(NANDF_CS0__GPIO_6_11), WEAK_PULLUP),	/* bt_gpio26, pin 31 */
#define GP_BT_GPIO27	IMX_GPIO_NR(5, 30)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT12__GPIO_5_30), WEAK_PULLUP),	/* bt_gpio27, pin 32 */
#define GP_BT_GPIO28	IMX_GPIO_NR(5, 31)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT13__GPIO_5_31), WEAK_PULLUP),	/* bt_gpio28, pin 33 */
#define GP_BT_GPIO29	IMX_GPIO_NR(5, 24)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT6__GPIO_5_24), WEAK_PULLUP),	/* bt_gpio29, pin 34 */
#define GP_BT_GPIO30	IMX_GPIO_NR(5, 25)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT7__GPIO_5_25), WEAK_PULLUP),	/* bt_gpio30, pin 35 */
#define GP_BT_GPIO31	IMX_GPIO_NR(6, 2)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT16__GPIO_6_2), WEAK_PULLUP),	/* bt_gpio31, pin 36 */
#define GP_BT_GPIO32	IMX_GPIO_NR(6, 3)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT17__GPIO_6_3), WEAK_PULLUP),	/* bt_gpio32, pin 37 */
#define GP_BT_GPIO33	IMX_GPIO_NR(6, 4)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT18__GPIO_6_4), WEAK_PULLUP),	/* bt_gpio33, pin 38 */
#define GP_BT_GPIO34	IMX_GPIO_NR(6, 5)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT19__GPIO_6_5), WEAK_PULLUP),	/* bt_gpio34, pin 39 */
#define GP_BT_GPIO35	IMX_GPIO_NR(5, 2)
	NEW_PAD_CTRL(MX6PAD(EIM_A25__GPIO_5_2), WEAK_PULLUP),		/* bt_gpio35, pin 40 */
#define GP_BT_GPIO36	IMX_GPIO_NR(3, 29)
	NEW_PAD_CTRL(MX6PAD(EIM_D29__GPIO_3_29), WEAK_PULLUP),		/* bt_gpio36, pin 41 */
#define GP_BT_GPIO37	IMX_GPIO_NR(2, 30)
	NEW_PAD_CTRL(MX6PAD(EIM_EB2__GPIO_2_30), WEAK_PULLUP),		/* bt_gpio37, pin 42 */
#define GP_BT_GPIO38	IMX_GPIO_NR(2, 31)
	NEW_PAD_CTRL(MX6PAD(EIM_EB3__GPIO_2_31), WEAK_PULLUP),		/* bt_gpio38, pin 43 */
#define GP_BT_GPIO39	IMX_GPIO_NR(5, 26)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT8__GPIO_5_26), WEAK_PULLUP),	/* bt_gpio39, pin 44 */
#define GP_BT_GPIO40	IMX_GPIO_NR(5, 27)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT9__GPIO_5_27), WEAK_PULLUP),	/* bt_gpio40, pin 45 */


	/* I2C1, RTC RV4162 */
	MX6PAD(EIM_D21__I2C1_SCL),	/* GPIO3[21] */
	MX6PAD(EIM_D28__I2C1_SDA),	/* GPIO3[28] */

	/* I2C2, sc16is752 serial ports, HDMI edid */
	MX6PAD(KEY_COL3__I2C2_SCL),	/* GPIO4[12] */
	MX6PAD(KEY_ROW3__I2C2_SDA),	/* GPIO4[13] */

	/* I2C3, ADV7391 */
	MX6PAD(GPIO_5__I2C3_SCL),	/* GPIO1[5]  */
	MX6PAD(GPIO_16__I2C3_SDA),	/* GPIO7[11] */

	/* Power control, high is off */
	/* Pull-up so that reset will leave high */
#define GP_PWR_J1	IMX_GPIO_NR(5, 9)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT15__GPIO_5_9), WEAK_PULLUP),	/* J1 Power enable */
#define GP_PWR_J2	IMX_GPIO_NR(4, 25)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT4__GPIO_4_25), WEAK_PULLUP),	/* J2 */
#define GP_PWR_J3	IMX_GPIO_NR(2, 23)
	NEW_PAD_CTRL(MX6PAD(EIM_CS0__GPIO_2_23), WEAK_PULLUP),		/* J3 */
#define GP_PWR_J4	IMX_GPIO_NR(2, 25)
	NEW_PAD_CTRL(MX6PAD(EIM_OE__GPIO_2_25), WEAK_PULLUP),		/* J4 */
#define GP_PWR_J6	IMX_GPIO_NR(2, 26)
	NEW_PAD_CTRL(MX6PAD(EIM_RW__GPIO_2_26), WEAK_PULLUP),		/* J6 */
#define GP_PWR_J7	IMX_GPIO_NR(2, 27)
	NEW_PAD_CTRL(MX6PAD(EIM_LBA__GPIO_2_27), WEAK_PULLUP),		/* J7 */

	/* J92 pins */
#define GP_J92_PIN7	IMX_GPIO_NR(3, 31)
	NEW_PAD_CTRL(MX6PAD(EIM_D31__GPIO_3_31), WEAK_PULLUP),		/* OUT_1 - Dry contact to J92 pin 7 */
#define GP_J92_PIN9	IMX_GPIO_NR(1, 8)
	NEW_PAD_CTRL(MX6PAD(GPIO_8__GPIO_1_8), WEAK_PULLDN),		/* OUT_2 - Dry contact to J92 pin 9 */
#define GP_J92_PIN10	IMX_GPIO_NR(5, 22)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT4__GPIO_5_22), WEAK_PULLUP),	/* GPI_1 - J92 - pin 10 */
#define GP_J92_PIN12	IMX_GPIO_NR(5, 23)
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT5__GPIO_5_23), WEAK_PULLUP),	/* GPI_2 - J92 - pin 12 */

	/*
	 * PCIe - tw6869 dedicated,
	 * VIN1-4 used,
	 * AIN1-2 amplified, AIN3-4 not amplified
	 */
#define GP_PCIE_RESET		IMX_GPIO_NR(4, 8)
	NEW_PAD_CTRL(MX6PAD(KEY_COL1__GPIO_4_8), OUTPUT_40OHM),

	/* rtc - i2c1 */
#define GP_RTC_RV4162_IRQ	IMX_GPIO_NR(4, 11)
	NEW_PAD_CTRL(MX6PAD(KEY_ROW2__GPIO_4_11), WEAK_PULLUP),

	/* SDI - gs2971 on CSI1 */
#ifdef FOR_DL_SOLO
	/* Dualite/Solo doesn't have IPU2 */
	NEW_PAD_CTRL(MX6PAD(EIM_A24__IPU1_CSI1_D_19), CSI_PAD_CTRL),	/* GPIO2[30] */
	NEW_PAD_CTRL(MX6PAD(EIM_A23__IPU1_CSI1_D_18), CSI_PAD_CTRL),	/* GPIO6[6] */
	NEW_PAD_CTRL(MX6PAD(EIM_A22__IPU1_CSI1_D_17), CSI_PAD_CTRL),	/* GPIO2[16] */
	NEW_PAD_CTRL(MX6PAD(EIM_A21__IPU1_CSI1_D_16), CSI_PAD_CTRL),	/* GPIO2[17] */
	NEW_PAD_CTRL(MX6PAD(EIM_A20__IPU1_CSI1_D_15), CSI_PAD_CTRL),	/* GPIO2[18] */
	NEW_PAD_CTRL(MX6PAD(EIM_A19__IPU1_CSI1_D_14), CSI_PAD_CTRL),	/* GPIO2[19] */
	NEW_PAD_CTRL(MX6PAD(EIM_A18__IPU1_CSI1_D_13), CSI_PAD_CTRL),	/* GPIO2[20] */
	NEW_PAD_CTRL(MX6PAD(EIM_A17__IPU1_CSI1_D_12), CSI_PAD_CTRL),	/* GPIO2[21] */
	NEW_PAD_CTRL(MX6PAD(EIM_EB0__IPU1_CSI1_D_11), CSI_PAD_CTRL),	/* GPIO2[28] */
	NEW_PAD_CTRL(MX6PAD(EIM_EB1__IPU1_CSI1_D_10), CSI_PAD_CTRL),	/* GPIO2[29] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA0__IPU1_CSI1_D_9), CSI_PAD_CTRL),		/* GPIO3[0] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA1__IPU1_CSI1_D_8), CSI_PAD_CTRL),		/* GPIO3[1] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA2__IPU1_CSI1_D_7), CSI_PAD_CTRL),		/* GPIO3[2] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA3__IPU1_CSI1_D_6), CSI_PAD_CTRL),		/* GPIO3[3] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA4__IPU1_CSI1_D_5), CSI_PAD_CTRL),		/* GPIO3[4] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA5__IPU1_CSI1_D_4), CSI_PAD_CTRL),		/* GPIO3[5] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA6__IPU1_CSI1_D_3), CSI_PAD_CTRL),		/* GPIO3[6] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA7__IPU1_CSI1_D_2), CSI_PAD_CTRL),		/* GPIO3[7] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA8__IPU1_CSI1_D_1), CSI_PAD_CTRL),		/* GPIO3[8] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA9__IPU1_CSI1_D_0), CSI_PAD_CTRL),		/* GPIO3[9] */
	NEW_PAD_CTRL(MX6PAD(EIM_A16__IPU1_CSI1_PIXCLK), CSI_PAD_CTRL),	/* GPIO2[22] */
#else
	NEW_PAD_CTRL(MX6PAD(EIM_A24__IPU2_CSI1_D_19), CSI_PAD_CTRL),	/* GPIO2[30] */
	NEW_PAD_CTRL(MX6PAD(EIM_A23__IPU2_CSI1_D_18), CSI_PAD_CTRL),	/* GPIO6[6] */
	NEW_PAD_CTRL(MX6PAD(EIM_A22__IPU2_CSI1_D_17), CSI_PAD_CTRL),	/* GPIO2[16] */
	NEW_PAD_CTRL(MX6PAD(EIM_A21__IPU2_CSI1_D_16), CSI_PAD_CTRL),	/* GPIO2[17] */
	NEW_PAD_CTRL(MX6PAD(EIM_A20__IPU2_CSI1_D_15), CSI_PAD_CTRL),	/* GPIO2[18] */
	NEW_PAD_CTRL(MX6PAD(EIM_A19__IPU2_CSI1_D_14), CSI_PAD_CTRL),	/* GPIO2[19] */
	NEW_PAD_CTRL(MX6PAD(EIM_A18__IPU2_CSI1_D_13), CSI_PAD_CTRL),	/* GPIO2[20] */
	NEW_PAD_CTRL(MX6PAD(EIM_A17__IPU2_CSI1_D_12), CSI_PAD_CTRL),	/* GPIO2[21] */
	NEW_PAD_CTRL(MX6PAD(EIM_EB0__IPU2_CSI1_D_11), CSI_PAD_CTRL),	/* GPIO2[28] */
	NEW_PAD_CTRL(MX6PAD(EIM_EB1__IPU2_CSI1_D_10), CSI_PAD_CTRL),	/* GPIO2[29] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA0__IPU2_CSI1_D_9), CSI_PAD_CTRL),		/* GPIO3[0] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA1__IPU2_CSI1_D_8), CSI_PAD_CTRL),		/* GPIO3[1] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA2__IPU2_CSI1_D_7), CSI_PAD_CTRL),		/* GPIO3[2] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA3__IPU2_CSI1_D_6), CSI_PAD_CTRL),		/* GPIO3[3] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA4__IPU2_CSI1_D_5), CSI_PAD_CTRL),		/* GPIO3[4] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA5__IPU2_CSI1_D_4), CSI_PAD_CTRL),		/* GPIO3[5] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA6__IPU2_CSI1_D_3), CSI_PAD_CTRL),		/* GPIO3[6] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA7__IPU2_CSI1_D_2), CSI_PAD_CTRL),		/* GPIO3[7] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA8__IPU2_CSI1_D_1), CSI_PAD_CTRL),		/* GPIO3[8] */
	NEW_PAD_CTRL(MX6PAD(EIM_DA9__IPU2_CSI1_D_0), CSI_PAD_CTRL),		/* GPIO3[9] */
	NEW_PAD_CTRL(MX6PAD(EIM_A16__IPU2_CSI1_PIXCLK), CSI_PAD_CTRL),	/* GPIO2[22] - pin A8 */
#endif

	/* Not used, but MUST be in GPIO mode */
	NEW_PAD_CTRL(MX6PAD(EIM_DA10__GPIO_3_10), WEAK_PULLUP),		/* IPU2_CSI1_DATA_EN not used (pin B5 stat2) */

#define GP_GS2971_SMPTE_BYPASS	IMX_GPIO_NR(2, 24)
	NEW_PAD_CTRL(MX6PAD(EIM_CS1__GPIO_2_24), WEAK_PULLUP),		/* pin G7 - i/o SMPTE bypass */
#define GP_GS2971_RESET		IMX_GPIO_NR(3, 13)
	NEW_PAD_CTRL(MX6PAD(EIM_DA13__GPIO_3_13), OUTPUT_40OHM),	/* 0 - pin C7 - reset */
#define GP_GS2971_DVI_LOCK	IMX_GPIO_NR(3, 14)
	NEW_PAD_CTRL(MX6PAD(EIM_DA14__GPIO_3_14), WEAK_PULLUP),		/* pin B6 - stat3 - DVI_LOCK */
#define GP_GS2971_DATA_ERR	IMX_GPIO_NR(3, 15)
	NEW_PAD_CTRL(MX6PAD(EIM_DA15__GPIO_3_15), WEAK_PULLUP),		/* pin C6 - stat5 - DATA error */
#define GP_GS2971_LB_CONT	IMX_GPIO_NR(3, 20)
	NEW_PAD_CTRL(MX6PAD(EIM_D20__GPIO_3_20), WEAK_PULLUP),		/* pin A3 - LB control - float, analog input */
#define GP_GS2971_Y_1ANC	IMX_GPIO_NR(4, 26)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT5__GPIO_4_26), WEAK_PULLUP),	/* pin C5 - stat4 - 1ANC - Y signal detect */
#define GP_GS2971_RC_BYPASS	IMX_GPIO_NR(4, 27)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT6__GPIO_4_27), OUTPUT_40OHM),	/* 0 - pin G3 - RC bypass - output is buffered(low) */
#define GP_GS2971_IOPROC_EN	IMX_GPIO_NR(4, 28)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT7__GPIO_4_28), OUTPUT_40OHM),	/* 0 - pin H8 - io(A/V) processor enable */
#define GP_GS2971_AUDIO_EN	IMX_GPIO_NR(4, 29)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT8__GPIO_4_29), OUTPUT_40OHM),	/* 0 - pin H3 - Audio Enable */
#define GP_GS2971_TIM_861	IMX_GPIO_NR(4, 30)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT9__GPIO_4_30), OUTPUT_40OHM),	/* 0 - pin H5 - TIM861 timing format, 0-use HSYNC/VSYNC */
#define GP_GS2971_SW_EN		IMX_GPIO_NR(4, 31)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT10__GPIO_4_31), OUTPUT_40OHM),	/* 0 - pin D7 - SW_EN - line lock enable */
#define GP_GS2971_STANDBY	IMX_GPIO_NR(5, 0)
	NEW_PAD_CTRL(MX6PAD(EIM_WAIT__GPIO_5_0), OUTPUT_40OHM),		/* 1 - pin K2 - Standby */
#define GP_GS2971_DVB_ASI	IMX_GPIO_NR(5, 5)
	NEW_PAD_CTRL(MX6PAD(DISP0_DAT11__GPIO_5_5), WEAK_PULLUP),	/* pin G8 i/o DVB_ASI */

	MX6PAD(KEY_ROW1__AUDMUX_AUD5_RXD),		/* pin J3 - AOUT1/2 */
	MX6PAD(DISP0_DAT14__AUDMUX_AUD5_RXC),		/* pin J4 - ACLK*/
	MX6PAD(DISP0_DAT13__AUDMUX_AUD5_RXFS),		/* pin H4 - WCLK*/

	/* UART1  */
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT10__UART1_TXD), UART_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT11__UART1_RXD), UART_PAD_CTRL),

	/* UART2 for debug */
	NEW_PAD_CTRL(MX6PAD(EIM_D26__UART2_TXD), UART_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(EIM_D27__UART2_RXD), UART_PAD_CTRL),

	/* UART3 */
	NEW_PAD_CTRL(MX6PAD(EIM_D24__UART3_TXD), UART_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(EIM_D25__UART3_RXD), UART_PAD_CTRL),

	/* UART4 */
	NEW_PAD_CTRL(MX6PAD(KEY_COL0__UART4_TXD), UART_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(KEY_ROW0__UART4_RXD), UART_PAD_CTRL),

	/* UART5 */
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT14__UART5_TXD), UART_PAD_CTRL),
	NEW_PAD_CTRL(MX6PAD(CSI0_DAT15__UART5_RXD), UART_PAD_CTRL),

	/* UART6/7 on sc16is752 on i2c2 */
#define GP_SC16IS752_IRQ		IMX_GPIO_NR(4, 10)
	NEW_PAD_CTRL(MX6PAD(KEY_COL2__GPIO_4_10), STRONG_PULLUP),		/* irq */

	/* USBH1 */
	MX6PAD(EIM_D30__USBOH3_USBH1_OC),
#define GP_USB_HUB_RESET	IMX_GPIO_NR(7, 12)
	MX6PAD(GPIO_17__GPIO_7_12),	/* USB Hub Reset for USB2512 4 port hub */
	/*
	 * port1 - 10/100 ethernet using AX88772A on J90
	 * port2 - usb connector on J26
	 * port3 - usb connector on J25
	 * port4 - usb connector on J96
	 */
#define GP_AX88772A_RESET	IMX_GPIO_NR(5, 20)
	NEW_PAD_CTRL(MX6PAD(CSI0_DATA_EN__GPIO_5_20), OUTPUT_40OHM),

	/* USBOTG - J80 */
	MX6PAD(GPIO_1__USBOTG_ID),
	MX6PAD(KEY_COL4__USBOH3_USBOTG_OC),
#define GP_USB_OTG_PWR		IMX_GPIO_NR(3, 22)
	NEW_PAD_CTRL(MX6PAD(EIM_D22__GPIO_3_22), OUTPUT_40OHM),

	/* USDHC1: Full size SD card holder - J88 */
	SD_PINS(1, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),
#define GP_SD1_CD		IMX_GPIO_NR(1, 4)
	NEW_PAD_CTRL(MX6PAD(GPIO_4__GPIO_1_4), WEAK_PULLUP),
#define GP_SD1_WP		IMX_GPIO_NR(1, 2)
	NEW_PAD_CTRL(MX6PAD(GPIO_2__GPIO_1_2), WEAK_PULLUP),
/* Needs to invert and use key_col1 */
#define GP_SD1_POWER_SEL	IMX_GPIO_NR(7, 13)		/* low 1.8V, high 3.3V */
	NEW_PAD_CTRL(MX6PAD(GPIO_18__GPIO_7_13), OUTPUT_40OHM),

	/* USDHC2:  micro sd - J87 */
	SD_PINS(2, USDHC_PAD_CTRL_22KPU_40OHM_50MHZ),
#define GP_SD2_CD		IMX_GPIO_NR(3, 23)
	NEW_PAD_CTRL(MX6PAD(EIM_D23__GPIO_3_23), WEAK_PULLUP),

	/* USDHC3 - eMMC */
	SD_PINS8(3, USDHC_PAD_CTRL_47KPU_80OHM_50MHZ),
#define GP_EMMC_RESET	IMX_GPIO_NR(7, 8)
	MX6PAD(SD3_RST__GPIO_7_8),		/* eMMC reset */

	0
};

static iomux_v3_cfg_t MX6NAME(lcd_pads_enable)[] = {
	MX6PAD(DI0_DISP_CLK__IPU1_DI0_DISP_CLK),
	MX6PAD(DI0_PIN2__IPU1_DI0_PIN2),		/* HSync */
	MX6PAD(DI0_PIN3__IPU1_DI0_PIN3),		/* VSync */
	MX6PAD(DISP0_DAT16__IPU1_DISP0_DAT_16),
	MX6PAD(DISP0_DAT17__IPU1_DISP0_DAT_17),
	MX6PAD(DISP0_DAT18__IPU1_DISP0_DAT_18),
	MX6PAD(DISP0_DAT19__IPU1_DISP0_DAT_19),
	MX6PAD(DISP0_DAT20__IPU1_DISP0_DAT_20),
	MX6PAD(DISP0_DAT21__IPU1_DISP0_DAT_21),
	MX6PAD(DISP0_DAT22__IPU1_DISP0_DAT_22),
	MX6PAD(DISP0_DAT23__IPU1_DISP0_DAT_23),
	0
};

static iomux_v3_cfg_t MX6NAME(lcd_pads_disable)[] = {
	MX6PAD(DI0_DISP_CLK__GPIO_4_16),
	MX6PAD(DI0_PIN2__GPIO_4_18),			/* HSync */
	MX6PAD(DI0_PIN3__GPIO_4_19),			/* VSync */
	MX6PAD(DISP0_DAT16__GPIO_5_10),
	MX6PAD(DISP0_DAT17__GPIO_5_11),
	MX6PAD(DISP0_DAT18__GPIO_5_12),
	MX6PAD(DISP0_DAT19__GPIO_5_13),
	MX6PAD(DISP0_DAT20__GPIO_5_14),
	MX6PAD(DISP0_DAT21__GPIO_5_15),
	MX6PAD(DISP0_DAT22__GPIO_5_16),
	MX6PAD(DISP0_DAT23__GPIO_5_17),
	0
};

static iomux_v3_cfg_t MX6NAME(gs2971_video_pads_no_cea861)[] = {
	/* sav/eav codes are used */
	NEW_PAD_CTRL(MX6PAD(EIM_DA11__GPIO_3_11), WEAK_PULLUP),	/* pin A5 stat0 */
	NEW_PAD_CTRL(MX6PAD(EIM_DA12__GPIO_3_12), WEAK_PULLUP),	/* pin A6 stat1 */
	0
};

static iomux_v3_cfg_t MX6NAME(gs2971_video_pads_cea861)[] = {
	/* hsync/vsync are used, not sav/eav codes */
#ifdef FOR_DL_SOLO
	NEW_PAD_CTRL(MX6PAD(EIM_DA11__IPU1_CSI1_HSYNC), CSI_PAD_CTRL),	/* GPIO3[11] - pin A5 stat0 */
	NEW_PAD_CTRL(MX6PAD(EIM_DA12__IPU1_CSI1_VSYNC), CSI_PAD_CTRL),	/* GPIO3[12] - pin A6 stat1 */
#else
	NEW_PAD_CTRL(MX6PAD(EIM_DA11__IPU2_CSI1_HSYNC), CSI_PAD_CTRL),	/* GPIO3[11] - pin A5 stat0 */
	NEW_PAD_CTRL(MX6PAD(EIM_DA12__IPU2_CSI1_VSYNC), CSI_PAD_CTRL),	/* GPIO3[12] - pin A6 stat1 */
#endif
	0
};

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

static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(1, 50, USDHC_PAD_CTRL_47KPU_80OHM_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(1, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(1, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 50, USDHC_PAD_CTRL_47KPU_80OHM_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING(2, 200, USDHC_PAD_CTRL_200MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(3, 50, USDHC_PAD_CTRL_50MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(3, 100, USDHC_PAD_CTRL_100MHZ);
static iomux_v3_cfg_t MX6_USDHC_PAD_SETTING8(3, 200, USDHC_PAD_CTRL_200MHZ);

#define _50MHZ 0
#define _100MHZ 1
#define _200MHZ 2
#define SD_SPEED_CNT 3
static iomux_v3_cfg_t * MX6NAME(sd_pads)[] =
{
	MX6NAME(sd1_50mhz),
	MX6NAME(sd1_100mhz),
	MX6NAME(sd1_200mhz),
	MX6NAME(sd2_50mhz),
	MX6NAME(sd2_100mhz),
	MX6NAME(sd2_200mhz),
	MX6NAME(sd3_50mhz),
	MX6NAME(sd3_100mhz),
	MX6NAME(sd3_200mhz),
};
