//
//
//    Copyright 2010 TheSeven
//
//
//    This file is part of emCORE.
//
//    emCORE is free software: you can redistribute it and/or
//    modify it under the terms of the GNU General Public License as
//    published by the Free Software Foundation, either version 2 of the
//    License, or (at your option) any later version.
//
//    emCORE is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//    See the GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License along
//    with emCORE.  If not, see <http://www.gnu.org/licenses/>.
//
//


#ifndef __SYNOPSYSOTG_H__
#define __SYNOPSYSOTG_H__


#include "global.h"


#ifdef TARGET_ipodnano2g
#include "target/ipodnano2g/s5l8701.h"
#endif
#ifdef TARGET_ipodclassic
#include "target/ipodclassic/s5l8702.h"
#endif
#ifdef TARGET_ipodnano4g
#include "target/ipodnano4g/s5l8720.h"
#endif


/*** OTG PHY CONTROL REGISTERS ***/
#define OPHYPWR     (*((volatile uint32_t*)(PHYBASE + 0x000)))
#define OPHYCLK     (*((volatile uint32_t*)(PHYBASE + 0x004)))
#define ORSTCON     (*((volatile uint32_t*)(PHYBASE + 0x008)))
#define OPHYUNK3    (*((volatile uint32_t*)(PHYBASE + 0x018)))
#define OPHYUNK1    (*((volatile uint32_t*)(PHYBASE + 0x01c)))
#define OPHYUNK2    (*((volatile uint32_t*)(PHYBASE + 0x044)))

/*** OTG LINK CORE REGISTERS ***/
/* Core Global Registers */
#define GOTGCTL     (*((volatile uint32_t*)(OTGBASE + 0x000)))
#define GOTGINT     (*((volatile uint32_t*)(OTGBASE + 0x004)))
#define GAHBCFG     (*((volatile uint32_t*)(OTGBASE + 0x008)))
#define GUSBCFG     (*((volatile uint32_t*)(OTGBASE + 0x00C)))
#define GRSTCTL     (*((volatile uint32_t*)(OTGBASE + 0x010)))
#define GINTSTS     (*((volatile uint32_t*)(OTGBASE + 0x014)))
#define GINTMSK     (*((volatile uint32_t*)(OTGBASE + 0x018)))
#define GRXSTSR     (*((volatile uint32_t*)(OTGBASE + 0x01C)))
#define GRXSTSP     (*((volatile uint32_t*)(OTGBASE + 0x020)))
#define GRXFSIZ     (*((volatile uint32_t*)(OTGBASE + 0x024)))
#define GNPTXFSIZ   (*((volatile uint32_t*)(OTGBASE + 0x028)))
#define GNPTXSTS    (*((volatile uint32_t*)(OTGBASE + 0x02C)))
#define HPTXFSIZ    (*((volatile uint32_t*)(OTGBASE + 0x100)))
#define DPTXFSIZ(x) (*((volatile uint32_t*)(OTGBASE + 0x100 + 4 * (x))))
#define DPTXFSIZ1   (*((volatile uint32_t*)(OTGBASE + 0x104)))
#define DPTXFSIZ2   (*((volatile uint32_t*)(OTGBASE + 0x108)))
#define DPTXFSIZ3   (*((volatile uint32_t*)(OTGBASE + 0x10C)))
#define DPTXFSIZ4   (*((volatile uint32_t*)(OTGBASE + 0x110)))
#define DPTXFSIZ5   (*((volatile uint32_t*)(OTGBASE + 0x114)))
#define DPTXFSIZ6   (*((volatile uint32_t*)(OTGBASE + 0x118)))
#define DPTXFSIZ7   (*((volatile uint32_t*)(OTGBASE + 0x11C)))
#define DPTXFSIZ8   (*((volatile uint32_t*)(OTGBASE + 0x120)))
#define DPTXFSIZ9   (*((volatile uint32_t*)(OTGBASE + 0x124)))
#define DPTXFSIZ10  (*((volatile uint32_t*)(OTGBASE + 0x128)))
#define DPTXFSIZ11  (*((volatile uint32_t*)(OTGBASE + 0x12C)))
#define DPTXFSIZ12  (*((volatile uint32_t*)(OTGBASE + 0x130)))
#define DPTXFSIZ13  (*((volatile uint32_t*)(OTGBASE + 0x134)))
#define DPTXFSIZ14  (*((volatile uint32_t*)(OTGBASE + 0x138)))
#define DPTXFSIZ15  (*((volatile uint32_t*)(OTGBASE + 0x13C)))

