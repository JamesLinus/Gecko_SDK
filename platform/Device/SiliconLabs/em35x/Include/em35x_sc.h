/**************************************************************************//**
 * @file
 * @brief em35x_sc Register and Bit Field definitions
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
 * @defgroup EM35X_SC
 * @{
 * @brief EM35X_SC Register Declaration
 *****************************************************************************/

typedef struct
{
  __IO uint32_t RXBEGA;
  __IO uint32_t RXENDA;
  __IO uint32_t RXBEGB;
  __IO uint32_t RXENDB;
  __IO uint32_t TXBEGA;
  __IO uint32_t TXENDA;
  __IO uint32_t TXBEGB;
  __IO uint32_t TXENDB;
  __I uint32_t RXCNTA;
  __I uint32_t RXCNTB;
  __I uint32_t TXCNT;
  __I uint32_t DMASTAT;
  __IO uint32_t DMACTRL;
  __I uint32_t RXERRA;
  __I uint32_t RXERRB;
  __IO uint32_t DATA;
  __I uint32_t SPISTAT;
  __I uint32_t TWISTAT;
  __I uint32_t UARTSTAT;
  __IO uint32_t TWICTRL1;
  __IO uint32_t TWICTRL2;
  __IO uint32_t MODE;
  __IO uint32_t SPICFG;
  __IO uint32_t UARTCFG;
  __IO uint32_t RATELIN;
  __IO uint32_t RATEEXP;
  __IO uint32_t UARTPER;
  __IO uint32_t UARTFRAC;
  __I uint32_t RXCNTSAVED;
} SC_TypeDef;              /** @} */

/**************************************************************************//**
 * @defgroup EM35X_SC_BitFields
 * @{
 *****************************************************************************/

/* Bit fields for SC RXBEGA */
#define _SC_RXBEGA_RESETVALUE        0x20000000UL
#define _SC_RXBEGA_MASK              0x00003FFFUL
#define _SC_RXBEGA_RXBEGA_SHIFT      0
#define _SC_RXBEGA_RXBEGA_MASK       0x3FFFUL
#define _SC_RXBEGA_RXBEGA_DEFAULT    0x00000000UL
#define SC_RXBEGA_RXBEGA_DEFAULT     (_SC_RXBEGA_RXBEGA_DEFAULT << 0)

/* Bit fields for SC RXENDA */
#define _SC_RXENDA_RESETVALUE        0x20000000UL
#define _SC_RXENDA_MASK              0x00003FFFUL
#define _SC_RXENDA_RXENDA_SHIFT      0
#define _SC_RXENDA_RXENDA_MASK       0x3FFFUL
#define _SC_RXENDA_RXENDA_DEFAULT    0x00000000UL
#define SC_RXENDA_RXENDA_DEFAULT     (_SC_RXENDA_RXENDA_DEFAULT << 0)

/* Bit fields for SC RXBEGB */
#define _SC_RXBEGB_RESETVALUE        0x20000000UL
#define _SC_RXBEGB_MASK              0x00003FFFUL
#define _SC_RXBEGB_RXBEGB_SHIFT      0
#define _SC_RXBEGB_RXBEGB_MASK       0x3FFFUL
#define _SC_RXBEGB_RXBEGB_DEFAULT    0x00000000UL
#define SC_RXBEGB_RXBEGB_DEFAULT     (_SC_RXBEGB_RXBEGB_DEFAULT << 0)

/* Bit fields for SC RXENDB */
#define _SC_RXENDB_RESETVALUE        0x20000000UL
#define _SC_RXENDB_MASK              0x00003FFFUL
#define _SC_RXENDB_RXENDB_SHIFT      0
#define _SC_RXENDB_RXENDB_MASK       0x3FFFUL
#define _SC_RXENDB_RXENDB_DEFAULT    0x00000000UL
#define SC_RXENDB_RXENDB_DEFAULT     (_SC_RXENDB_RXENDB_DEFAULT << 0)

/* Bit fields for SC TXBEGA */
#define _SC_TXBEGA_RESETVALUE        0x20000000UL
#define _SC_TXBEGA_MASK              0x00003FFFUL
#define _SC_TXBEGA_TXBEGA_SHIFT      0
#define _SC_TXBEGA_TXBEGA_MASK       0x3FFFUL
#define _SC_TXBEGA_TXBEGA_DEFAULT    0x00000000UL
#define SC_TXBEGA_TXBEGA_DEFAULT     (_SC_TXBEGA_TXBEGA_DEFAULT << 0)

