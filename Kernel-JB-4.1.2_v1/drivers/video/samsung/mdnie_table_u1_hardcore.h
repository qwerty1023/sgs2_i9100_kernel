
#include "mdnie.h"

//Tablas de hardcore (hr)
static const unsigned short tune_dynamic_gallery_hr[] = {
	/*start U1 dynamic gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x012c, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff,	/*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_ui_hr[] = {
	/*start U1 dynamic ui */
	0x0001, 0x0000,
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE_off CS : de on = d ,  de off = 9 */


	0x003F, 0x012c, /*CS GAIN 300 */

	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_video_hr[] = {
	/*start U1 dynamic video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS  de on = d ,  de off = 9 */


	0x003F, 0x012c, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0100, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000,	/*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_dynamic_vt_hr[] = {
	/*start U1 dynamic vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003f, 0x0100, /*CS GAIN */

	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x1d00, /*GAMMA start C210 */
	0x00D7, 0x1d00,
	0x00D8, 0x1d00,
	0x00D9, 0x1d00,
	0x00DA, 0x1d00,
	0x00DB, 0x1d00,
	0x00DC, 0x1d00,
	0x00DD, 0x1d00,
	0x00DE, 0x1d00,
	0x00DF, 0x1d00,
	0x00E0, 0x1d00,
	0x00E1, 0x1d00,
	0x00E2, 0x1d00,
	0x00E3, 0x1d00,
	0x00E4, 0x1d00,
	0x00E5, 0xa40e,
	0x00E6, 0xa40e,
	0x00E7, 0xa40e,
	0x00E8, 0xa819,
	0x00E9, 0xa40a,
	0x00EA, 0x2200,
	0x00EB, 0x1c25,
	0x00EC, 0x1842,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_gallery_hr[] = {
	/*start U1 movie gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x000f, /*CS GAIN 300 */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_ui_hr[] = {
	/*start U1 movie ui */
	0x0001, 0x0040, /*scr */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE_off CS : de on = d ,  de off = 9 */


	0x003F, 0x000f, /*CS GAIN 50 */

	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_video_hr[] = {
	/*start U1 movie video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS  de on = d ,  de off = 9 */


	0x003F, 0x000f, /*CS GAIN 300 */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_movie_vt_hr[] = {
	/*start U1 movie vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x000f, /*CS GAIN */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56e7, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};


static const unsigned short tune_standard_gallery_hr[] = {
	/*start U1 standard gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x000f, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_ui_hr[] = {
	/*start U1 standard ui */
	0x0001, 0x0040, /* */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000,	/*DNR bypass 0x1010 */
	0x002f, 0x0fff,	/*DNR bypass 0x0400 */
	0x003A, 0x0009,	/*HDTR DE_off CS : de on = d ,  de off = 9 */


	0x003F, 0x000f,	/*CS GAIN 30 */

	0x00c8, 0x0000,	/*kb R	SCR */
	0x00c9, 0x0000,	/*gc R */
	0x00ca, 0xffff,	/*rm R */
	0x00cb, 0xffff,	/*yw R */
	0x00cc, 0x0000,	/*kb G */
	0x00cd, 0xffff,	/*gc G */
	0x00ce, 0x0000,	/*rm G */
	0x00cf, 0xffff,	/*yw G */
	0x00d0, 0x00ff,	/*kb B */
	0x00d1, 0x00ff,	/*gc B */
	0x00d2, 0x00ff,	/*rm B */
	0x00d3, 0x00ff,	/*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_video_hr[] = {
	/*start U1 standard video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS  de on = d ,  de off = 9 */


	0x003F, 0x000f, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_standard_vt_hr[] = {
	/*start U1 standard vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x000f, /*CS GAIN */

	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0x0000, /*gc R */
	0x00ca, 0xffff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x0000, /*rm G */
	0x00cf, 0xffff, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x00ff, /*gc B */
	0x00d2, 0x00ff, /*rm B */
	0x00d3, 0x00ff, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_natural_gallery_hr[] = {
	/*start U1 natural gallery */
	0x0001, 0x0041, /*SCR + PCC */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x0180, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00,
	0x004b, 0x008f,
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_natural_ui_hr[] = {
	/*start U1 natural ui */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE_off CS : de on = d ,  de off = 9 */


	0x003F, 0x0180, /*CS GAIN 30 */

	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_natural_video_hr[] = {
	/*start U1 natural video */
	0x0001, 0x0041, /*PCC 40 */
	0x002c, 0x003C, /*DNR bypass 0x003C */
	0x002d, 0x1908, /*DNR bypass 0x0a08 */
	0x002e, 0x1005, /*DNR bypass 0x1010 */
	0x002f, 0x0400, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS  de on = d ,  de off = 9 */


	0x003F, 0x0180, /*CS GAIN  */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7a00, /*7300 */
	0x004b, 0x008F, /*008f */
	0x004d, 0x0000, /*pcc strength */
	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_natural_vt_hr[] = {
	/*start U1 natural vt */
	0x0001, 0x0040, /*SCR HDTR */
	0x002c, 0x0fff, /*DNR dirTh */
	0x002d, 0x19ff, /*DNR dirnumTh decon7Th */
	0x002e, 0xff16, /*DNR decon5Th maskTh */
	0x002f, 0x0000, /*DNR blTh */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003f, 0x0180, /*CS GAIN */

	0x00c8, 0x0000, /*kb R	SCR */
	0x00c9, 0xb6bc, /*gc R */
	0x00ca, 0xd4ff, /*rm R */
	0x00cb, 0xffff, /*yw R */
	0x00cc, 0x0000, /*kb G */
	0x00cd, 0xffff, /*gc G */
	0x00ce, 0x2148, /*rm G */
	0x00cf, 0xe8f1, /*yw G */
	0x00d0, 0x00ff, /*kb B */
	0x00d1, 0x53ee, /*gc B */
	0x00d2, 0x28f6, /*rm B */
	0x00d3, 0x56ec, /*yw B */
	0x00D6, 0x2000, /*GAMMA start */
	0x00D7, 0x2000,
	0x00D8, 0x2000,
	0x00D9, 0x2000,
	0x00DA, 0x2000,
	0x00DB, 0x2000,
	0x00DC, 0x2000,
	0x00DD, 0x2000,
	0x00DE, 0x2000,
	0x00DF, 0x2000,
	0x00E0, 0x2000,
	0x00E1, 0x2000,
	0x00E2, 0x2000,
	0x00E3, 0x2000,
	0x00E4, 0x2000,
	0x00E5, 0x2000,
	0x00E6, 0x2000,
	0x00E7, 0x2000,
	0x00E8, 0x2000,
	0x00E9, 0x2000,
	0x00EA, 0xa105,
	0x00EB, 0xa105,
	0x00EC, 0xa105,
	0x00ED, 0xFF00,
	0x00D5, 0x0001, /*GAMMA end */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_camera_hr[] = {
	/*start */
	0x0001, 0x0000, /* */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR (DE off)(CS only 9) */


	0x003F, 0x0000, /*CS GAIN */

	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_camera_outdoor_hr[] = {
	/*start */
	0x0001, 0x0002, /*OVE */
	0x002c, 0x0fff, /*DNR bypass 0x003C */
	0x002d, 0x1900, /*DNR bypass 0x0a08 */
	0x002e, 0x0000, /*DNR bypass 0x1010 */
	0x002f, 0x0fff, /*DNR bypass 0x0400 */
	0x003A, 0x0009, /*HDTR DE CS */


	0x003F, 0x0100, /*CS GAIN */

	0x0049, 0x0400, /*pcc skin */
	0x004a, 0x7300,
	0x004b, 0x008f,
	0x0054, 0x5a50, /*ove */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_hr[] = {
	/*start U1 cold */
	0x0001, 0x0044, /*SCR MCM HDTR */
	0x005b, 0x0064, /*MCM */
	0x0063, 0x9000, /*cb */
	0x0065, 0x0070, /*cr */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_cold_outdoor_hr[] = {
	/*start U1 cold outdoor */
	0x0001, 0x0046, /*SCR MCM HDTR OVE */
	0x0054, 0x5a50, /*OVE */
	0x005b, 0x0064, /*MCM */
	0x0063, 0x9000, /*cb */
	0x0065, 0x0070, /*cr */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_normal_outdoor_hr[] = {
	/*start U1 outdoor */
	0x0001, 0x0042, /*OVE */
	0x0054, 0x5a50, /*ove */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_hr[] = {
	/*start U1 warm */
	0x0001, 0x0044, /*SCR MCM HDTR */
	0x005b, 0x0064, /*MCM */
	0x0063, 0x7000, /*cb */
	0x0065, 0x0090, /*cr */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

static const unsigned short tune_warm_outdoor_hr[] = {
	/*start U1 warm outdoor */
	0x0001, 0x0046, /*SCR MCM PCC OVE */
	0x0054, 0x5a50, /*OVE */
	0x005b, 0x0064, /*MCM */
	0x0063, 0x7000, /*cb */
	0x0065, 0x0090, /*cr */
	0x0028, 0x0000, /*Register Mask */
	/*end */
	END_SEQ, 0x0000,
};

