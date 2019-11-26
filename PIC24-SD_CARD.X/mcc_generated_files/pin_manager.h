/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.145.0
        Device            :  PIC24FJ128GA204
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.36b
        MPLAB 	          :  MPLAB X v5.25
*/

/*
    (c) 2019 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RB8, high using LATB8.

  @Description
    Sets the GPIO pin, RB8, high using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 high (1)
    SDI1_SetHigh();
    </code>

*/
#define SDI1_SetHigh()          _LATB8 = 1
/**
  @Summary
    Sets the GPIO pin, RB8, low using LATB8.

  @Description
    Sets the GPIO pin, RB8, low using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB8 low (0)
    SDI1_SetLow();
    </code>

*/
#define SDI1_SetLow()           _LATB8 = 0
/**
  @Summary
    Toggles the GPIO pin, RB8, using LATB8.

  @Description
    Toggles the GPIO pin, RB8, using LATB8.

  @Preconditions
    The RB8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB8
    SDI1_Toggle();
    </code>

*/
#define SDI1_Toggle()           _LATB8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RB8.

  @Description
    Reads the value of the GPIO pin, RB8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB8
    postValue = SDI1_GetValue();
    </code>

*/
#define SDI1_GetValue()         _RB8
/**
  @Summary
    Configures the GPIO pin, RB8, as an input.

  @Description
    Configures the GPIO pin, RB8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an input
    SDI1_SetDigitalInput();
    </code>

*/
#define SDI1_SetDigitalInput()  _TRISB8 = 1
/**
  @Summary
    Configures the GPIO pin, RB8, as an output.

  @Description
    Configures the GPIO pin, RB8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB8 as an output
    SDI1_SetDigitalOutput();
    </code>

*/
#define SDI1_SetDigitalOutput() _TRISB8 = 0
/**
  @Summary
    Sets the GPIO pin, RB9, high using LATB9.

  @Description
    Sets the GPIO pin, RB9, high using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 high (1)
    SDO1_SetHigh();
    </code>

*/
#define SDO1_SetHigh()          _LATB9 = 1
/**
  @Summary
    Sets the GPIO pin, RB9, low using LATB9.

  @Description
    Sets the GPIO pin, RB9, low using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RB9 low (0)
    SDO1_SetLow();
    </code>

*/
#define SDO1_SetLow()           _LATB9 = 0
/**
  @Summary
    Toggles the GPIO pin, RB9, using LATB9.

  @Description
    Toggles the GPIO pin, RB9, using LATB9.

  @Preconditions
    The RB9 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RB9
    SDO1_Toggle();
    </code>

*/
#define SDO1_Toggle()           _LATB9 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RB9.

  @Description
    Reads the value of the GPIO pin, RB9.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RB9
    postValue = SDO1_GetValue();
    </code>

*/
#define SDO1_GetValue()         _RB9
/**
  @Summary
    Configures the GPIO pin, RB9, as an input.

  @Description
    Configures the GPIO pin, RB9, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an input
    SDO1_SetDigitalInput();
    </code>

*/
#define SDO1_SetDigitalInput()  _TRISB9 = 1
/**
  @Summary
    Configures the GPIO pin, RB9, as an output.

  @Description
    Configures the GPIO pin, RB9, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RB9 as an output
    SDO1_SetDigitalOutput();
    </code>

*/
#define SDO1_SetDigitalOutput() _TRISB9 = 0
/**
  @Summary
    Sets the GPIO pin, RC3, high using LATC3.

  @Description
    Sets the GPIO pin, RC3, high using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC3 high (1)
    SDCard_CS_SetHigh();
    </code>

*/
#define SDCard_CS_SetHigh()          _LATC3 = 1
/**
  @Summary
    Sets the GPIO pin, RC3, low using LATC3.

  @Description
    Sets the GPIO pin, RC3, low using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC3 low (0)
    SDCard_CS_SetLow();
    </code>

*/
#define SDCard_CS_SetLow()           _LATC3 = 0
/**
  @Summary
    Toggles the GPIO pin, RC3, using LATC3.

  @Description
    Toggles the GPIO pin, RC3, using LATC3.

  @Preconditions
    The RC3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC3
    SDCard_CS_Toggle();
    </code>

*/
#define SDCard_CS_Toggle()           _LATC3 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RC3.

  @Description
    Reads the value of the GPIO pin, RC3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC3
    postValue = SDCard_CS_GetValue();
    </code>