/* Bit fields for SC TXENDA */
#define _SC_TXENDA_RESETVALUE        0x20000000UL
#define _SC_TXENDA_MASK              0x00003FFFUL
#define _SC_TXENDA_TXENDA_SHIFT      0
#define _SC_TXENDA_TXENDA_MASK       0x3FFFUL
#define _SC_TXENDA_TXENDA_DEFAULT    0x00000000UL
#define SC_TXENDA_TXENDA_DEFAULT     (_SC_TXENDA_TXENDA_DEFAULT << 0)

/* Bit fields for SC TXBEGB */
#define _SC_TXBEGB_RESETVALUE        0x20000000UL
#define _SC_TXBEGB_MASK              0x00003FFFUL
#define _SC_TXBEGB_TXBEGB_SHIFT      0
#define _SC_TXBEGB_TXBEGB_MASK       0x3FFFUL
#define _SC_TXBEGB_TXBEGB_DEFAULT    0x00000000UL
#define SC_TXBEGB_TXBEGB_DEFAULT     (_SC_TXBEGB_TXBEGB_DEFAULT << 0)

/* Bit fields for SC TXENDB */
#define _SC_TXENDB_RESETVALUE        0x20000000UL
#define _SC_TXENDB_MASK              0x00003FFFUL
#define _SC_TXENDB_TXENDB_SHIFT      0
#define _SC_TXENDB_TXENDB_MASK       0x3FFFUL
#define _SC_TXENDB_TXENDB_DEFAULT    0x00000000UL
#define SC_TXENDB_TXENDB_DEFAULT     (_SC_TXENDB_TXENDB_DEFAULT << 0)

/* Bit fields for SC RXCNTA */
#define _SC_RXCNTA_RESETVALUE        0x00000000UL
#define _SC_RXCNTA_MASK              0x00003FFFUL
#define _SC_RXCNTA_RXCNTA_SHIFT      0
#define _SC_RXCNTA_RXCNTA_MASK       0x3FFFUL
#define _SC_RXCNTA_RXCNTA_DEFAULT    0x00000000UL
#define SC_RXCNTA_RXCNTA_DEFAULT     (_SC_RXCNTA_RXCNTA_DEFAULT << 0)

/* Bit fields for SC RXCNTB */
#define _SC_RXCNTB_RESETVALUE        0x00000000UL
#define _SC_RXCNTB_MASK              0x00003FFFUL
#define _SC_RXCNTB_RXCNTB_SHIFT      0
#define _SC_RXCNTB_RXCNTB_MASK       0x3FFFUL
#define _SC_RXCNTB_RXCNTB_DEFAULT    0x00000000UL
#define SC_RXCNTB_RXCNTB_DEFAULT     (_SC_RXCNTB_RXCNTB_DEFAULT << 0)

/* Bit fields for SC TXCNT */
#define _SC_TXCNT_RESETVALUE       0x00000000UL
#define _SC_TXCNT_MASK             0x00003FFFUL
#define _SC_TXCNT_TXCNT_SHIFT      0
#define _SC_TXCNT_TXCNT_MASK       0x3FFFUL
#define _SC_TXCNT_TXCNT_DEFAULT    0x00000000UL
#define SC_TXCNT_TXCNT_DEFAULT     (_SC_TXCNT_TXCNT_DEFAULT << 0)

