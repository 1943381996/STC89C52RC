#include "headfile.h"

/***************************************************************
* 函数名称：Nixie_tube_disply
* 功能说明：数码管初始化函数
* 参数说明：
* 函数返回：
* 修改时间：2022年12月19日
* 备 注：
***************************************************************/
void Nixie_tube_int(void)
{
	S1 = 0;
	S2 = 0;
	S3 = 0;
	S4 = 0;
	
	S_A = 0;
	S_B = 0;
	S_C = 0;
	S_D = 0;
	S_E = 0;
	S_F = 0;
	S_G = 0;
	S_H = 0;
}
/***************************************************************
* 函数名称：Nixie_tube_disply
* 功能说明：数码管显示函数
* 参数说明：
* 函数返回：
* 修改时间：2022年12月19日
* 备 注：
***************************************************************/
void Nixie_tube_disply(uint16 number_date)
{
	uint16 S1_date = 0;
	uint16 S2_date = 0;
	uint16 S3_date = 0;
	uint16 S4_date = 0;
	
	S1_date = number_date / 1000;//千位
	S2_date = (number_date-S1_date*1000) / 100;//百位
	S3_date = (number_date-S1_date*1000-S2_date*100) / 10;//十位
	S4_date = (number_date-S1_date*1000-S2_date*100-S3_date*10) / 1;//个位
	
	Nixie_tube_disply_one(1, S1_date);
	Delayus(100);
	Nixie_tube_disply_one(2, S2_date);
	Delayus(100);
	Nixie_tube_disply_one(3, S3_date);
	Delayus(100);
	Nixie_tube_disply_one(4, S4_date);
	Delayus(100);
}
/***************************************************************
* 函数名称：Nixie_tube_disply_one
* 功能说明：数码管显示一个数字函数
* 参数说明：location : 位置  number_date : 要显示的数字
* 函数返回：
* 修改时间：2022年12月19日
* 备 注：
***************************************************************/
void Nixie_tube_disply_one(uint16 location, uint16 number_date)
{
	if(location == 1) S1 = 1,S2 = 0,S3 = 0,S4 = 0;
	if(location == 2) S2 = 1,S1 = 0,S3 = 0,S4 = 0;
	if(location == 3) S3 = 1,S1 = 0,S2 = 0,S4 = 0,S_H = 1;
	if(location == 4) S4 = 1,S1 = 0,S2 = 0,S3 = 0;
	
	switch(number_date)
	{
		case 0:
			S_A = 1;
			S_B = 1;
			S_C = 1;
			S_D = 1;
			S_E = 1;
			S_F = 1;
			S_G = 0;
			S_H = 0;
			break;
		case 1:
			S_A = 0;
			S_B = 1;
			S_C = 1;
			S_D = 0;
			S_E = 0;
			S_F = 0;
			S_G = 0;
			S_H = 0;
			break;
		case 2:
			S_A = 1;
			S_B = 1;
			S_C = 0;
			S_D = 1;
			S_E = 1;
			S_F = 0;
			S_G = 1;
			S_H = 0;
			break;
		case 3:
			S_A = 1;
			S_B = 1;
			S_C = 1;
			S_D = 1;
			S_E = 0;
			S_F = 0;
			S_G = 1;
			S_H = 0;
			break;
		case 4:
			S_A = 0;
			S_B = 1;
			S_C = 1;
			S_D = 0;
			S_E = 0;
			S_F = 1;
			S_G = 1;
			S_H = 0;
			break;
		case 5:
			S_A = 1;
			S_B = 0;
			S_C = 1;
			S_D = 1;
			S_E = 0;
			S_F = 1;
			S_G = 1;
			S_H = 0;
			break;
		case 6:
			S_A = 1;
			S_B = 0;
			S_C = 1;
			S_D = 1;
			S_E = 1;
			S_F = 1;
			S_G = 1;
			S_H = 0;
			break;
		case 7:
			S_A = 1;
			S_B = 1;
			S_C = 1;
			S_D = 0;
			S_E = 0;
			S_F = 0;
			S_G = 0;
			S_H = 0;
			break;
		case 8:
			S_A = 1;
			S_B = 1;
			S_C = 1;
			S_D = 1;
			S_E = 1;
			S_F = 1;
			S_G = 1;
			S_H = 0;
			break;
		case 9:
			S_A = 1;
			S_B = 1;
			S_C = 1;
			S_D = 1;
			S_E = 0;
			S_F = 1;
			S_G = 1;
			S_H = 0;
			break;
	}
}
/***************************************************************
* 函数名称：Nixie_tube_disply
* 功能说明：数码管清除函数
* 参数说明：
* 函数返回：
* 修改时间：2022年12月19日
* 备 注：
***************************************************************/
void Nixie_tube_purge(void)
{
	S1 = 1;
	S2 = 1;
	S3 = 1;
	S4 = 1;
	
	S_A = 1;
	S_B = 1;
	S_C = 1;
	S_D = 1;
	S_E = 1;
	S_F = 1;
}