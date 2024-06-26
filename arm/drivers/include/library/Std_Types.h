 /******************************************************************************
 *
 * File Name: std_types.h
 *
 * Description: Header file for Standard types
 *
 * Author: Safia Hany
 *
 *Created on 25/3/2023
 *******************************************************************************/

#ifndef COMM_STD_TYPES_H_
#define COMM_STD_TYPES_H_


/* Boolean Data Type */
typedef unsigned char boolean;

/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define LOGIC_HIGH        (1u)
#define LOGIC_LOW         (0u)

#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define OUTPUT			(1u)
#define INPUT			(0u)

#define NULL_PTR    ((void*)0)

typedef unsigned char         uint8;          /*           0 .. 255              */
typedef signed char           sint8;          /*        -128 .. +127             */
typedef unsigned short        uint16;         /*           0 .. 65535            */
typedef signed short          sint16;         /*      -32768 .. +32767           */
typedef unsigned long         uint32;         /*           0 .. 4294967295       */
typedef signed long           sint32;         /* -2147483648 .. +2147483647      */
typedef unsigned long long    uint64;         /*       0 .. 18446744073709551615  */
typedef signed long long      sint64;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 float32;
typedef double                float64;

// same Data Types but in Pointer State
typedef unsigned char*           uint8_ptr;
typedef   signed char*            int8_ptr;
typedef unsigned short int*      uint16_ptr;
typedef   signed short int*       int16_ptr;
typedef unsigned long  int*      uint32_ptr;
typedef   signed long  int*       int32_ptr;
typedef unsigned long long int*  uint64_ptr;
typedef   signed long long int*   int64_ptr;
typedef float*                   float32_ptr;
typedef double*                  float64_ptr;
typedef long double*             float128_ptr;

#endif /* COMM_STD_TYPES_H_ */