*/
#define SDCard_CS_GetValue()         _RC3
/**
  @Summary
    Configures the GPIO pin, RC3, as an input.

  @Description
    Configures the GPIO pin, RC3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC3 as an input
    SDCard_CS_SetDigitalInput();
    </code>

*/
#define SDCard_CS_SetDigitalInput()  _TRISC3 = 1
/**
  @Summary
    Configures the GPIO pin, RC3, as an output.

  @Description
    Configures the GPIO pin, RC3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC3 as an output
    SDCard_CS_SetDigitalOutput();
    </code>

*/
#define SDCard_CS_SetDigitalOutput() _TRISC3 = 0
/**
  @Summary
    Sets the GPIO pin, RC4, high using LATC4.

  @Description
    Sets the GPIO pin, RC4, high using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC4 high (1)
    SCK1OUT_SetHigh();
    </code>

*/
#define SCK1OUT_SetHigh()          _LATC4 = 1
/**
  @Summary
    Sets the GPIO pin, RC4, low using LATC4.

  @Description
    Sets the GPIO pin, RC4, low using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC4 low (0)
    SCK1OUT_SetLow();
    </code>

*/
#define SCK1OUT_SetLow()           _LATC4 = 0
/**
  @Summary
    Toggles the GPIO pin, RC4, using LATC4.

  @Description
    Toggles the GPIO pin, RC4, using LATC4.

  @Preconditions
    The RC4 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC4
    SCK1OUT_Toggle();
    </code>

*/
#define SCK1OUT_Toggle()           _LATC4 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RC4.

  @Description
    Reads the value of the GPIO pin, RC4.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC4
    postValue = SCK1OUT_GetValue();
    </code>

*/
#define SCK1OUT_GetValue()         _RC4
/**
  @Summary
    Configures the GPIO pin, RC4, as an input.

  @Description
    Configures the GPIO pin, RC4, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC4 as an input
    SCK1OUT_SetDigitalInput();
    </code>

*/
#define SCK1OUT_SetDigitalInput()  _TRISC4 = 1
/**
  @Summary
    Configures the GPIO pin, RC4, as an output.

  @Description
    Configures the GPIO pin, RC4, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC4 as an output
    SCK1OUT_SetDigitalOutput();
    </code>

*/
#define SCK1OUT_SetDigitalOutput() _TRISC4 = 0
/**
  @Summary
    Sets the GPIO pin, RC8, high using LATC8.

  @Description
    Sets the GPIO pin, RC8, high using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 high (1)
    LED_SetHigh();
    </code>

*/
#define LED_SetHigh()          _LATC8 = 1
/**
  @Summary
    Sets the GPIO pin, RC8, low using LATC8.

  @Description
    Sets the GPIO pin, RC8, low using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RC8 low (0)
    LED_SetLow();
    </code>

*/
#define LED_SetLow()           _LATC8 = 0
/**
  @Summary
    Toggles the GPIO pin, RC8, using LATC8.

  @Description
    Toggles the GPIO pin, RC8, using LATC8.

  @Preconditions
    The RC8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RC8
    LED_Toggle();
    </code>

*/
#define LED_Toggle()           _LATC8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RC8.

  @Description
    Reads the value of the GPIO pin, RC8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RC8
    postValue = LED_GetValue();
    </code>

*/
#define LED_GetValue()         _RC8
/**
  @Summary
    Configures the GPIO pin, RC8, as an input.

  @Description
    Configures the GPIO pin, RC8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an input
    LED_SetDigitalInput();
    </code>

*/
#define LED_SetDigitalInput()  _TRISC8 = 1
/**
  @Summary
    Configures the GPIO pin, RC8, as an output.

  @Description
    Configures the GPIO pin, RC8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RC8 as an output
    LED_SetDigitalOutput();
    </code>

*/
#define LED_SetDigitalOutput() _TRISC8 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ128GA204
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);


#endif