/* Bit fields for SC DMASTAT */
#define _SC_DMASTAT_RESETVALUE        0x00000000UL
#define _SC_DMASTAT_MASK              0x00001FFFUL
#define SC_DMASTAT_RXSSEL             (0x1UL << 10)
#define _SC_DMASTAT_RXSSEL_SHIFT      10
#define _SC_DMASTAT_RXSSEL_MASK       0x1C00UL
#define _SC_DMASTAT_RXSSEL_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXSSEL_DEFAULT     (_SC_DMASTAT_RXSSEL_DEFAULT << 10)
#define SC_DMASTAT_RXFRMB             (0x1UL << 9)
#define _SC_DMASTAT_RXFRMB_SHIFT      9
#define _SC_DMASTAT_RXFRMB_MASK       0x200UL
#define _SC_DMASTAT_RXFRMB_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXFRMB_DEFAULT     (_SC_DMASTAT_RXFRMB_DEFAULT << 9)
#define SC_DMASTAT_RXFRMA             (0x1UL << 8)
#define _SC_DMASTAT_RXFRMA_SHIFT      8
#define _SC_DMASTAT_RXFRMA_MASK       0x100UL
#define _SC_DMASTAT_RXFRMA_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXFRMA_DEFAULT     (_SC_DMASTAT_RXFRMA_DEFAULT << 8)
#define SC_DMASTAT_RXPARB             (0x1UL << 7)
#define _SC_DMASTAT_RXPARB_SHIFT      7
#define _SC_DMASTAT_RXPARB_MASK       0x80UL
#define _SC_DMASTAT_RXPARB_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXPARB_DEFAULT     (_SC_DMASTAT_RXPARB_DEFAULT << 7)
#define SC_DMASTAT_RXPARA             (0x1UL << 6)
#define _SC_DMASTAT_RXPARA_SHIFT      6
#define _SC_DMASTAT_RXPARA_MASK       0x40UL
#define _SC_DMASTAT_RXPARA_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXPARA_DEFAULT     (_SC_DMASTAT_RXPARA_DEFAULT << 6)
#define SC_DMASTAT_RXOVFB             (0x1UL << 5)
#define _SC_DMASTAT_RXOVFB_SHIFT      5
#define _SC_DMASTAT_RXOVFB_MASK       0x20UL
#define _SC_DMASTAT_RXOVFB_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXOVFB_DEFAULT     (_SC_DMASTAT_RXOVFB_DEFAULT << 5)
#define SC_DMASTAT_RXOVFA             (0x1UL << 4)
#define _SC_DMASTAT_RXOVFA_SHIFT      4
#define _SC_DMASTAT_RXOVFA_MASK       0x10UL
#define _SC_DMASTAT_RXOVFA_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXOVFA_DEFAULT     (_SC_DMASTAT_RXOVFA_DEFAULT << 4)
#define SC_DMASTAT_TXACTB             (0x1UL << 3)
#define _SC_DMASTAT_TXACTB_SHIFT      3
#define _SC_DMASTAT_TXACTB_MASK       0x8UL
#define _SC_DMASTAT_TXACTB_DEFAULT    0x00000000UL
#define SC_DMASTAT_TXACTB_DEFAULT     (_SC_DMASTAT_TXACTB_DEFAULT << 3)
#define SC_DMASTAT_TXACTA             (0x1UL << 2)
#define _SC_DMASTAT_TXACTA_SHIFT      2
#define _SC_DMASTAT_TXACTA_MASK       0x4UL
#define _SC_DMASTAT_TXACTA_DEFAULT    0x00000000UL
#define SC_DMASTAT_TXACTA_DEFAULT     (_SC_DMASTAT_TXACTA_DEFAULT << 2)
#define SC_DMASTAT_RXACTB             (0x1UL << 1)
#define _SC_DMASTAT_RXACTB_SHIFT      1
#define _SC_DMASTAT_RXACTB_MASK       0x2UL
#define _SC_DMASTAT_RXACTB_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXACTB_DEFAULT     (_SC_DMASTAT_RXACTB_DEFAULT << 1)
#define SC_DMASTAT_RXACTA             (0x1UL << 0)
#define _SC_DMASTAT_RXACTA_SHIFT      0
#define _SC_DMASTAT_RXACTA_MASK       0x1UL
#define _SC_DMASTAT_RXACTA_DEFAULT    0x00000000UL
#define SC_DMASTAT_RXACTA_DEFAULT     (_SC_DMASTAT_RXACTA_DEFAULT << 0)

/* Bit fields for SC DMACTRL */
#define _SC_DMACTRL_RESETVALUE          0x00000000UL
#define _SC_DMACTRL_MASK                0x0000003FUL
#define SC_DMACTRL_TXDMARST             (0x1UL << 5)
#define _SC_DMACTRL_TXDMARST_SHIFT      5
#define _SC_DMACTRL_TXDMARST_MASK       0x20UL
#define _SC_DMACTRL_TXDMARST_DEFAULT    0x00000000UL
#define SC_DMACTRL_TXDMARST_DEFAULT     (_SC_DMACTRL_TXDMARST_DEFAULT << 5)
#define SC_DMACTRL_RXDMARST             (0x1UL << 4)
#define _SC_DMACTRL_RXDMARST_SHIFT      4
#define _SC_DMACTRL_RXDMARST_MASK       0x10UL
#define _SC_DMACTRL_RXDMARST_DEFAULT    0x00000000UL
#define SC_DMACTRL_RXDMARST_DEFAULT     (_SC_DMACTRL_RXDMARST_DEFAULT << 4)
#define SC_DMACTRL_TXLODB               (0x1UL << 3)
#define _SC_DMACTRL_TXLODB_SHIFT        3
#define _SC_DMACTRL_TXLODB_MASK         0x8UL
#define _SC_DMACTRL_TXLODB_DEFAULT      0x00000000UL
#define SC_DMACTRL_TXLODB_DEFAULT       (_SC_DMACTRL_TXLODB_DEFAULT << 3)
#define SC_DMACTRL_TXLODA               (0x1UL << 2)
#define _SC_DMACTRL_TXLODA_SHIFT        2
#define _SC_DMACTRL_TXLODA_MASK         0x4UL
#define _SC_DMACTRL_TXLODA_DEFAULT      0x00000000UL
#define SC_DMACTRL_TXLODA_DEFAULT       (_SC_DMACTRL_TXLODA_DEFAULT << 2)
#define SC_DMACTRL_RXLODB               (0x1UL << 1)
#define _SC_DMACTRL_RXLODB_SHIFT        1
#define _SC_DMACTRL_RXLODB_MASK         0x2UL
#define _SC_DMACTRL_RXLODB_DEFAULT      0x00000000UL
#define SC_DMACTRL_RXLODB_DEFAULT       (_SC_DMACTRL_RXLODB_DEFAULT << 1)
#define SC_DMACTRL_RXLODA               (0x1UL << 0)
#define _SC_DMACTRL_RXLODA_SHIFT        0
#define _SC_DMACTRL_RXLODA_MASK         0x1UL
#define _SC_DMACTRL_RXLODA_DEFAULT      0x00000000UL
#define SC_DMACTRL_RXLODA_DEFAULT       (_SC_DMACTRL_RXLODA_DEFAULT << 0)