/*** HOST MODE REGISTERS ***/
/* Host Global Registers */
#define HCFG        (*((volatile uint32_t*)(OTGBASE + 0x400)))
#define HFIR        (*((volatile uint32_t*)(OTGBASE + 0x404)))
#define HFNUM       (*((volatile uint32_t*)(OTGBASE + 0x408)))
#define HPTXSTS     (*((volatile uint32_t*)(OTGBASE + 0x410)))
#define HAINT       (*((volatile uint32_t*)(OTGBASE + 0x414)))
#define HAINTMSK    (*((volatile uint32_t*)(OTGBASE + 0x418)))

/* Host Port Control and Status Registers */
#define HPRT        (*((volatile uint32_t*)(OTGBASE + 0x440)))

/* Host Channel-Specific Registers */
#define HCCHAR(x)   (*((volatile uint32_t*)(OTGBASE + 0x500 + 0x20 * (x))))
#define HCSPLT(x)   (*((volatile uint32_t*)(OTGBASE + 0x504 + 0x20 * (x))))
#define HCINT(x)    (*((volatile uint32_t*)(OTGBASE + 0x508 + 0x20 * (x))))
#define HCINTMSK(x) (*((volatile uint32_t*)(OTGBASE + 0x50C + 0x20 * (x))))
#define HCTSIZ(x)   (*((volatile uint32_t*)(OTGBASE + 0x510 + 0x20 * (x))))
#define HCDMA(x)    (*((volatile uint32_t*)(OTGBASE + 0x514 + 0x20 * (x))))
#define HCCHAR0     (*((volatile uint32_t*)(OTGBASE + 0x500)))
#define HCSPLT0     (*((volatile uint32_t*)(OTGBASE + 0x504)))
#define HCINT0      (*((volatile uint32_t*)(OTGBASE + 0x508)))
#define HCINTMSK0   (*((volatile uint32_t*)(OTGBASE + 0x50C)))
#define HCTSIZ0     (*((volatile uint32_t*)(OTGBASE + 0x510)))
#define HCDMA0      (*((volatile uint32_t*)(OTGBASE + 0x514)))
#define HCCHAR1     (*((volatile uint32_t*)(OTGBASE + 0x520)))
#define HCSPLT1     (*((volatile uint32_t*)(OTGBASE + 0x524)))
#define HCINT1      (*((volatile uint32_t*)(OTGBASE + 0x528)))
#define HCINTMSK1   (*((volatile uint32_t*)(OTGBASE + 0x52C)))
#define HCTSIZ1     (*((volatile uint32_t*)(OTGBASE + 0x530)))
#define HCDMA1      (*((volatile uint32_t*)(OTGBASE + 0x534)))
#define HCCHAR2     (*((volatile uint32_t*)(OTGBASE + 0x540)))
#define HCSPLT2     (*((volatile uint32_t*)(OTGBASE + 0x544)))
#define HCINT2      (*((volatile uint32_t*)(OTGBASE + 0x548)))
#define HCINTMSK2   (*((volatile uint32_t*)(OTGBASE + 0x54C)))
#define HCTSIZ2     (*((volatile uint32_t*)(OTGBASE + 0x550)))
#define HCDMA2      (*((volatile uint32_t*)(OTGBASE + 0x554)))
#define HCCHAR3     (*((volatile uint32_t*)(OTGBASE + 0x560)))
#define HCSPLT3     (*((volatile uint32_t*)(OTGBASE + 0x564)))
#define HCINT3      (*((volatile uint32_t*)(OTGBASE + 0x568)))
#define HCINTMSK3   (*((volatile uint32_t*)(OTGBASE + 0x56C)))
#define HCTSIZ3     (*((volatile uint32_t*)(OTGBASE + 0x570)))
#define HCDMA3      (*((volatile uint32_t*)(OTGBASE + 0x574)))
#define HCCHAR4     (*((volatile uint32_t*)(OTGBASE + 0x580)))
#define HCSPLT4     (*((volatile uint32_t*)(OTGBASE + 0x584)))
#define HCINT4      (*((volatile uint32_t*)(OTGBASE + 0x588)))
#define HCINTMSK4   (*((volatile uint32_t*)(OTGBASE + 0x58C)))
#define HCTSIZ4     (*((volatile uint32_t*)(OTGBASE + 0x590)))
#define HCDMA4      (*((volatile uint32_t*)(OTGBASE + 0x594)))
#define HCCHAR5     (*((volatile uint32_t*)(OTGBASE + 0x5A0)))
#define HCSPLT5     (*((volatile uint32_t*)(OTGBASE + 0x5A4)))
#define HCINT5      (*((volatile uint32_t*)(OTGBASE + 0x5A8)))
#define HCINTMSK5   (*((volatile uint32_t*)(OTGBASE + 0x5AC)))
#define HCTSIZ5     (*((volatile uint32_t*)(OTGBASE + 0x5B0)))
#define HCDMA5      (*((volatile uint32_t*)(OTGBASE + 0x5B4)))
#define HCCHAR6     (*((volatile uint32_t*)(OTGBASE + 0x5C0)))
#define HCSPLT6     (*((volatile uint32_t*)(OTGBASE + 0x5C4)))
#define HCINT6      (*((volatile uint32_t*)(OTGBASE + 0x5C8)))
#define HCINTMSK6   (*((volatile uint32_t*)(OTGBASE + 0x5CC)))
#define HCTSIZ6     (*((volatile uint32_t*)(OTGBASE + 0x5D0)))
#define HCDMA6      (*((volatile uint32_t*)(OTGBASE + 0x5D4)))
#define HCCHAR7     (*((volatile uint32_t*)(OTGBASE + 0x5E0)))
#define HCSPLT7     (*((volatile uint32_t*)(OTGBASE + 0x5E4)))
#define HCINT7      (*((volatile uint32_t*)(OTGBASE + 0x5E8)))
#define HCINTMSK7   (*((volatile uint32_t*)(OTGBASE + 0x5EC)))
#define HCTSIZ7     (*((volatile uint32_t*)(OTGBASE + 0x5F0)))
#define HCDMA7      (*((volatile uint32_t*)(OTGBASE + 0x5F4)))
#define HCCHAR8     (*((volatile uint32_t*)(OTGBASE + 0x600)))
#define HCSPLT8     (*((volatile uint32_t*)(OTGBASE + 0x604)))
#define HCINT8      (*((volatile uint32_t*)(OTGBASE + 0x608)))
#define HCINTMSK8   (*((volatile uint32_t*)(OTGBASE + 0x60C)))
#define HCTSIZ8     (*((volatile uint32_t*)(OTGBASE + 0x610)))
#define HCDMA8      (*((volatile uint32_t*)(OTGBASE + 0x614)))
#define HCCHAR9     (*((volatile uint32_t*)(OTGBASE + 0x620)))
#define HCSPLT9     (*((volatile uint32_t*)(OTGBASE + 0x624)))
#define HCINT9      (*((volatile uint32_t*)(OTGBASE + 0x628)))
#define HCINTMSK9   (*((volatile uint32_t*)(OTGBASE + 0x62C)))
#define HCTSIZ9     (*((volatile uint32_t*)(OTGBASE + 0x630)))
#define HCDMA9      (*((volatile uint32_t*)(OTGBASE + 0x634)))
#define HCCHAR10    (*((volatile uint32_t*)(OTGBASE + 0x640)))
#define HCSPLT10    (*((volatile uint32_t*)(OTGBASE + 0x644)))
#define HCINT10     (*((volatile uint32_t*)(OTGBASE + 0x648)))
#define HCINTMSK10  (*((volatile uint32_t*)(OTGBASE + 0x64C)))
#define HCTSIZ10    (*((volatile uint32_t*)(OTGBASE + 0x650)))
#define HCDMA10     (*((volatile uint32_t*)(OTGBASE + 0x654)))
#define HCCHAR11    (*((volatile uint32_t*)(OTGBASE + 0x660)))
#define HCSPLT11    (*((volatile uint32_t*)(OTGBASE + 0x664)))
#define HCINT11     (*((volatile uint32_t*)(OTGBASE + 0x668)))
#define HCINTMSK11  (*((volatile uint32_t*)(OTGBASE + 0x66C)))
#define HCTSIZ11    (*((volatile uint32_t*)(OTGBASE + 0x670)))
#define HCDMA11     (*((volatile uint32_t*)(OTGBASE + 0x674)))
#define HCCHAR12    (*((volatile uint32_t*)(OTGBASE + 0x680)))
#define HCSPLT12    (*((volatile uint32_t*)(OTGBASE + 0x684)))
#define HCINT12     (*((volatile uint32_t*)(OTGBASE + 0x688)))
#define HCINTMSK12  (*((volatile uint32_t*)(OTGBASE + 0x68C)))
#define HCTSIZ12    (*((volatile uint32_t*)(OTGBASE + 0x690)))
#define HCDMA12     (*((volatile uint32_t*)(OTGBASE + 0x694)))
#define HCCHAR13    (*((volatile uint32_t*)(OTGBASE + 0x6A0)))
#define HCSPLT13    (*((volatile uint32_t*)(OTGBASE + 0x6A4)))
#define HCINT13     (*((volatile uint32_t*)(OTGBASE + 0x6A8)))
#define HCINTMSK13  (*((volatile uint32_t*)(OTGBASE + 0x6AC)))
#define HCTSIZ13    (*((volatile uint32_t*)(OTGBASE + 0x6B0)))
#define HCDMA13     (*((volatile uint32_t*)(OTGBASE + 0x6B4)))
#define HCCHAR14    (*((volatile uint32_t*)(OTGBASE + 0x6C0)))
#define HCSPLT14    (*((volatile uint32_t*)(OTGBASE + 0x6C4)))
#define HCINT14     (*((volatile uint32_t*)(OTGBASE + 0x6C8)))
#define HCINTMSK14  (*((volatile uint32_t*)(OTGBASE + 0x6CC)))
#define HCTSIZ14    (*((volatile uint32_t*)(OTGBASE + 0x6D0)))
#define HCDMA14     (*((volatile uint32_t*)(OTGBASE + 0x6D4)))
#define HCCHAR15    (*((volatile uint32_t*)(OTGBASE + 0x6E0)))
#define HCSPLT15    (*((volatile uint32_t*)(OTGBASE + 0x6E4)))
#define HCINT15     (*((volatile uint32_t*)(OTGBASE + 0x6E8)))
#define HCINTMSK15  (*((volatile uint32_t*)(OTGBASE + 0x6EC)))
#define HCTSIZ15    (*((volatile uint32_t*)(OTGBASE + 0x6F0)))
#define HCDMA15     (*((volatile uint32_t*)(OTGBASE + 0x6F4)))

