/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : SPI1.h
**     Project     : FRDM-KL27Z_McuOnEclipseLib
**     Processor   : MKL25Z128VLK4
**     Component   : GenericSWSPI
**     Version     : Component 01.029, Driver 01.15, CPU db: 3.00.000
**     Repository  : Legacy User Components
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-03-17, 09:31, # CodeGen: 125
**     Abstract    :
**
**     Contents    :
**         RecvChar              - uint8_t SPI1_RecvChar(uint8_t *Chr);
**         SendChar              - uint8_t SPI1_SendChar(uint8_t val);
**         CharsInRxBuf          - uint8_t SPI1_CharsInRxBuf(void);
**         CharsInTxBuf          - uint8_t SPI1_CharsInTxBuf(void);
**         SetShiftClockPolarity - uint8_t SPI1_SetShiftClockPolarity(uint8_t Edge);
**         SetIdleClockPolarity  - uint8_t SPI1_SetIdleClockPolarity(uint8_t Level);
**         Write_ReadDummy       - void SPI1_Write_ReadDummy(uint8_t val);
**         SetSlowMode           - void SPI1_SetSlowMode(void);
**         SetFastMode           - void SPI1_SetFastMode(void);
**         Deinit                - void SPI1_Deinit(void);
**         Init                  - void SPI1_Init(void);
**
**     * Copyright (c) 2013-2017, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file SPI1.h
** @version 01.15
** @brief
**
*/         
/*!
**  @addtogroup SPI1_module SPI1 module documentation
**  @{
*/         

#ifndef __SPI1_H
#define __SPI1_H

/* MODULE SPI1. */
#include "MCUC1.h" /* SDK and API used */
#include "SPI1config.h" /* configuration */




#ifdef __cplusplus
extern "C" {
#endif

void SPI1_Deinit(void);
/*
** ===================================================================
**     Method      :  SPI1_Deinit (component GenericSWSPI)
**     Description :
**         Driver Deinitialization
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SPI1_SetFastMode(void);
/*
** ===================================================================
**     Method      :  SPI1_SetFastMode (component GenericSWSPI)
**     Description :
**         Sets the fast mode
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SPI1_SetSlowMode(void);
/*
** ===================================================================
**     Method      :  SPI1_SetSlowMode (component GenericSWSPI)
**     Description :
**         Changes to slow mode
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void SPI1_Write_ReadDummy(uint8_t val);
/*
** ===================================================================
**     Method      :  SPI1_Write_ReadDummy (component GenericSWSPI)
**     Description :
**         Writes to the bus, but does not read.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to put on the bus
**     Returns     : Nothing
** ===================================================================
*/

uint8_t SPI1_RecvChar(uint8_t *Chr);
/*
** ===================================================================
**     Method      :  SPI1_RecvChar (component GenericSWSPI)
**     Description :
**         If any data received, this method returns one character,
**         otherwise it returns an error code (it does not wait for
**         data).
**     Parameters  :
**         NAME            - DESCRIPTION
**       * Chr             - A pointer to the received character.
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_RXEMPTY - No data in receiver
**                           ERR_OVERRUN - Overrun error is detected
** ===================================================================
*/

uint8_t SPI1_SendChar(uint8_t val);
/*
** ===================================================================
**     Method      :  SPI1_SendChar (component GenericSWSPI)
**     Description :
**         Sends one character to the channel.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - Character to send.
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
** ===================================================================
*/

uint8_t SPI1_CharsInRxBuf(void);
/*
** ===================================================================
**     Method      :  SPI1_CharsInRxBuf (component GenericSWSPI)
**     Description :
**         Returns number of characters in the input buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Returns number of characters in the input
**                           buffer.
** ===================================================================
*/

#define SPI1_CharsInTxBuf()  0 /* we always directly send the characters without buffering */
/*
** ===================================================================
**     Method      :  SPI1_CharsInTxBuf (component GenericSWSPI)
**     Description :
**         Returns number of characters in the output buffer.
**     Parameters  : None
**     Returns     :
**         ---             - Returns number of characters in the output
**                           buffer.
** ===================================================================
*/

uint8_t SPI1_SetShiftClockPolarity(uint8_t Edge);
/*
** ===================================================================
**     Method      :  SPI1_SetShiftClockPolarity (component GenericSWSPI)
**     Description :
**         Sets the shift clock polarity at runtime. Output data will
**         be shifted on the selected edge polarity.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Edge            - Edge polarity, possible values:
**                           0-falling edge,
**                           1-rising edge.
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
** ===================================================================
*/

uint8_t SPI1_SetIdleClockPolarity(uint8_t Level);
/*
** ===================================================================
**     Method      :  SPI1_SetIdleClockPolarity (component GenericSWSPI)
**     Description :
**         Set the idle clock polarity at runtime. If communication
**         does not run, the clock signal will be set to the required
**         level.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Level           - Idle clock polarity:
**                           0-low
**                           1-high
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
** ===================================================================
*/

void SPI1_Init(void);
/*
** ===================================================================
**     Method      :  SPI1_Init (component GenericSWSPI)
**
**     Description :
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/


/* END SPI1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* ifndef __SPI1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
