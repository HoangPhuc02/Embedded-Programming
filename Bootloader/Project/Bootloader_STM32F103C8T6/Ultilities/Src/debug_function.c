/**
 ********************************************************************************
 * @file    debug_function.c
 * @author  phuchocnhung@gmail.com
 * @date    Nov 22, 2024
 * @brief   
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include"debug_function.h"


/************************************
 * EXTERN VARIABLES
 ************************************/

/************************************
 * LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 ************************************/

/************************************
 * LOCAL MACROS AND DEFINES
 ************************************/
// #define U4L_DEMO      1000UL
/************************************
 * STATIC CONSTANTS
 ************************************/
// static const int sc4l_variable1;

/************************************
 * STATIC VARIABLES
 ************************************/
static UART_HandleTypeDef *util_debug_sp_uart;

/************************************
 * GLOBAL CONSTANTS
 ************************************/
// const int sc4g_variable1;

/************************************
 * GLOBAL VARIABLES
 ************************************/
// int s4g_variable1;

/************************************
 * STATIC FUNCTION PROTOTYPES
 ************************************/
// static void demo_static(void);

/************************************
 * STATIC FUNCTIONS
 ************************************/
/*static void demo_static(void)
{
	 //Coding here 
}
*/
/************************************
 * GLOBAL FUNCTIONS
 ************************************/
/**
* @brief          
* @details        
*
* @param[in]      
* Here's a detailed explanation of how it works:
(+) Function Declaration: The function is declared with a fixed parameter (char *format) followed by an ellipsis (...). This tells the compiler that the function can accept additional arguments beyond the fixed parameter.

(+) Including <stdarg.h>: To handle the variable arguments within the function, you need to include the <stdarg.h> header, which provides macros to access the variable arguments.
 
(+) Using va_list, va_start, va_arg, and va_end:
	va_list: A type to hold the information needed to retrieve the additional arguments.
	va_start: A macro to initialize the va_list variable with the fixed parameter.
	va_arg: A macro to retrieve each additional argument in the specified type.
	va_end: A macro to clean up the va_list variable.                      
*
* @return         void
*
*
* @pre            
* @post           
*
* @api
*
*/
void UTILS_DEBUG_Init(UART_HandleTypeDef *util_debug_uart)
{
	util_debug_sp_uart = util_debug_uart;
}
void UTILS_DEBUG_PrintUARTMsg(char *format, ...)
{
	if (util_debug_sp_uart == NULL) {
        // UART not initialized
        return;
    }
	
	#ifdef UTILS_DEBUG_MSG_ENABLE
	char buffer[UTILS_DEBUG_MSG_SIZE];

	/*Extract the argument list using va apis*/
	va_list args;
	va_start(args, format);

	// Use vsprintf to handle the variable arguments
	vsprintf(buffer, format, args);

	/*Use UART to print msg*/
	HAL_UART_Transmit(util_debug_sp_uart, (uint8_t*)buffer, strlen(buffer), 1000);
	va_end(args);
	#endif
}