/*** DEVICE MODE REGISTERS ***/
/* Device Global Registers */
#define DCFG        (*((volatile uint32_t*)(OTGBASE + 0x800)))
#define DCTL        (*((volatile uint32_t*)(OTGBASE + 0x804)))
#define DSTS        (*((volatile uint32_t*)(OTGBASE + 0x808)))
#define DIEPMSK     (*((volatile uint32_t*)(OTGBASE + 0x810)))
#define DOEPMSK     (*((volatile uint32_t*)(OTGBASE + 0x814)))
#define DAINT       (*((volatile uint32_t*)(OTGBASE + 0x818)))
#define DAINTMSK    (*((volatile uint32_t*)(OTGBASE + 0x81C)))
#define DTKNQR1     (*((volatile uint32_t*)(OTGBASE + 0x820)))
#define DTKNQR2     (*((volatile uint32_t*)(OTGBASE + 0x824)))
#define DVBUSDIS    (*((volatile uint32_t*)(OTGBASE + 0x828)))
#define DVBUSPULSE  (*((volatile uint32_t*)(OTGBASE + 0x82C)))
#define DTKNQR3     (*((volatile uint32_t*)(OTGBASE + 0x830)))
#define DTKNQR4     (*((volatile uint32_t*)(OTGBASE + 0x834)))

