/**
 ********************************************************************************
 * @file    bootloader_config.h
 * @author  phuchocnhung@gmail.com
 * @date    Nov 22, 2024
 * @brief   
 * @detail
 ********************************************************************************
 */

#ifndef BOOTLOADER_CONFIG_H_
#define BOOTLOADER_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif

/************************************
 * INCLUDES
 ************************************/
#include "stm32f1xx_hal.h"
/************************************
 * MACROS AND DEFINES
 ************************************/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/
/**
* @brief          
* @details       
*
*/
typedef enum
    {
        ENUM1 = 0U,   /**<  */
		ENUM2 = 1U
    } demo_e;


/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief          struct name demo_t
* @details        This structure is .....
*
*/
typedef struct
	{
		int a;
		int b;
	} demo_t;


/************************************
 * GLOBAL VARIABLE DECLARATIONS
 ************************************/
extern int demo_variable;

/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/
extern void demo(void);

#ifdef __cplusplus
}
#endif

#endif /*BOOTLOADER_CONFIG_H_*/