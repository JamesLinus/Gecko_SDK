/**************************************************************************//**
 * @file
 * @brief sky66107_cmhv Register and Bit Field definitions
 * @version 5.1.2
 ******************************************************************************
 * @section License
 * <b>(C) Copyright 2014 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/
/**************************************************************************//**
 * @defgroup SKY66107_CMHV
 * @{
 * @brief SKY66107_CMHV Register Declaration
 *****************************************************************************/

typedef struct
{
  __IO uint32_t HVSPARE;
  __IO uint32_t EVENTCTRL;
  __IO uint32_t SLEEPTMRCLKEN;
  __IO uint32_t CLKRCTUNE;
  __IO uint32_t CLK1KCAL;
  __IO uint32_t REGENDSLEEP;
  __IO uint32_t VREGCTRL;
  uint32_t RESERVED0[1];
  __IO uint32_t WAKESEL;
  __IO uint32_t WAKECORE;
  __IO uint32_t PWRUPEVENT;
  __I uint32_t RESETEVENT;
  __IO uint32_t DBGMBOX;
  __I uint32_t CPWRUPREQSTATUS;
  __I uint32_t CSYSPWRUPREQSTATUS;
  __I uint32_t CSYSPWRUPACKSTATUS;
  __IO uint32_t CSYSPWRUPACKINHIBIT;
  __IO uint32_t OPTERRMAINTAINWAKE;
  __IO uint32_t RAMTEST;
} CMHV_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup SKY66107_CMHV_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for CMHV HVSPARE */
#define _CMHV_HVSPARE_RESETVALUE         0x00000000UL
#define _CMHV_HVSPARE_MASK               0x000000FFUL
#define _CMHV_HVSPARE_HVSPARE_SHIFT      0
#define _CMHV_HVSPARE_HVSPARE_MASK       0xFFUL
#define _CMHV_HVSPARE_HVSPARE_DEFAULT    0x00000000UL
#define CMHV_HVSPARE_HVSPARE_DEFAULT     (_CMHV_HVSPARE_HVSPARE_DEFAULT << 0)

/* Bit fields for CMHV EVENTCTRL */
#define _CMHV_EVENTCTRL_RESETVALUE          0x00000000UL
#define _CMHV_EVENTCTRL_MASK                0x00000002UL
#define CMHV_EVENTCTRL_LVFREEZE             (0x1UL << 1)
#define _CMHV_EVENTCTRL_LVFREEZE_SHIFT      1
#define _CMHV_EVENTCTRL_LVFREEZE_MASK       0x2UL
#define _CMHV_EVENTCTRL_LVFREEZE_DEFAULT    0x00000000UL
#define CMHV_EVENTCTRL_LVFREEZE_DEFAULT     (_CMHV_EVENTCTRL_LVFREEZE_DEFAULT << 1)

/* Bit fields for CMHV SLEEPTMRCLKEN */
#define _CMHV_SLEEPTMRCLKEN_RESETVALUE          0x00000002UL
#define _CMHV_SLEEPTMRCLKEN_MASK                0x00000003UL
#define CMHV_SLEEPTMRCLKEN_CLK10KEN             (0x1UL << 1)
#define _CMHV_SLEEPTMRCLKEN_CLK10KEN_SHIFT      1
#define _CMHV_SLEEPTMRCLKEN_CLK10KEN_MASK       0x2UL
#define _CMHV_SLEEPTMRCLKEN_CLK10KEN_DEFAULT    0x00000001UL
#define CMHV_SLEEPTMRCLKEN_CLK10KEN_DEFAULT     (_CMHV_SLEEPTMRCLKEN_CLK10KEN_DEFAULT << 1)
#define CMHV_SLEEPTMRCLKEN_CLK32KEN             (0x1UL << 0)
#define _CMHV_SLEEPTMRCLKEN_CLK32KEN_SHIFT      0
#define _CMHV_SLEEPTMRCLKEN_CLK32KEN_MASK       0x1UL
#define _CMHV_SLEEPTMRCLKEN_CLK32KEN_DEFAULT    0x00000000UL
#define CMHV_SLEEPTMRCLKEN_CLK32KEN_DEFAULT     (_CMHV_SLEEPTMRCLKEN_CLK32KEN_DEFAULT << 0)

