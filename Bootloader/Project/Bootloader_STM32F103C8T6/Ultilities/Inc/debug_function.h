/**
 ********************************************************************************
 * @file    debug_function.h
 * @author  phuchocnhung@gmail.com
 * @date    Nov 22, 2024
 * @brief   
 * @detail
 ********************************************************************************
 */

#ifndef UTILS_DEBUG_FUNCTION_H_
#define UTILS_DEBUG_FUNCTION_H_

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "stm32f1xx_hal.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/************************************
 * MACROS AND DEFINES
 ************************************/
/*enable this line to get debug message over debug uart*/
#define UTILS_DEBUG_MSG_ENABLE 

#define UTILS_DEBUG_MSG_SIZE   80


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief         enum name UTILS_DEBUG_StateTypeDef
* @details       this enum is used to define the state of the debug function
*
*/

typedef enum
{
  UTILS_DEBUG_STATE_RESET             = 0x00U,    /*!< Peripheral is not yet Initialized
                                                   Value is allowed for gState and RxState */
  UTILS_DEBUG_STATE_READY             = 0x20U,    /*!< Peripheral Initialized and ready for use
                                                   Value is allowed for gState and RxState */
  UTILS_DEBUG_STATE_BUSY              = 0x24U,    /*!< an internal process is ongoing
                                                   Value is allowed for gState only */
  UTILS_DEBUG_STATE_BUSY_TX           = 0x21U,    /*!< Data Transmission process is ongoing
                                                   Value is allowed for gState only */
  UTILS_DEBUG_STATE_BUSY_RX           = 0x22U,    /*!< Data Reception process is ongoing
                                                   Value is allowed for RxState only */
  UTILS_DEBUG_STATE_BUSY_TX_RX        = 0x23U,    /*!< Data Transmission and Reception process is ongoing
                                                   Not to be used for neither gState nor RxState.
                                                   Value is result of combination (Or) between gState and RxState values */
  UTILS_DEBUG_STATE_TIMEOUT           = 0xA0U,    /*!< Timeout state
                                                   Value is allowed for gState only */
  UTILS_DEBUG_STATE_ERROR             = 0xE0U     /*!< Error
                                                   Value is allowed for gState only */
} UTILS_DEBUG_StateTypeDef;

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          struct name demo_t
* @details        This structure is .....
*
*/
// typedef struct
// 	{
// 		int a;
// 		int b;
// 	} demo_t;


/************************************
 * GLOBAL VARIABLE DECLARATIONS
 ************************************/
// extern int demo_variable;

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/
// extern void demo(void);
void UTILS_DEBUG_Init(UART_HandleTypeDef *utils_debug_uart);
void UTILS_DEBUG_PrintUARTMsg(char *format, ...);

#ifdef __cplusplus
}
#endif

#endif /*UTILS_DEBUG_FUNCTION_H_*/