/* Bit fields for SC RXERRA */
#define _SC_RXERRA_RESETVALUE        0x00000000UL
#define _SC_RXERRA_MASK              0x00003FFFUL
#define _SC_RXERRA_RXERRA_SHIFT      0
#define _SC_RXERRA_RXERRA_MASK       0x3FFFUL
#define _SC_RXERRA_RXERRA_DEFAULT    0x00000000UL
#define SC_RXERRA_RXERRA_DEFAULT     (_SC_RXERRA_RXERRA_DEFAULT << 0)

/* Bit fields for SC RXERRB */
#define _SC_RXERRB_RESETVALUE        0x00000000UL
#define _SC_RXERRB_MASK              0x00003FFFUL
#define _SC_RXERRB_RXERRB_SHIFT      0
#define _SC_RXERRB_RXERRB_MASK       0x3FFFUL
#define _SC_RXERRB_RXERRB_DEFAULT    0x00000000UL
#define SC_RXERRB_RXERRB_DEFAULT     (_SC_RXERRB_RXERRB_DEFAULT << 0)

/* Bit fields for SC DATA */
#define _SC_DATA_RESETVALUE      0x00000000UL
#define _SC_DATA_MASK            0x000000FFUL
#define _SC_DATA_DATA_SHIFT      0
#define _SC_DATA_DATA_MASK       0xFFUL
#define _SC_DATA_DATA_DEFAULT    0x00000000UL
#define SC_DATA_DATA_DEFAULT     (_SC_DATA_DATA_DEFAULT << 0)

/* Bit fields for SC SPISTAT */
#define _SC_SPISTAT_RESETVALUE           0x00000000UL
#define _SC_SPISTAT_MASK                 0x0000000FUL
#define SC_SPISTAT_SPITXIDLE             (0x1UL << 3)
#define _SC_SPISTAT_SPITXIDLE_SHIFT      3
#define _SC_SPISTAT_SPITXIDLE_MASK       0x8UL
#define _SC_SPISTAT_SPITXIDLE_DEFAULT    0x00000000UL
#define SC_SPISTAT_SPITXIDLE_DEFAULT     (_SC_SPISTAT_SPITXIDLE_DEFAULT << 3)
#define SC_SPISTAT_SPITXFREE             (0x1UL << 2)
#define _SC_SPISTAT_SPITXFREE_SHIFT      2
#define _SC_SPISTAT_SPITXFREE_MASK       0x4UL
#define _SC_SPISTAT_SPITXFREE_DEFAULT    0x00000000UL
#define SC_SPISTAT_SPITXFREE_DEFAULT     (_SC_SPISTAT_SPITXFREE_DEFAULT << 2)
#define SC_SPISTAT_SPIRXVAL              (0x1UL << 1)
#define _SC_SPISTAT_SPIRXVAL_SHIFT       1
#define _SC_SPISTAT_SPIRXVAL_MASK        0x2UL
#define _SC_SPISTAT_SPIRXVAL_DEFAULT     0x00000000UL
#define SC_SPISTAT_SPIRXVAL_DEFAULT      (_SC_SPISTAT_SPIRXVAL_DEFAULT << 1)
#define SC_SPISTAT_SPIRXOVF              (0x1UL << 0)
#define _SC_SPISTAT_SPIRXOVF_SHIFT       0
#define _SC_SPISTAT_SPIRXOVF_MASK        0x1UL
#define _SC_SPISTAT_SPIRXOVF_DEFAULT     0x00000000UL
#define SC_SPISTAT_SPIRXOVF_DEFAULT      (_SC_SPISTAT_SPIRXOVF_DEFAULT << 0)