/* Bit fields for CMHV CLKRCTUNE */
#define _CMHV_CLKRCTUNE_RESETVALUE                0x00000000UL
#define _CMHV_CLKRCTUNE_MASK                      0x0000000FUL
#define _CMHV_CLKRCTUNE_CLKRCTUNEFIELD_SHIFT      0
#define _CMHV_CLKRCTUNE_CLKRCTUNEFIELD_MASK       0xFUL
#define _CMHV_CLKRCTUNE_CLKRCTUNEFIELD_DEFAULT    0x00000000UL
#define CMHV_CLKRCTUNE_CLKRCTUNEFIELD_DEFAULT     (_CMHV_CLKRCTUNE_CLKRCTUNEFIELD_DEFAULT << 0)

/* Bit fields for CMHV CLK1KCAL */
#define _CMHV_CLK1KCAL_RESETVALUE            0x00005000UL
#define _CMHV_CLK1KCAL_MASK                  0x0000FFFFUL
#define CMHV_CLK1KCAL_INTEGER                (0x1UL << 11)
#define _CMHV_CLK1KCAL_INTEGER_SHIFT         11
#define _CMHV_CLK1KCAL_INTEGER_MASK          0xF800UL
#define _CMHV_CLK1KCAL_INTEGER_DEFAULT       0x0000000AUL
#define CMHV_CLK1KCAL_INTEGER_DEFAULT        (_CMHV_CLK1KCAL_INTEGER_DEFAULT << 11)
#define CMHV_CLK1KCAL_FRACTIONAL             (0x1UL << 0)
#define _CMHV_CLK1KCAL_FRACTIONAL_SHIFT      0
#define _CMHV_CLK1KCAL_FRACTIONAL_MASK       0x7FFUL
#define _CMHV_CLK1KCAL_FRACTIONAL_DEFAULT    0x00000000UL
#define CMHV_CLK1KCAL_FRACTIONAL_DEFAULT     (_CMHV_CLK1KCAL_FRACTIONAL_DEFAULT << 0)

/* Bit fields for CMHV REGENDSLEEP */
#define _CMHV_REGENDSLEEP_RESETVALUE                  0x00000001UL
#define _CMHV_REGENDSLEEP_MASK                        0x00000001UL
#define _CMHV_REGENDSLEEP_REGENDSLEEPFIELD_SHIFT      0
#define _CMHV_REGENDSLEEP_REGENDSLEEPFIELD_MASK       0x1UL
#define _CMHV_REGENDSLEEP_REGENDSLEEPFIELD_DEFAULT    0x00000001UL
#define CMHV_REGENDSLEEP_REGENDSLEEPFIELD_DEFAULT     (_CMHV_REGENDSLEEP_REGENDSLEEPFIELD_DEFAULT << 0)

