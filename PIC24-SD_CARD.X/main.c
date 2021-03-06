 /**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
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

/**
  Section: Included Files
*/
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/fatfs/fatfs_demo.h"
#include "mcc_generated_files/pin_manager.h"
#include "mcc_generated_files/fatfs/ff.h"
#include "mcc_generated_files/sd_spi/sd_spi.h"
#include <stdio.h>
#define DELAY 16000
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    T1CON = 0x8030; // set timer 1 prescaler to 1:256 /TCLK/2
    LED_BLUE_SetLow();
    FATFS drive;
    FIL file;
    UINT actualLength;
    char data[] = "This is a very very very very  very very very very very very very very very very very very very long test message";
    if( SD_SPI_IsMediaPresent() == false)
    { 
        return 1 ;
    }

    if (f_mount(&drive,"0:",1) == FR_OK)
    {
        if (f_open(&file, "TEST.TXT", FA_WRITE | FA_CREATE_NEW ) == FR_OK)
        {
            f_write(&file, data, sizeof(data)-1, &actualLength );
            f_close(&file);
           
        }
        else
        {
            printf("Could not write to SD card");
        }
        f_mount(0,"0:",0);
    }
    else
    {  
        printf("Could not mount SD card");
    }
    printf("\nSuccessfully written to SD card");
    TMR1 = 0;
    LED_BLUE_SetHigh();
    while (TMR1 < DELAY)
    {
     //just wait
    }
     LED_BLUE_SetLow();
     while(1)
     {
         
     }
}
/**
 End of File
*/

