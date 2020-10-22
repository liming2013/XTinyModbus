/********************************************************************************
* @File name: MD_RTU_CRC16.h
* @Author: zspace
* @Emial: 1358745329@qq.com
* @Version: 1.0
* @Date: 2020-4-10
* @Description: Modbus RTU CRC16 Check module
********************************************************************************/
#ifndef _MD_RTU_CRC16_H__
#define _MD_RTU_CRC16_H__

/*********************************HEAD FILE************************************/
#include "MD_RTU_Type.h"
#include "MD_RTU_Config.h"
/*********************************END******************************************/

/*********************************Function declaration************************/
uint16 MD_CRC16Update(uint16 CRC, uint8 byte);
/*********************************END******************************************/

#endif