/* Bit fields for CMHV VREGCTRL */
#define _CMHV_VREGCTRL_RESETVALUE          0x00000207UL
#define _CMHV_VREGCTRL_MASK                0x0000CF9FUL
#define CMHV_VREGCTRL_VREFEN               (0x1UL << 15)
#define _CMHV_VREGCTRL_VREFEN_SHIFT        15
#define _CMHV_VREGCTRL_VREFEN_MASK         0x8000UL
#define _CMHV_VREGCTRL_VREFEN_DEFAULT      0x00000000UL
#define CMHV_VREGCTRL_VREFEN_DEFAULT       (_CMHV_VREGCTRL_VREFEN_DEFAULT << 15)
#define CMHV_VREGCTRL_VREFTEST             (0x1UL << 14)
#define _CMHV_VREGCTRL_VREFTEST_SHIFT      14
#define _CMHV_VREGCTRL_VREFTEST_MASK       0x4000UL
#define _CMHV_VREGCTRL_VREFTEST_DEFAULT    0x00000000UL
#define CMHV_VREGCTRL_VREFTEST_DEFAULT     (_CMHV_VREGCTRL_VREFTEST_DEFAULT << 14)
#define CMHV_VREGCTRL_1V8EN                (0x1UL << 11)
#define _CMHV_VREGCTRL_1V8EN_SHIFT         11
#define _CMHV_VREGCTRL_1V8EN_MASK          0x800UL
#define _CMHV_VREGCTRL_1V8EN_DEFAULT       0x00000000UL
#define CMHV_VREGCTRL_1V8EN_DEFAULT        (_CMHV_VREGCTRL_1V8EN_DEFAULT << 11)
#define CMHV_VREGCTRL_1V8TEST              (0x1UL << 10)
#define _CMHV_VREGCTRL_1V8TEST_SHIFT       10
#define _CMHV_VREGCTRL_1V8TEST_MASK        0x400UL
#define _CMHV_VREGCTRL_1V8TEST_DEFAULT     0x00000000UL
#define CMHV_VREGCTRL_1V8TEST_DEFAULT      (_CMHV_VREGCTRL_1V8TEST_DEFAULT << 10)
#define CMHV_VREGCTRL_1V8TRIM              (0x1UL << 7)
#define _CMHV_VREGCTRL_1V8TRIM_SHIFT       7
#define _CMHV_VREGCTRL_1V8TRIM_MASK        0x380UL
#define _CMHV_VREGCTRL_1V8TRIM_DEFAULT     0x00000004UL
#define CMHV_VREGCTRL_1V8TRIM_DEFAULT      (_CMHV_VREGCTRL_1V8TRIM_DEFAULT << 7)
#define CMHV_VREGCTRL_1V2EN                (0x1UL << 4)
#define _CMHV_VREGCTRL_1V2EN_SHIFT         4
#define _CMHV_VREGCTRL_1V2EN_MASK          0x10UL
#define _CMHV_VREGCTRL_1V2EN_DEFAULT       0x00000000UL
#define CMHV_VREGCTRL_1V2EN_DEFAULT        (_CMHV_VREGCTRL_1V2EN_DEFAULT << 4)
#define CMHV_VREGCTRL_1V2TEST              (0x1UL << 3)
#define _CMHV_VREGCTRL_1V2TEST_SHIFT       3
#define _CMHV_VREGCTRL_1V2TEST_MASK        0x8UL
#define _CMHV_VREGCTRL_1V2TEST_DEFAULT     0x00000000UL
#define CMHV_VREGCTRL_1V2TEST_DEFAULT      (_CMHV_VREGCTRL_1V2TEST_DEFAULT << 3)
#define CMHV_VREGCTRL_1V2TRIM              (0x1UL << 0)
#define _CMHV_VREGCTRL_1V2TRIM_SHIFT       0
#define _CMHV_VREGCTRL_1V2TRIM_MASK        0x7UL
#define _CMHV_VREGCTRL_1V2TRIM_DEFAULT     0x00000007UL
#define CMHV_VREGCTRL_1V2TRIM_DEFAULT      (_CMHV_VREGCTRL_1V2TRIM_DEFAULT << 0)

