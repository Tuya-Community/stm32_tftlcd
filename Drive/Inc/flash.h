#ifndef __FLASH_H__
#define __FLASH_H__

#include "stm32l476xx.h"
#include "stm32l4xx_hal.h"

HAL_StatusTypeDef Flash_Init(void);
HAL_StatusTypeDef Flash_DeInit(void);
HAL_StatusTypeDef Flash_Erase(uint32_t Add);
HAL_StatusTypeDef STMFLASH_Write(uint8_t *src, uint32_t dest_addr, uint32_t Len);
HAL_StatusTypeDef STMFLASH_Read(uint8_t* buff, uint32_t dest_addr, uint32_t Len);


#endif /* __STMFLASH_H__ */
