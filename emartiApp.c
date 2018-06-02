/*
	My First GEOS App on c64
	Coded by emarti
*/

#include <conio.h>
#include <geos.h>

#include "emartibmp.c"
#if (!(emartibmp_COLORS  == 2            && \
       emartibmp_WIDTH%8 == 0            && \
       emartibmp_WIDTH   <= SC_PIX_WIDTH && \
       emartibmp_HEIGHT  <= SC_PIX_HEIGHT))
#error Incompatible Bitmap
#endif

struct iconpic picture = {(char*)emartibmp, 0, 0, emartibmp_WIDTH/8, emartibmp_HEIGHT};

void main(void)
{
	clrscr();
	cputsxy(1,1,CBOLDON "emartiApp" CPLAINTEXT);
	cputsxy(1,2,CBOLDON "=========" CPLAINTEXT);
	cputsxy(1,4,CPLAINTEXT "GEOS icin derledigim ilk uygulama");
	cputsxy(1,5,CPLAINTEXT "Haziran 2018");
	cputsxy(1,14,CITALICON "Devam etmek icin bir tusa basin..." CPLAINTEXT);
	
	cgetc();
	DlgBoxOk(CBOLDON "Resim gosterilecek..." CPLAINTEXT,"Resim sonrasi icin SPACE tusuna basin...");
	
    BitmapUp(&picture);
    cgetc();
	DlgBoxOk(CBOLDON "Bilgi" CPLAINTEXT,"emarti'den sevgiler!");
}