/* Bit fields for SC TWISTAT */
#define _SC_TWISTAT_RESETVALUE           0x00000000UL
#define _SC_TWISTAT_MASK                 0x0000000FUL
#define SC_TWISTAT_TWICMDFIN             (0x1UL << 3)
#define _SC_TWISTAT_TWICMDFIN_SHIFT      3
#define _SC_TWISTAT_TWICMDFIN_MASK       0x8UL
#define _SC_TWISTAT_TWICMDFIN_DEFAULT    0x00000000UL
#define SC_TWISTAT_TWICMDFIN_DEFAULT     (_SC_TWISTAT_TWICMDFIN_DEFAULT << 3)
#define SC_TWISTAT_TWIRXFIN              (0x1UL << 2)
#define _SC_TWISTAT_TWIRXFIN_SHIFT       2
#define _SC_TWISTAT_TWIRXFIN_MASK        0x4UL
#define _SC_TWISTAT_TWIRXFIN_DEFAULT     0x00000000UL
#define SC_TWISTAT_TWIRXFIN_DEFAULT      (_SC_TWISTAT_TWIRXFIN_DEFAULT << 2)
#define SC_TWISTAT_TWITXFIN              (0x1UL << 1)
#define _SC_TWISTAT_TWITXFIN_SHIFT       1
#define _SC_TWISTAT_TWITXFIN_MASK        0x2UL
#define _SC_TWISTAT_TWITXFIN_DEFAULT     0x00000000UL
#define SC_TWISTAT_TWITXFIN_DEFAULT      (_SC_TWISTAT_TWITXFIN_DEFAULT << 1)
#define SC_TWISTAT_TWIRXNAK              (0x1UL << 0)
#define _SC_TWISTAT_TWIRXNAK_SHIFT       0
#define _SC_TWISTAT_TWIRXNAK_MASK        0x1UL
#define _SC_TWISTAT_TWIRXNAK_DEFAULT     0x00000000UL
#define SC_TWISTAT_TWIRXNAK_DEFAULT      (_SC_TWISTAT_TWIRXNAK_DEFAULT << 0)

/* Bit fields for SC UARTSTAT */
#define _SC_UARTSTAT_RESETVALUE            0x00000040UL
#define _SC_UARTSTAT_MASK                  0x0000007FUL
#define SC_UARTSTAT_UARTTXIDLE             (0x1UL << 6)
#define _SC_UARTSTAT_UARTTXIDLE_SHIFT      6
#define _SC_UARTSTAT_UARTTXIDLE_MASK       0x40UL
#define _SC_UARTSTAT_UARTTXIDLE_DEFAULT    0x00000001UL
#define SC_UARTSTAT_UARTTXIDLE_DEFAULT     (_SC_UARTSTAT_UARTTXIDLE_DEFAULT << 6)
#define SC_UARTSTAT_UARTPARERR             (0x1UL << 5)
#define _SC_UARTSTAT_UARTPARERR_SHIFT      5
#define _SC_UARTSTAT_UARTPARERR_MASK       0x20UL
#define _SC_UARTSTAT_UARTPARERR_DEFAULT    0x00000000UL
#define SC_UARTSTAT_UARTPARERR_DEFAULT     (_SC_UARTSTAT_UARTPARERR_DEFAULT << 5)
#define SC_UARTSTAT_UARTFRMERR             (0x1UL << 4)
#define _SC_UARTSTAT_UARTFRMERR_SHIFT      4
#define _SC_UARTSTAT_UARTFRMERR_MASK       0x10UL
#define _SC_UARTSTAT_UARTFRMERR_DEFAULT    0x00000000UL
#define SC_UARTSTAT_UARTFRMERR_DEFAULT     (_SC_UARTSTAT_UARTFRMERR_DEFAULT << 4)
#define SC_UARTSTAT_UARTRXOVF              (0x1UL << 3)
#define _SC_UARTSTAT_UARTRXOVF_SHIFT       3
#define _SC_UARTSTAT_UARTRXOVF_MASK        0x8UL
#define _SC_UARTSTAT_UARTRXOVF_DEFAULT     0x00000000UL
#define SC_UARTSTAT_UARTRXOVF_DEFAULT      (_SC_UARTSTAT_UARTRXOVF_DEFAULT << 3)
#define SC_UARTSTAT_UARTTXFREE             (0x1UL << 2)
#define _SC_UARTSTAT_UARTTXFREE_SHIFT      2
#define _SC_UARTSTAT_UARTTXFREE_MASK       0x4UL
#define _SC_UARTSTAT_UARTTXFREE_DEFAULT    0x00000000UL
#define SC_UARTSTAT_UARTTXFREE_DEFAULT     (_SC_UARTSTAT_UARTTXFREE_DEFAULT << 2)
#define SC_UARTSTAT_UARTRXVAL              (0x1UL << 1)
#define _SC_UARTSTAT_UARTRXVAL_SHIFT       1
#define _SC_UARTSTAT_UARTRXVAL_MASK        0x2UL
#define _SC_UARTSTAT_UARTRXVAL_DEFAULT     0x00000000UL
#define SC_UARTSTAT_UARTRXVAL_DEFAULT      (_SC_UARTSTAT_UARTRXVAL_DEFAULT << 1)
#define SC_UARTSTAT_UARTCTS                (0x1UL << 0)
#define _SC_UARTSTAT_UARTCTS_SHIFT         0
#define _SC_UARTSTAT_UARTCTS_MASK          0x1UL
#define _SC_UARTSTAT_UARTCTS_DEFAULT       0x00000000UL
#define SC_UARTSTAT_UARTCTS_DEFAULT        (_SC_UARTSTAT_UARTCTS_DEFAULT << 0)