/* Bit fields for CMHV WAKESEL */
#define _CMHV_WAKESEL_RESETVALUE              0x00000200UL
#define _CMHV_WAKESEL_MASK                    0x000003FFUL
#define CMHV_WAKESEL_CSYSPWRUPREQ             (0x1UL << 9)
#define _CMHV_WAKESEL_CSYSPWRUPREQ_SHIFT      9
#define _CMHV_WAKESEL_CSYSPWRUPREQ_MASK       0x200UL
#define _CMHV_WAKESEL_CSYSPWRUPREQ_DEFAULT    0x00000001UL
#define CMHV_WAKESEL_CSYSPWRUPREQ_DEFAULT     (_CMHV_WAKESEL_CSYSPWRUPREQ_DEFAULT << 9)
#define CMHV_WAKESEL_CDBGPWRUPREQ             (0x1UL << 8)
#define _CMHV_WAKESEL_CDBGPWRUPREQ_SHIFT      8
#define _CMHV_WAKESEL_CDBGPWRUPREQ_MASK       0x100UL
#define _CMHV_WAKESEL_CDBGPWRUPREQ_DEFAULT    0x00000000UL
#define CMHV_WAKESEL_CDBGPWRUPREQ_DEFAULT     (_CMHV_WAKESEL_CDBGPWRUPREQ_DEFAULT << 8)
#define CMHV_WAKESEL_CORE                     (0x1UL << 7)
#define _CMHV_WAKESEL_CORE_SHIFT              7
#define _CMHV_WAKESEL_CORE_MASK               0x80UL
#define _CMHV_WAKESEL_CORE_DEFAULT            0x00000000UL
#define CMHV_WAKESEL_CORE_DEFAULT             (_CMHV_WAKESEL_CORE_DEFAULT << 7)
#define CMHV_WAKESEL_SLEEPTMRWRAP             (0x1UL << 6)
#define _CMHV_WAKESEL_SLEEPTMRWRAP_SHIFT      6
#define _CMHV_WAKESEL_SLEEPTMRWRAP_MASK       0x40UL
#define _CMHV_WAKESEL_SLEEPTMRWRAP_DEFAULT    0x00000000UL
#define CMHV_WAKESEL_SLEEPTMRWRAP_DEFAULT     (_CMHV_WAKESEL_SLEEPTMRWRAP_DEFAULT << 6)
#define CMHV_WAKESEL_SLEEPTMRCMPB             (0x1UL << 5)
#define _CMHV_WAKESEL_SLEEPTMRCMPB_SHIFT      5
#define _CMHV_WAKESEL_SLEEPTMRCMPB_MASK       0x20UL
#define _CMHV_WAKESEL_SLEEPTMRCMPB_DEFAULT    0x00000000UL
#define CMHV_WAKESEL_SLEEPTMRCMPB_DEFAULT     (_CMHV_WAKESEL_SLEEPTMRCMPB_DEFAULT << 5)
#define CMHV_WAKESEL_SLEEPTMRCMPA             (0x1UL << 4)
#define _CMHV_WAKESEL_SLEEPTMRCMPA_SHIFT      4
#define _CMHV_WAKESEL_SLEEPTMRCMPA_MASK       0x10UL
#define _CMHV_WAKESEL_SLEEPTMRCMPA_DEFAULT    0x00000000UL
#define CMHV_WAKESEL_SLEEPTMRCMPA_DEFAULT     (_CMHV_WAKESEL_SLEEPTMRCMPA_DEFAULT << 4)
#define CMHV_WAKESEL_IRQD                     (0x1UL << 3)
#define _CMHV_WAKESEL_IRQD_SHIFT              3
#define _CMHV_WAKESEL_IRQD_MASK               0x8UL
#define _CMHV_WAKESEL_IRQD_DEFAULT            0x00000000UL
#define CMHV_WAKESEL_IRQD_DEFAULT             (_CMHV_WAKESEL_IRQD_DEFAULT << 3)
#define CMHV_WAKESEL_SC2                      (0x1UL << 2)
#define _CMHV_WAKESEL_SC2_SHIFT               2
#define _CMHV_WAKESEL_SC2_MASK                0x4UL
#define _CMHV_WAKESEL_SC2_DEFAULT             0x00000000UL
#define CMHV_WAKESEL_SC2_DEFAULT              (_CMHV_WAKESEL_SC2_DEFAULT << 2)
#define CMHV_WAKESEL_SC1                      (0x1UL << 1)
#define _CMHV_WAKESEL_SC1_SHIFT               1
#define _CMHV_WAKESEL_SC1_MASK                0x2UL
#define _CMHV_WAKESEL_SC1_DEFAULT             0x00000000UL
#define CMHV_WAKESEL_SC1_DEFAULT              (_CMHV_WAKESEL_SC1_DEFAULT << 1)
#define CMHV_WAKESEL_GPIO                     (0x1UL << 0)
#define _CMHV_WAKESEL_GPIO_SHIFT              0
#define _CMHV_WAKESEL_GPIO_MASK               0x1UL
#define _CMHV_WAKESEL_GPIO_DEFAULT            0x00000000UL
#define CMHV_WAKESEL_GPIO_DEFAULT             (_CMHV_WAKESEL_GPIO_DEFAULT << 0)