/* Device Logical IN Endpoint-Specific Registers */
#define DIEPCTL(x)  (*((volatile uint32_t*)(OTGBASE + 0x900 + 0x20 * (x))))
#define DIEPINT(x)  (*((volatile uint32_t*)(OTGBASE + 0x908 + 0x20 * (x))))
#define DIEPTSIZ(x) (*((volatile uint32_t*)(OTGBASE + 0x910 + 0x20 * (x))))
#define DIEPDMA(x)  (*((volatile uint32_t*)(OTGBASE + 0x914 + 0x20 * (x))))
#define DIEPCTL0    (*((volatile uint32_t*)(OTGBASE + 0x900)))
#define DIEPINT0    (*((volatile uint32_t*)(OTGBASE + 0x908)))
#define DIEPTSIZ0   (*((volatile uint32_t*)(OTGBASE + 0x910)))
#define DIEPDMA0    (*((volatile uint32_t*)(OTGBASE + 0x914)))
#define DIEPCTL1    (*((volatile uint32_t*)(OTGBASE + 0x920)))
#define DIEPINT1    (*((volatile uint32_t*)(OTGBASE + 0x928)))
#define DIEPTSIZ1   (*((volatile uint32_t*)(OTGBASE + 0x930)))
#define DIEPDMA1    (*((volatile uint32_t*)(OTGBASE + 0x934)))
#define DIEPCTL2    (*((volatile uint32_t*)(OTGBASE + 0x940)))
#define DIEPINT2    (*((volatile uint32_t*)(OTGBASE + 0x948)))
#define DIEPTSIZ2   (*((volatile uint32_t*)(OTGBASE + 0x950)))
#define DIEPDMA2    (*((volatile uint32_t*)(OTGBASE + 0x954)))
#define DIEPCTL3    (*((volatile uint32_t*)(OTGBASE + 0x960)))
#define DIEPINT3    (*((volatile uint32_t*)(OTGBASE + 0x968)))
#define DIEPTSIZ3   (*((volatile uint32_t*)(OTGBASE + 0x970)))
#define DIEPDMA3    (*((volatile uint32_t*)(OTGBASE + 0x974)))
#define DIEPCTL4    (*((volatile uint32_t*)(OTGBASE + 0x980)))
#define DIEPINT4    (*((volatile uint32_t*)(OTGBASE + 0x988)))
#define DIEPTSIZ4   (*((volatile uint32_t*)(OTGBASE + 0x990)))
#define DIEPDMA4    (*((volatile uint32_t*)(OTGBASE + 0x994)))
#define DIEPCTL5    (*((volatile uint32_t*)(OTGBASE + 0x9A0)))
#define DIEPINT5    (*((volatile uint32_t*)(OTGBASE + 0x9A8)))
#define DIEPTSIZ5   (*((volatile uint32_t*)(OTGBASE + 0x9B0)))
#define DIEPDMA5    (*((volatile uint32_t*)(OTGBASE + 0x9B4)))
#define DIEPCTL6    (*((volatile uint32_t*)(OTGBASE + 0x9C0)))
#define DIEPINT6    (*((volatile uint32_t*)(OTGBASE + 0x9C8)))
#define DIEPTSIZ6   (*((volatile uint32_t*)(OTGBASE + 0x9D0)))
#define DIEPDMA6    (*((volatile uint32_t*)(OTGBASE + 0x9D4)))
#define DIEPCTL7    (*((volatile uint32_t*)(OTGBASE + 0x9E0)))
#define DIEPINT7    (*((volatile uint32_t*)(OTGBASE + 0x9E8)))
#define DIEPTSIZ7   (*((volatile uint32_t*)(OTGBASE + 0x9F0)))
#define DIEPDMA7    (*((volatile uint32_t*)(OTGBASE + 0x9F4)))
#define DIEPCTL8    (*((volatile uint32_t*)(OTGBASE + 0xA00)))
#define DIEPINT8    (*((volatile uint32_t*)(OTGBASE + 0xA08)))
#define DIEPTSIZ8   (*((volatile uint32_t*)(OTGBASE + 0xA10)))
#define DIEPDMA8    (*((volatile uint32_t*)(OTGBASE + 0xA14)))
#define DIEPCTL9    (*((volatile uint32_t*)(OTGBASE + 0xA20)))
#define DIEPINT9    (*((volatile uint32_t*)(OTGBASE + 0xA28)))
#define DIEPTSIZ9   (*((volatile uint32_t*)(OTGBASE + 0xA30)))
#define DIEPDMA9    (*((volatile uint32_t*)(OTGBASE + 0xA34)))
#define DIEPCTL10   (*((volatile uint32_t*)(OTGBASE + 0xA40)))
#define DIEPINT10   (*((volatile uint32_t*)(OTGBASE + 0xA48)))
#define DIEPTSIZ10  (*((volatile uint32_t*)(OTGBASE + 0xA50)))
#define DIEPDMA10   (*((volatile uint32_t*)(OTGBASE + 0xA54)))
#define DIEPCTL11   (*((volatile uint32_t*)(OTGBASE + 0xA60)))
#define DIEPINT11   (*((volatile uint32_t*)(OTGBASE + 0xA68)))
#define DIEPTSIZ11  (*((volatile uint32_t*)(OTGBASE + 0xA70)))
#define DIEPDMA11   (*((volatile uint32_t*)(OTGBASE + 0xA74)))
#define DIEPCTL12   (*((volatile uint32_t*)(OTGBASE + 0xA80)))
#define DIEPINT12   (*((volatile uint32_t*)(OTGBASE + 0xA88)))
#define DIEPTSIZ12  (*((volatile uint32_t*)(OTGBASE + 0xA90)))
#define DIEPDMA12   (*((volatile uint32_t*)(OTGBASE + 0xA94)))
#define DIEPCTL13   (*((volatile uint32_t*)(OTGBASE + 0xAA0)))
#define DIEPINT13   (*((volatile uint32_t*)(OTGBASE + 0xAA8)))
#define DIEPTSIZ13  (*((volatile uint32_t*)(OTGBASE + 0xAB0)))
#define DIEPDMA13   (*((volatile uint32_t*)(OTGBASE + 0xAB4)))
#define DIEPCTL14   (*((volatile uint32_t*)(OTGBASE + 0xAC0)))
#define DIEPINT14   (*((volatile uint32_t*)(OTGBASE + 0xAC8)))
#define DIEPTSIZ14  (*((volatile uint32_t*)(OTGBASE + 0xAD0)))
#define DIEPDMA14   (*((volatile uint32_t*)(OTGBASE + 0xAD4)))
#define DIEPCTL15   (*((volatile uint32_t*)(OTGBASE + 0xAE0)))
#define DIEPINT15   (*((volatile uint32_t*)(OTGBASE + 0xAE8)))
#define DIEPTSIZ15  (*((volatile uint32_t*)(OTGBASE + 0xAF0)))
#define DIEPDMA15   (*((volatile uint32_t*)(OTGBASE + 0xAF4)))