/* Bit fields for SC TWICTRL1 */
#define _SC_TWICTRL1_RESETVALUE          0x00000000UL
#define _SC_TWICTRL1_MASK                0x0000000FUL
#define SC_TWICTRL1_TWISTOP              (0x1UL << 3)
#define _SC_TWICTRL1_TWISTOP_SHIFT       3
#define _SC_TWICTRL1_TWISTOP_MASK        0x8UL
#define _SC_TWICTRL1_TWISTOP_DEFAULT     0x00000000UL
#define SC_TWICTRL1_TWISTOP_DEFAULT      (_SC_TWICTRL1_TWISTOP_DEFAULT << 3)
#define SC_TWICTRL1_TWISTART             (0x1UL << 2)
#define _SC_TWICTRL1_TWISTART_SHIFT      2
#define _SC_TWICTRL1_TWISTART_MASK       0x4UL
#define _SC_TWICTRL1_TWISTART_DEFAULT    0x00000000UL
#define SC_TWICTRL1_TWISTART_DEFAULT     (_SC_TWICTRL1_TWISTART_DEFAULT << 2)
#define SC_TWICTRL1_TWISEND              (0x1UL << 1)
#define _SC_TWICTRL1_TWISEND_SHIFT       1
#define _SC_TWICTRL1_TWISEND_MASK        0x2UL
#define _SC_TWICTRL1_TWISEND_DEFAULT     0x00000000UL
#define SC_TWICTRL1_TWISEND_DEFAULT      (_SC_TWICTRL1_TWISEND_DEFAULT << 1)
#define SC_TWICTRL1_TWIRECV              (0x1UL << 0)
#define _SC_TWICTRL1_TWIRECV_SHIFT       0
#define _SC_TWICTRL1_TWIRECV_MASK        0x1UL
#define _SC_TWICTRL1_TWIRECV_DEFAULT     0x00000000UL
#define SC_TWICTRL1_TWIRECV_DEFAULT      (_SC_TWICTRL1_TWIRECV_DEFAULT << 0)

/* Bit fields for SC TWICTRL2 */
#define _SC_TWICTRL2_RESETVALUE        0x00000000UL
#define _SC_TWICTRL2_MASK              0x00000001UL
#define _SC_TWICTRL2_TWIACK_SHIFT      0
#define _SC_TWICTRL2_TWIACK_MASK       0x1UL
#define _SC_TWICTRL2_TWIACK_DEFAULT    0x00000000UL
#define SC_TWICTRL2_TWIACK_DEFAULT     (_SC_TWICTRL2_TWIACK_DEFAULT << 0)

/* Bit fields for SC MODE */
#define _SC_MODE_RESETVALUE      0x00000000UL
#define _SC_MODE_MASK            0x00000003UL
#define _SC_MODE_MODE_SHIFT      0
#define _SC_MODE_MODE_MASK       0x3UL
#define _SC_MODE_MODE_DEFAULT    0x00000000UL
#define _SC_MODE_MODE_DISABLED    0x00000000UL
#define _SC_MODE_MODE_UART       0x00000001UL
#define _SC_MODE_MODE_SPI        0x00000002UL
#define _SC_MODE_MODE_I2C        0x00000003UL
#define SC_MODE_MODE_DEFAULT     (_SC_MODE_MODE_DEFAULT << 0)
#define SC_MODE_MODE_DISABLED    (_SC_MODE_MODE_DISABLED << 0)
#define SC_MODE_MODE_UART        (_SC_MODE_MODE_UART << 0)
#define SC_MODE_MODE_SPI         (_SC_MODE_MODE_SPI << 0)
#define SC_MODE_MODE_I2C         (_SC_MODE_MODE_I2C << 0)

