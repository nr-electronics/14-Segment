#ifndef LED_H_
#define LED_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define SA GPIO_PIN_2
#define SB GPIO_PIN_1
#define SC GPIO_PIN_10
#define SD GPIO_PIN_1
#define SE GPIO_PIN_0
#define SF GPIO_PIN_7
#define SG GPIO_PIN_3
#define SG2 GPIO_PIN_0
#define SH GPIO_PIN_6
#define SJ GPIO_PIN_5
#define SK GPIO_PIN_4
#define SL GPIO_PIN_15
#define SM GPIO_PIN_14
#define SN GPIO_PIN_13

#define SA_SET HAL_GPIO_WritePin(GPIOA, SA, GPIO_PIN_SET);
#define SA_RESET HAL_GPIO_WritePin(GPIOA, SA, GPIO_PIN_RESET);

#define SB_SET HAL_GPIO_WritePin(GPIOA, SB, GPIO_PIN_SET);
#define SB_RESET HAL_GPIO_WritePin(GPIOA, SB, GPIO_PIN_RESET);

#define SC_SET HAL_GPIO_WritePin(GPIOB, SC, GPIO_PIN_SET);
#define SC_RESET HAL_GPIO_WritePin(GPIOB, SC, GPIO_PIN_RESET);

#define SD_SET HAL_GPIO_WritePin(GPIOB, SD, GPIO_PIN_SET);
#define SD_RESET HAL_GPIO_WritePin(GPIOB, SD, GPIO_PIN_RESET);

#define SE_SET HAL_GPIO_WritePin(GPIOA, SE, GPIO_PIN_SET);
#define SE_RESET HAL_GPIO_WritePin(GPIOA, SE, GPIO_PIN_RESET);

#define SF_SET HAL_GPIO_WritePin(GPIOA, SF, GPIO_PIN_SET);
#define SF_RESET HAL_GPIO_WritePin(GPIOA, SF, GPIO_PIN_RESET);

#define SG_SET HAL_GPIO_WritePin(GPIOA, SG, GPIO_PIN_SET);
#define SG_RESET HAL_GPIO_WritePin(GPIOA, SG, GPIO_PIN_RESET);

#define SG2_SET HAL_GPIO_WritePin(GPIOB, SG2, GPIO_PIN_SET);
#define SG2_RESET HAL_GPIO_WritePin(GPIOB, SG2, GPIO_PIN_RESET);

#define SH_SET HAL_GPIO_WritePin(GPIOA, SH, GPIO_PIN_SET);
#define SH_RESET HAL_GPIO_WritePin(GPIOA, SH, GPIO_PIN_RESET);

#define SJ_SET HAL_GPIO_WritePin(GPIOA, SJ, GPIO_PIN_SET);
#define SJ_RESET HAL_GPIO_WritePin(GPIOA, SJ, GPIO_PIN_RESET);

#define SK_SET HAL_GPIO_WritePin(GPIOA, SK, GPIO_PIN_SET);
#define SK_RESET HAL_GPIO_WritePin(GPIOA, SK, GPIO_PIN_RESET);

#define SL_SET HAL_GPIO_WritePin(GPIOC, SL, GPIO_PIN_SET);
#define SL_RESET HAL_GPIO_WritePin(GPIOC, SL, GPIO_PIN_RESET);

#define SM_SET HAL_GPIO_WritePin(GPIOC, SM, GPIO_PIN_SET);
#define SM_RESET HAL_GPIO_WritePin(GPIOC, SM, GPIO_PIN_RESET);

#define SN_SET HAL_GPIO_WritePin(GPIOC, SN, GPIO_PIN_SET);
#define SN_RESET HAL_GPIO_WritePin(GPIOC, SN, GPIO_PIN_RESET);

void segchar (uint8_t seg);
void ledprint(char number);

#endif /* LED_H_ */