/* Bit fields for CMHV WAKECORE */
#define _CMHV_WAKECORE_RESETVALUE               0x00000000UL
#define _CMHV_WAKECORE_MASK                     0x00000020UL
#define CMHV_WAKECORE_WAKECOREFIELD             (0x1UL << 5)
#define _CMHV_WAKECORE_WAKECOREFIELD_SHIFT      5
#define _CMHV_WAKECORE_WAKECOREFIELD_MASK       0x20UL
#define _CMHV_WAKECORE_WAKECOREFIELD_DEFAULT    0x00000000UL
#define CMHV_WAKECORE_WAKECOREFIELD_DEFAULT     (_CMHV_WAKECORE_WAKECOREFIELD_DEFAULT << 5)

/* Bit fields for CMHV PWRUPEVENT */
#define _CMHV_PWRUPEVENT_RESETVALUE               0x00000000UL
#define _CMHV_PWRUPEVENT_MASK                     0x000003FFUL
#define CMHV_PWRUPEVENT_CSYSPWRUPREQ              (0x1UL << 9)
#define _CMHV_PWRUPEVENT_CSYSPWRUPREQ_SHIFT       9
#define _CMHV_PWRUPEVENT_CSYSPWRUPREQ_MASK        0x200UL
#define _CMHV_PWRUPEVENT_CSYSPWRUPREQ_DEFAULT     0x00000000UL
#define CMHV_PWRUPEVENT_CSYSPWRUPREQ_DEFAULT      (_CMHV_PWRUPEVENT_CSYSPWRUPREQ_DEFAULT << 9)
#define CMHV_PWRUPEVENT_CDBGPWRUPREQ              (0x1UL << 8)
#define _CMHV_PWRUPEVENT_CDBGPWRUPREQ_SHIFT       8
#define _CMHV_PWRUPEVENT_CDBGPWRUPREQ_MASK        0x100UL
#define _CMHV_PWRUPEVENT_CDBGPWRUPREQ_DEFAULT     0x00000000UL
#define CMHV_PWRUPEVENT_CDBGPWRUPREQ_DEFAULT      (_CMHV_PWRUPEVENT_CDBGPWRUPREQ_DEFAULT << 8)
#define CMHV_PWRUPEVENT_WAKECORE                  (0x1UL << 7)
#define _CMHV_PWRUPEVENT_WAKECORE_SHIFT           7
#define _CMHV_PWRUPEVENT_WAKECORE_MASK            0x80UL
#define _CMHV_PWRUPEVENT_WAKECORE_DEFAULT         0x00000000UL
#define CMHV_PWRUPEVENT_WAKECORE_DEFAULT          (_CMHV_PWRUPEVENT_WAKECORE_DEFAULT << 7)
#define CMHV_PWRUPEVENT_SLEEPTMRWRAP              (0x1UL << 6)
#define _CMHV_PWRUPEVENT_SLEEPTMRWRAP_SHIFT       6
#define _CMHV_PWRUPEVENT_SLEEPTMRWRAP_MASK        0x40UL
#define _CMHV_PWRUPEVENT_SLEEPTMRWRAP_DEFAULT     0x00000000UL
#define CMHV_PWRUPEVENT_SLEEPTMRWRAP_DEFAULT      (_CMHV_PWRUPEVENT_SLEEPTMRWRAP_DEFAULT << 6)
#define CMHV_PWRUPEVENT_SLEEPTMRCOMPB             (0x1UL << 5)
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPB_SHIFT      5
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPB_MASK       0x20UL
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPB_DEFAULT    0x00000000UL
#define CMHV_PWRUPEVENT_SLEEPTMRCOMPB_DEFAULT     (_CMHV_PWRUPEVENT_SLEEPTMRCOMPB_DEFAULT << 5)
#define CMHV_PWRUPEVENT_SLEEPTMRCOMPA             (0x1UL << 4)
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPA_SHIFT      4
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPA_MASK       0x10UL
#define _CMHV_PWRUPEVENT_SLEEPTMRCOMPA_DEFAULT    0x00000000UL
#define CMHV_PWRUPEVENT_SLEEPTMRCOMPA_DEFAULT     (_CMHV_PWRUPEVENT_SLEEPTMRCOMPA_DEFAULT << 4)
#define CMHV_PWRUPEVENT_IRQD                      (0x1UL << 3)
#define _CMHV_PWRUPEVENT_IRQD_SHIFT               3
#define _CMHV_PWRUPEVENT_IRQD_MASK                0x8UL
#define _CMHV_PWRUPEVENT_IRQD_DEFAULT             0x00000000UL
#define CMHV_PWRUPEVENT_IRQD_DEFAULT              (_CMHV_PWRUPEVENT_IRQD_DEFAULT << 3)
#define CMHV_PWRUPEVENT_SC2                       (0x1UL << 2)
#define _CMHV_PWRUPEVENT_SC2_SHIFT                2
#define _CMHV_PWRUPEVENT_SC2_MASK                 0x4UL
#define _CMHV_PWRUPEVENT_SC2_DEFAULT              0x00000000UL
#define CMHV_PWRUPEVENT_SC2_DEFAULT               (_CMHV_PWRUPEVENT_SC2_DEFAULT << 2)
#define CMHV_PWRUPEVENT_SC1                       (0x1UL << 1)
#define _CMHV_PWRUPEVENT_SC1_SHIFT                1
#define _CMHV_PWRUPEVENT_SC1_MASK                 0x2UL
#define _CMHV_PWRUPEVENT_SC1_DEFAULT              0x00000000UL
#define CMHV_PWRUPEVENT_SC1_DEFAULT               (_CMHV_PWRUPEVENT_SC1_DEFAULT << 1)
#define CMHV_PWRUPEVENT_GPIO                      (0x1UL << 0)
#define _CMHV_PWRUPEVENT_GPIO_SHIFT               0
#define _CMHV_PWRUPEVENT_GPIO_MASK                0x1UL
#define _CMHV_PWRUPEVENT_GPIO_DEFAULT             0x00000000UL
#define CMHV_PWRUPEVENT_GPIO_DEFAULT              (_CMHV_PWRUPEVENT_GPIO_DEFAULT << 0)