/* Bit fields for SC SPICFG */
#define _SC_SPICFG_RESETVALUE          0x00000000UL
#define _SC_SPICFG_MASK                0x0000003FUL
#define SC_SPICFG_SPIRXDRV             (0x1UL << 5)
#define _SC_SPICFG_SPIRXDRV_SHIFT      5
#define _SC_SPICFG_SPIRXDRV_MASK       0x20UL
#define _SC_SPICFG_SPIRXDRV_DEFAULT    0x00000000UL
#define SC_SPICFG_SPIRXDRV_DEFAULT     (_SC_SPICFG_SPIRXDRV_DEFAULT << 5)
#define SC_SPICFG_SPIMST               (0x1UL << 4)
#define _SC_SPICFG_SPIMST_SHIFT        4
#define _SC_SPICFG_SPIMST_MASK         0x10UL
#define _SC_SPICFG_SPIMST_DEFAULT      0x00000000UL
#define SC_SPICFG_SPIMST_DEFAULT       (_SC_SPICFG_SPIMST_DEFAULT << 4)
#define SC_SPICFG_SPIRPT               (0x1UL << 3)
#define _SC_SPICFG_SPIRPT_SHIFT        3
#define _SC_SPICFG_SPIRPT_MASK         0x8UL
#define _SC_SPICFG_SPIRPT_DEFAULT      0x00000000UL
#define SC_SPICFG_SPIRPT_DEFAULT       (_SC_SPICFG_SPIRPT_DEFAULT << 3)
#define SC_SPICFG_SPIORD               (0x1UL << 2)
#define _SC_SPICFG_SPIORD_SHIFT        2
#define _SC_SPICFG_SPIORD_MASK         0x4UL
#define _SC_SPICFG_SPIORD_DEFAULT      0x00000000UL
#define SC_SPICFG_SPIORD_DEFAULT       (_SC_SPICFG_SPIORD_DEFAULT << 2)
#define SC_SPICFG_SPIPHA               (0x1UL << 1)
#define _SC_SPICFG_SPIPHA_SHIFT        1
#define _SC_SPICFG_SPIPHA_MASK         0x2UL
#define _SC_SPICFG_SPIPHA_DEFAULT      0x00000000UL
#define SC_SPICFG_SPIPHA_DEFAULT       (_SC_SPICFG_SPIPHA_DEFAULT << 1)
#define SC_SPICFG_SPIPOL               (0x1UL << 0)
#define _SC_SPICFG_SPIPOL_SHIFT        0
#define _SC_SPICFG_SPIPOL_MASK         0x1UL
#define _SC_SPICFG_SPIPOL_DEFAULT      0x00000000UL
#define SC_SPICFG_SPIPOL_DEFAULT       (_SC_SPICFG_SPIPOL_DEFAULT << 0)

