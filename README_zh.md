# **STM32_TFTLCD**

[English](./README.md) | [中文](./README_zh.md)

## 简介 

本Demo通过使用ST的NUCLEO-L476RG开发板驱动2.8寸ALIENTEK TFTLCD模块实现手画板的功能。

已实现功能包括：

+ 手画板

  

## 快速上手 

### 编译与烧录
+ 下载Tuya IoTOS嵌入式代码

+ 执行Project.uvprojx文件

+ 点击软件中的编译，并完成下载


### 文件介绍 

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



### Demo入口

入口文件：main.c

重要函数：main()

+ 对mcu的USART，LCD，触摸等进行初始化配置，所有事件在while(1)中轮询判断。



### I/O 列表 

|                            TFTLCD                            |  USART1  | USART2  |
| :----------------------------------------------------------: | :------: | :-----: |
| LCD： LCD背光 PB10      片选端口PB12      数据/命令PA11     写数据PA12        读数据PA7      PC0~15,作为数据线 | PA9 TXD  | PA2 TXD |
| 触摸：PB1  INT              PB2  MISO              PB5  MOSI              PB11 SCLK            PB13 CS | PA10 RXD | PA3 RXD |

## 相关文档

涂鸦Demo中心：https://developer.tuya.com/demo



## 技术支持

您可以通过以下方法获得涂鸦的支持:

- 开发者中心：https://developer.tuya.com
- 帮助中心: https://support.tuya.com/help
- 技术支持工单中心: [https://service.console.tuya.com](https://service.console.tuya.com/) 