/* Bit fields for CMHV RESETEVENT */
#define _CMHV_RESETEVENT_RESETVALUE             0x00000001UL
#define _CMHV_RESETEVENT_MASK                   0x000000FFUL
#define CMHV_RESETEVENT_CPULOCKUP               (0x1UL << 7)
#define _CMHV_RESETEVENT_CPULOCKUP_SHIFT        7
#define _CMHV_RESETEVENT_CPULOCKUP_MASK         0x80UL
#define _CMHV_RESETEVENT_CPULOCKUP_DEFAULT      0x00000000UL
#define CMHV_RESETEVENT_CPULOCKUP_DEFAULT       (_CMHV_RESETEVENT_CPULOCKUP_DEFAULT << 7)
#define CMHV_RESETEVENT_OPTBYTEFAIL             (0x1UL << 6)
#define _CMHV_RESETEVENT_OPTBYTEFAIL_SHIFT      6
#define _CMHV_RESETEVENT_OPTBYTEFAIL_MASK       0x40UL
#define _CMHV_RESETEVENT_OPTBYTEFAIL_DEFAULT    0x00000000UL
#define CMHV_RESETEVENT_OPTBYTEFAIL_DEFAULT     (_CMHV_RESETEVENT_OPTBYTEFAIL_DEFAULT << 6)
#define CMHV_RESETEVENT_DSLEEP                  (0x1UL << 5)
#define _CMHV_RESETEVENT_DSLEEP_SHIFT           5
#define _CMHV_RESETEVENT_DSLEEP_MASK            0x20UL
#define _CMHV_RESETEVENT_DSLEEP_DEFAULT         0x00000000UL
#define CMHV_RESETEVENT_DSLEEP_DEFAULT          (_CMHV_RESETEVENT_DSLEEP_DEFAULT << 5)
#define CMHV_RESETEVENT_SW                      (0x1UL << 4)
#define _CMHV_RESETEVENT_SW_SHIFT               4
#define _CMHV_RESETEVENT_SW_MASK                0x10UL
#define _CMHV_RESETEVENT_SW_DEFAULT             0x00000000UL
#define CMHV_RESETEVENT_SW_DEFAULT              (_CMHV_RESETEVENT_SW_DEFAULT << 4)
#define CMHV_RESETEVENT_WDOG                    (0x1UL << 3)
#define _CMHV_RESETEVENT_WDOG_SHIFT             3
#define _CMHV_RESETEVENT_WDOG_MASK              0x8UL
#define _CMHV_RESETEVENT_WDOG_DEFAULT           0x00000000UL
#define CMHV_RESETEVENT_WDOG_DEFAULT            (_CMHV_RESETEVENT_WDOG_DEFAULT << 3)
#define CMHV_RESETEVENT_NRESET                  (0x1UL << 2)
#define _CMHV_RESETEVENT_NRESET_SHIFT           2
#define _CMHV_RESETEVENT_NRESET_MASK            0x4UL
#define _CMHV_RESETEVENT_NRESET_DEFAULT         0x00000000UL
#define CMHV_RESETEVENT_NRESET_DEFAULT          (_CMHV_RESETEVENT_NRESET_DEFAULT << 2)
#define CMHV_RESETEVENT_PWRLV                   (0x1UL << 1)
#define _CMHV_RESETEVENT_PWRLV_SHIFT            1
#define _CMHV_RESETEVENT_PWRLV_MASK             0x2UL
#define _CMHV_RESETEVENT_PWRLV_DEFAULT          0x00000000UL
#define CMHV_RESETEVENT_PWRLV_DEFAULT           (_CMHV_RESETEVENT_PWRLV_DEFAULT << 1)
#define CMHV_RESETEVENT_PWRHV                   (0x1UL << 0)
#define _CMHV_RESETEVENT_PWRHV_SHIFT            0
#define _CMHV_RESETEVENT_PWRHV_MASK             0x1UL
#define _CMHV_RESETEVENT_PWRHV_DEFAULT          0x00000001UL
#define CMHV_RESETEVENT_PWRHV_DEFAULT           (_CMHV_RESETEVENT_PWRHV_DEFAULT << 0)