/* Bit fields for SC UARTCFG */
#define _SC_UARTCFG_RESETVALUE          0x00000000UL
#define _SC_UARTCFG_MASK                0x0000007FUL
#define SC_UARTCFG_UARTAUTO             (0x1UL << 6)
#define _SC_UARTCFG_UARTAUTO_SHIFT      6
#define _SC_UARTCFG_UARTAUTO_MASK       0x40UL
#define _SC_UARTCFG_UARTAUTO_DEFAULT    0x00000000UL
#define SC_UARTCFG_UARTAUTO_DEFAULT     (_SC_UARTCFG_UARTAUTO_DEFAULT << 6)
#define SC_UARTCFG_UARTFLOW             (0x1UL << 5)
#define _SC_UARTCFG_UARTFLOW_SHIFT      5
#define _SC_UARTCFG_UARTFLOW_MASK       0x20UL
#define _SC_UARTCFG_UARTFLOW_DEFAULT    0x00000000UL
#define SC_UARTCFG_UARTFLOW_DEFAULT     (_SC_UARTCFG_UARTFLOW_DEFAULT << 5)
#define SC_UARTCFG_UARTODD              (0x1UL << 4)
#define _SC_UARTCFG_UARTODD_SHIFT       4
#define _SC_UARTCFG_UARTODD_MASK        0x10UL
#define _SC_UARTCFG_UARTODD_DEFAULT     0x00000000UL
#define SC_UARTCFG_UARTODD_DEFAULT      (_SC_UARTCFG_UARTODD_DEFAULT << 4)
#define SC_UARTCFG_UARTPAR              (0x1UL << 3)
#define _SC_UARTCFG_UARTPAR_SHIFT       3
#define _SC_UARTCFG_UARTPAR_MASK        0x8UL
#define _SC_UARTCFG_UARTPAR_DEFAULT     0x00000000UL
#define SC_UARTCFG_UARTPAR_DEFAULT      (_SC_UARTCFG_UARTPAR_DEFAULT << 3)
#define SC_UARTCFG_UART2STP             (0x1UL << 2)
#define _SC_UARTCFG_UART2STP_SHIFT      2
#define _SC_UARTCFG_UART2STP_MASK       0x4UL
#define _SC_UARTCFG_UART2STP_DEFAULT    0x00000000UL
#define SC_UARTCFG_UART2STP_DEFAULT     (_SC_UARTCFG_UART2STP_DEFAULT << 2)
#define SC_UARTCFG_UART8BIT             (0x1UL << 1)
#define _SC_UARTCFG_UART8BIT_SHIFT      1
#define _SC_UARTCFG_UART8BIT_MASK       0x2UL
#define _SC_UARTCFG_UART8BIT_DEFAULT    0x00000000UL
#define SC_UARTCFG_UART8BIT_DEFAULT     (_SC_UARTCFG_UART8BIT_DEFAULT << 1)
#define SC_UARTCFG_UARTRTS              (0x1UL << 0)
#define _SC_UARTCFG_UARTRTS_SHIFT       0
#define _SC_UARTCFG_UARTRTS_MASK        0x1UL
#define _SC_UARTCFG_UARTRTS_DEFAULT     0x00000000UL
#define SC_UARTCFG_UARTRTS_DEFAULT      (_SC_UARTCFG_UARTRTS_DEFAULT << 0)

/* Bit fields for SC RATELIN */
#define _SC_RATELIN_RESETVALUE         0x00000000UL
#define _SC_RATELIN_MASK               0x0000000FUL
#define _SC_RATELIN_RATELIN_SHIFT      0
#define _SC_RATELIN_RATELIN_MASK       0xFUL
#define _SC_RATELIN_RATELIN_DEFAULT    0x00000000UL
#define SC_RATELIN_RATELIN_DEFAULT     (_SC_RATELIN_RATELIN_DEFAULT << 0)

/* Bit fields for SC RATEEXP */
#define _SC_RATEEXP_RESETVALUE         0x00000000UL
#define _SC_RATEEXP_MASK               0x0000000FUL
#define _SC_RATEEXP_RATEEXP_SHIFT      0
#define _SC_RATEEXP_RATEEXP_MASK       0xFUL
#define _SC_RATEEXP_RATEEXP_DEFAULT    0x00000000UL
#define SC_RATEEXP_RATEEXP_DEFAULT     (_SC_RATEEXP_RATEEXP_DEFAULT << 0)

/* Bit fields for SC UARTPER */
#define _SC_UARTPER_RESETVALUE         0x00000000UL
#define _SC_UARTPER_MASK               0x0000FFFFUL
#define _SC_UARTPER_UARTPER_SHIFT      0
#define _SC_UARTPER_UARTPER_MASK       0xFFFFUL
#define _SC_UARTPER_UARTPER_DEFAULT    0x00000000UL
#define SC_UARTPER_UARTPER_DEFAULT     (_SC_UARTPER_UARTPER_DEFAULT << 0)

/* Bit fields for SC UARTFRAC */
#define _SC_UARTFRAC_RESETVALUE          0x00000000UL
#define _SC_UARTFRAC_MASK                0x00000001UL
#define _SC_UARTFRAC_UARTFRAC_SHIFT      0
#define _SC_UARTFRAC_UARTFRAC_MASK       0x1UL
#define _SC_UARTFRAC_UARTFRAC_DEFAULT    0x00000000UL
#define SC_UARTFRAC_UARTFRAC_DEFAULT     (_SC_UARTFRAC_UARTFRAC_DEFAULT << 0)

/* Bit fields for SC RXCNTSAVED */
#define _SC_RXCNTSAVED_RESETVALUE            0x00000000UL
#define _SC_RXCNTSAVED_MASK                  0x00003FFFUL
#define _SC_RXCNTSAVED_RXCNTSAVED_SHIFT      0
#define _SC_RXCNTSAVED_RXCNTSAVED_MASK       0x3FFFUL
#define _SC_RXCNTSAVED_RXCNTSAVED_DEFAULT    0x00000000UL
#define SC_RXCNTSAVED_RXCNTSAVED_DEFAULT     (_SC_RXCNTSAVED_RXCNTSAVED_DEFAULT << 0)

/** @} End of group EM35X_SC_BitFields */
