#pragma once
/******************************************************************************/
/* File   : Std_Types.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Platform_Types.hpp"
#include "Compiler.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define STD_AR_RELEASE_MAJOR_VERSION                                           4
#define STD_AR_RELEASE_MINOR_VERSION                                           3
#define STD_LOW                                                                0
#define STD_HIGH                                                               1
#define STD_IDLE                                                               0
#define STD_ACTIVE                                                             1
#define STD_OFF                                                                0
#define STD_ON                                                                 1

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      E_OK     = 0
   ,  E_NOT_OK = 1
}Std_TypeReturn;

typedef struct{
   uint16 VendorID;
   uint16 ModuleID;
   uint8  InstanceID;
   uint8  SwMajorVersion;
   uint8  SwMinorVersion;
   uint8  SwPatchVersion;
}Std_TypeVersionInfo;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