/* Bit fields for CMHV DBGMBOX */
#define _CMHV_DBGMBOX_RESETVALUE         0x00000000UL
#define _CMHV_DBGMBOX_MASK               0x0000FFFFUL
#define _CMHV_DBGMBOX_DBGMBOX_SHIFT      0
#define _CMHV_DBGMBOX_DBGMBOX_MASK       0xFFFFUL
#define _CMHV_DBGMBOX_DBGMBOX_DEFAULT    0x00000000UL
#define CMHV_DBGMBOX_DBGMBOX_DEFAULT     (_CMHV_DBGMBOX_DBGMBOX_DEFAULT << 0)

/* Bit fields for CMHV CPWRUPREQSTATUS */
#define _CMHV_CPWRUPREQSTATUS_RESETVALUE           0x00000000UL
#define _CMHV_CPWRUPREQSTATUS_MASK                 0x00000001UL
#define _CMHV_CPWRUPREQSTATUS_CPWRUPREQ_SHIFT      0
#define _CMHV_CPWRUPREQSTATUS_CPWRUPREQ_MASK       0x1UL
#define _CMHV_CPWRUPREQSTATUS_CPWRUPREQ_DEFAULT    0x00000000UL
#define CMHV_CPWRUPREQSTATUS_CPWRUPREQ_DEFAULT     (_CMHV_CPWRUPREQSTATUS_CPWRUPREQ_DEFAULT << 0)

/* Bit fields for CMHV CSYSPWRUPREQSTATUS */
#define _CMHV_CSYSPWRUPREQSTATUS_RESETVALUE              0x00000000UL
#define _CMHV_CSYSPWRUPREQSTATUS_MASK                    0x00000001UL
#define _CMHV_CSYSPWRUPREQSTATUS_CSYSPWRUPREQ_SHIFT      0
#define _CMHV_CSYSPWRUPREQSTATUS_CSYSPWRUPREQ_MASK       0x1UL
#define _CMHV_CSYSPWRUPREQSTATUS_CSYSPWRUPREQ_DEFAULT    0x00000000UL
#define CMHV_CSYSPWRUPREQSTATUS_CSYSPWRUPREQ_DEFAULT     (_CMHV_CSYSPWRUPREQSTATUS_CSYSPWRUPREQ_DEFAULT << 0)

