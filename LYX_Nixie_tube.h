#ifndef _LYX_Nixie_tube_
#define _LYX_Nixie_tube_

//数码管引脚声明
#define S1 P24 
#define S2 P25
#define S3 P26
#define S4 P27
	
#define S_A P00//a
#define S_B P01//b
#define S_C P02//c
#define S_D P03//d
#define S_E P04//e
#define S_F P05//f
#define S_G P06//g
#define S_H P07//h

void Nixie_tube_int(void);
void Nixie_tube_purge(void);
void Nixie_tube_disply(uint16 number_date);
void Nixie_tube_disply_one(uint16 location, uint16 number_date);
#endif