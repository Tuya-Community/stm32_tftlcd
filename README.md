# **STM32_TFTLCD**

[English](./README.md) | [中文](./README_zh.md)

## Introduction  

 This Demo uses the ST nucleo-l476rg development board to drive the 2.8-inch ALIENTEK TFTLCD module to achieve the function of the hand-drawing board.  

The implemented features include:

+ Hand drawing board


## Quick start  

### Compile & Burn
+ Download Tuya IoTOS Embeded Code
+ Execute the Project.uvprojx file
+ Click Compile in the software and complete the download


### File introduction 

```
├── Drive
   ├── Src
       │   ├── flash.c
       │   ├── lcd.c
       │   ├── touch.c
       │   ├── usart.c
       │   ├── delay.c
    ├── Inc
       │   ├── flash.h
       │   ├── lcd.h
       │   ├── touch.h
       │   ├── usart.h
       │   ├── delay.h
       │   ├── FONT.h
       │   ├── type.h
├── FWlib
   ├── StartUp
       │   ├── startup_stm32l476xx.s         
   ├── STM32L4xx_HAL_Driver
        ├── Inc
        ├── Src
   ├── System_STM32L4
        ├── inc
        ├── src
 ├── IDE
    ├── ARM-MDK
       │   ├── STM32_TFTLCD.uvprojx
 ├── User   
       ├── Inc
          │   ├── main.h
       ├──Src
          └─── main.c 
```



### Demo entry

Entry file：main.c

Important functions：main()

+ Initialize and configure MCU USART,LCD,TOUCH, etc. All events are polled and judged in while(1)。

### I/O List  

|                            TFTLCD                            |  USART1  | USART2  |
| :----------------------------------------------------------: | :------: | :-----: |
| LCD： LCD_LED  PB10      LCD_CS  PB12      LCD_RS  PA11      LCD_WR  PA12        LCD_RD PA7       PC0~15  DATA | PA9 TXD  | PA2 TXD |
| TOUCH：PB1  INT              PB2  MISO              PB5  MOSI              PB11 SCLK            PB13 CS | PA10 RXD | PA3 RXD |

## 

## Related Documents

  Tuya Demo Center: https://developer.tuya.com/demo



## Technical Support

  You can get support for Tuya by using the following methods:

- Developer Center: https://developer.tuya.com
- Help Center: https://support.tuya.com/help
- Technical Support Work Order Center: [https://service.console.tuya.com](https://service.console.tuya.com/) 