/* Device Logical OUT Endpoint-Specific Registers */
#define DOEPCTL(x)  (*((volatile uint32_t*)(OTGBASE + 0xB00 + 0x20 * (x))))
#define DOEPINT(x)  (*((volatile uint32_t*)(OTGBASE + 0xB08 + 0x20 * (x))))
#define DOEPTSIZ(x) (*((volatile uint32_t*)(OTGBASE + 0xB10 + 0x20 * (x))))
#define DOEPDMA(x)  (*((volatile uint32_t*)(OTGBASE + 0xB14 + 0x20 * (x))))
#define DOEPCTL0    (*((volatile uint32_t*)(OTGBASE + 0xB00)))
#define DOEPINT0    (*((volatile uint32_t*)(OTGBASE + 0xB08)))
#define DOEPTSIZ0   (*((volatile uint32_t*)(OTGBASE + 0xB10)))
#define DOEPDMA0    (*((volatile uint32_t*)(OTGBASE + 0xB14)))
#define DOEPCTL1    (*((volatile uint32_t*)(OTGBASE + 0xB20)))
#define DOEPINT1    (*((volatile uint32_t*)(OTGBASE + 0xB28)))
#define DOEPTSIZ1   (*((volatile uint32_t*)(OTGBASE + 0xB30)))
#define DOEPDMA1    (*((volatile uint32_t*)(OTGBASE + 0xB34)))
#define DOEPCTL2    (*((volatile uint32_t*)(OTGBASE + 0xB40)))
#define DOEPINT2    (*((volatile uint32_t*)(OTGBASE + 0xB48)))
#define DOEPTSIZ2   (*((volatile uint32_t*)(OTGBASE + 0xB50)))
#define DOEPDMA2    (*((volatile uint32_t*)(OTGBASE + 0xB54)))
#define DOEPCTL3    (*((volatile uint32_t*)(OTGBASE + 0xB60)))
#define DOEPINT3    (*((volatile uint32_t*)(OTGBASE + 0xB68)))
#define DOEPTSIZ3   (*((volatile uint32_t*)(OTGBASE + 0xB70)))
#define DOEPDMA3    (*((volatile uint32_t*)(OTGBASE + 0xB74)))
#define DOEPCTL4    (*((volatile uint32_t*)(OTGBASE + 0xB80)))
#define DOEPINT4    (*((volatile uint32_t*)(OTGBASE + 0xB88)))
#define DOEPTSIZ4   (*((volatile uint32_t*)(OTGBASE + 0xB90)))
#define DOEPDMA4    (*((volatile uint32_t*)(OTGBASE + 0xB94)))
#define DOEPCTL5    (*((volatile uint32_t*)(OTGBASE + 0xBA0)))
#define DOEPINT5    (*((volatile uint32_t*)(OTGBASE + 0xBA8)))
#define DOEPTSIZ5   (*((volatile uint32_t*)(OTGBASE + 0xBB0)))
#define DOEPDMA5    (*((volatile uint32_t*)(OTGBASE + 0xBB4)))
#define DOEPCTL6    (*((volatile uint32_t*)(OTGBASE + 0xBC0)))
#define DOEPINT6    (*((volatile uint32_t*)(OTGBASE + 0xBC8)))
#define DOEPTSIZ6   (*((volatile uint32_t*)(OTGBASE + 0xBD0)))
#define DOEPDMA6    (*((volatile uint32_t*)(OTGBASE + 0xBD4)))
#define DOEPCTL7    (*((volatile uint32_t*)(OTGBASE + 0xBE0)))
#define DOEPINT7    (*((volatile uint32_t*)(OTGBASE + 0xBE8)))
#define DOEPTSIZ7   (*((volatile uint32_t*)(OTGBASE + 0xBF0)))
#define DOEPDMA7    (*((volatile uint32_t*)(OTGBASE + 0xBF4)))
#define DOEPCTL8    (*((volatile uint32_t*)(OTGBASE + 0xC00)))
#define DOEPINT8    (*((volatile uint32_t*)(OTGBASE + 0xC08)))
#define DOEPTSIZ8   (*((volatile uint32_t*)(OTGBASE + 0xC10)))
#define DOEPDMA8    (*((volatile uint32_t*)(OTGBASE + 0xC14)))
#define DOEPCTL9    (*((volatile uint32_t*)(OTGBASE + 0xC20)))
#define DOEPINT9    (*((volatile uint32_t*)(OTGBASE + 0xC28)))
#define DOEPTSIZ9   (*((volatile uint32_t*)(OTGBASE + 0xC30)))
#define DOEPDMA9    (*((volatile uint32_t*)(OTGBASE + 0xC34)))
#define DOEPCTL10   (*((volatile uint32_t*)(OTGBASE + 0xC40)))
#define DOEPINT10   (*((volatile uint32_t*)(OTGBASE + 0xC48)))
#define DOEPTSIZ10  (*((volatile uint32_t*)(OTGBASE + 0xC50)))
#define DOEPDMA10   (*((volatile uint32_t*)(OTGBASE + 0xC54)))
#define DOEPCTL11   (*((volatile uint32_t*)(OTGBASE + 0xC60)))
#define DOEPINT11   (*((volatile uint32_t*)(OTGBASE + 0xC68)))
#define DOEPTSIZ11  (*((volatile uint32_t*)(OTGBASE + 0xC70)))
#define DOEPDMA11   (*((volatile uint32_t*)(OTGBASE + 0xC74)))
#define DOEPCTL12   (*((volatile uint32_t*)(OTGBASE + 0xC80)))
#define DOEPINT12   (*((volatile uint32_t*)(OTGBASE + 0xC88)))
#define DOEPTSIZ12  (*((volatile uint32_t*)(OTGBASE + 0xC90)))
#define DOEPDMA12   (*((volatile uint32_t*)(OTGBASE + 0xC94)))
#define DOEPCTL13   (*((volatile uint32_t*)(OTGBASE + 0xCA0)))
#define DOEPINT13   (*((volatile uint32_t*)(OTGBASE + 0xCA8)))
#define DOEPTSIZ13  (*((volatile uint32_t*)(OTGBASE + 0xCB0)))
#define DOEPDMA13   (*((volatile uint32_t*)(OTGBASE + 0xCB4)))
#define DOEPCTL14   (*((volatile uint32_t*)(OTGBASE + 0xCC0)))
#define DOEPINT14   (*((volatile uint32_t*)(OTGBASE + 0xCC8)))
#define DOEPTSIZ14  (*((volatile uint32_t*)(OTGBASE + 0xCD0)))
#define DOEPDMA14   (*((volatile uint32_t*)(OTGBASE + 0xCD4)))
#define DOEPCTL15   (*((volatile uint32_t*)(OTGBASE + 0xCE0)))
#define DOEPINT15   (*((volatile uint32_t*)(OTGBASE + 0xCE8)))
#define DOEPTSIZ15  (*((volatile uint32_t*)(OTGBASE + 0xCF0)))
#define DOEPDMA15   (*((volatile uint32_t*)(OTGBASE + 0xCF4)))

/* Power and Clock Gating Register */
#define PCGCCTL     (*((volatile uint32_t*)(OTGBASE + 0xE00)))


#endif
