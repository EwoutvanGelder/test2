//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    : UB
// mods by	: J.F. van der Bent
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------
#include "main.h"
#include "stm32_ub_vga_screen.h"
#include <math.h>

	int line_begin_x = 10;
	int line_begin_y= 20;
	int line_eind_x=40;
	int line_breedte=60;

int main(void)
{

	//  uint32_t n;

	SystemInit(); // System speed to 168MHz

	UB_VGA_Screen_Init(); // Init VGA-Screen

	UB_VGA_FillScreen(VGA_COL_BLACK);
	UB_VGA_SetPixel(100,100,10);



  while(1)
  {

  }
}