/* Bit fields for CMHV CSYSPWRUPACKSTATUS */
#define _CMHV_CSYSPWRUPACKSTATUS_RESETVALUE              0x00000000UL
#define _CMHV_CSYSPWRUPACKSTATUS_MASK                    0x00000001UL
#define _CMHV_CSYSPWRUPACKSTATUS_CSYSPWRUPACK_SHIFT      0
#define _CMHV_CSYSPWRUPACKSTATUS_CSYSPWRUPACK_MASK       0x1UL
#define _CMHV_CSYSPWRUPACKSTATUS_CSYSPWRUPACK_DEFAULT    0x00000000UL
#define CMHV_CSYSPWRUPACKSTATUS_CSYSPWRUPACK_DEFAULT     (_CMHV_CSYSPWRUPACKSTATUS_CSYSPWRUPACK_DEFAULT << 0)

/* Bit fields for CMHV CSYSPWRUPACKINHIBIT */
#define _CMHV_CSYSPWRUPACKINHIBIT_RESETVALUE                     0x00000000UL
#define _CMHV_CSYSPWRUPACKINHIBIT_MASK                           0x00000001UL
#define _CMHV_CSYSPWRUPACKINHIBIT_CSYSPWRUPACKINHIBIT_SHIFT      0
#define _CMHV_CSYSPWRUPACKINHIBIT_CSYSPWRUPACKINHIBIT_MASK       0x1UL
#define _CMHV_CSYSPWRUPACKINHIBIT_CSYSPWRUPACKINHIBIT_DEFAULT    0x00000000UL
#define CMHV_CSYSPWRUPACKINHIBIT_CSYSPWRUPACKINHIBIT_DEFAULT     (_CMHV_CSYSPWRUPACKINHIBIT_CSYSPWRUPACKINHIBIT_DEFAULT << 0)

/* Bit fields for CMHV OPTERRMAINTAINWAKE */
#define _CMHV_OPTERRMAINTAINWAKE_RESETVALUE                    0x00000000UL
#define _CMHV_OPTERRMAINTAINWAKE_MASK                          0x00000001UL
#define _CMHV_OPTERRMAINTAINWAKE_OPTERRMAINTAINWAKE_SHIFT      0
#define _CMHV_OPTERRMAINTAINWAKE_OPTERRMAINTAINWAKE_MASK       0x1UL
#define _CMHV_OPTERRMAINTAINWAKE_OPTERRMAINTAINWAKE_DEFAULT    0x00000000UL
#define CMHV_OPTERRMAINTAINWAKE_OPTERRMAINTAINWAKE_DEFAULT     (_CMHV_OPTERRMAINTAINWAKE_OPTERRMAINTAINWAKE_DEFAULT << 0)

/* Bit fields for CMHV RAMTEST */
#define _CMHV_RAMTEST_RESETVALUE         0x0000000EUL
#define _CMHV_RAMTEST_MASK               0x0000003FUL
#define CMHV_RAMTEST_REGB                (0x1UL << 5)
#define _CMHV_RAMTEST_REGB_SHIFT         5
#define _CMHV_RAMTEST_REGB_MASK          0x20UL
#define _CMHV_RAMTEST_REGB_DEFAULT       0x00000000UL
#define CMHV_RAMTEST_REGB_DEFAULT        (_CMHV_RAMTEST_REGB_DEFAULT << 5)
#define CMHV_RAMTEST_TIMING              (0x1UL << 2)
#define _CMHV_RAMTEST_TIMING_SHIFT       2
#define _CMHV_RAMTEST_TIMING_MASK        0x1CUL
#define _CMHV_RAMTEST_TIMING_DEFAULT     0x00000003UL
#define CMHV_RAMTEST_TIMING_DEFAULT      (_CMHV_RAMTEST_TIMING_DEFAULT << 2)
#define CMHV_RAMTEST_LEAKAGE             (0x1UL << 0)
#define _CMHV_RAMTEST_LEAKAGE_SHIFT      0
#define _CMHV_RAMTEST_LEAKAGE_MASK       0x3UL
#define _CMHV_RAMTEST_LEAKAGE_DEFAULT    0x00000002UL
#define CMHV_RAMTEST_LEAKAGE_DEFAULT     (_CMHV_RAMTEST_LEAKAGE_DEFAULT << 0)

/** @} End of group SKY66107_CMHV_BitFields */
