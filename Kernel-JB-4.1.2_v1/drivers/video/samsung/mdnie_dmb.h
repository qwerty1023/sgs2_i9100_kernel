#ifndef __MDNIE_DMB_H__
#define __MDNIE_DMB_H__

#include "mdnie.h"

#if defined(CONFIG_CPU_EXYNOS4210)
static const unsigned short tune_dynamic_dmb[] = {
	/* start U1 dynamic dmb */
	0x0001, 0x0041,	/* PCC 40 */
	0x002c, 0x003C,	/* DNR bypass 0x003C */
	0x002d, 0x1508,	/* DNR bypass 0x0a08 */
	0x002e, 0x1005,	/* DNR bypass 0x1010 */
	0x002f, 0x0400,	/* DNR bypass 0x0400 */
	0x003A, 0x000D,	/* HDTR DE CS  de on = d , de off = 9 */
	0x003B, 0x03ff,	/* DE SHARPNESS */
	0x003C, 0x0000,	/* NOISE LEVEL */
	0x003F, 0x012c,	/* CS GAIN */
	0x0042, 0x0020,	/* DE TH (MAX DIFF) */
	0x0049, 0x0400,	/* pcc skin */
	0x004a, 0x7a00,	/* 7300 */
	0x004b, 0x008F,	/* 008f */
	0x004d, 0x0100,	/* pcc strength */
	0x00c8, 0x0000,	/* kb R	SCR */
	0x00c9, 0x0000,	/* gc R */
	0x00ca, 0xffff,	/* rm R */
	0x00cb, 0xffff,	/* yw R */
	0x00cc, 0x0000,	/* kb G */
	0x00cd, 0xffff,	/* gc G */
	0x00ce, 0x0000,	/* rm G */
	0x00cf, 0xffff,	/* yw G */
	0x00d0, 0x00ff,	/* kb B */
	0x00d1, 0x00ff,	/* gc B */
	0x00d2, 0x00ff,	/* rm B */
	0x00d3, 0x00ff,	/* yw B */
	0x00D6, 0x1d00,	/* GAMMA start : address change for C210 */
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
	0x00D5, 0x0001,	/* GAMMA end */
	0x0028, 0x0000,	/* Register Mask */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_standard_dmb[] = {
	/* start U1 standard dmb */
	0x0001, 0x0041,	/* PCC 40 */
	0x002c, 0x003C,	/* DNR bypass 0x003C */
	0x002d, 0x1508,	/* DNR bypass 0x0a08 */
	0x002e, 0x1005,	/* DNR bypass 0x1010 */
	0x002f, 0x0400,	/* DNR bypass 0x0400 */
	0x003A, 0x000D,	/* HDTR DE CS  de on = d , de off = 9 */
	0x003B, 0x03ff,	/* DE SHARPNESS */
	0x003C, 0x0000,	/* NOISE LEVEL */
	0x003F, 0x0032,	/* CS GAIN */
	0x0042, 0x0020,	/* DE TH (MAX DIFF) */
	0x0049, 0x0400,	/* pcc skin */
	0x004a, 0x7a00,	/* 7300 */
	0x004b, 0x008F,	/* 008f */
	0x004d, 0x0100,	/* pcc strength */
	0x00c8, 0x0000,	/* kb R	SCR */
	0x00c9, 0x0000,	/* gc R */
	0x00ca, 0xffff,	/* rm R */
	0x00cb, 0xffff,	/* yw R */
	0x00cc, 0x0000,	/* kb G */
	0x00cd, 0xffff,	/* gc G */
	0x00ce, 0x0000,	/* rm G */
	0x00cf, 0xffff,	/* yw G */
	0x00d0, 0x00ff,	/* kb B */
	0x00d1, 0x00ff,	/* gc B */
	0x00d2, 0x00ff,	/* rm B */
	0x00d3, 0x00ff,	/* yw B */
	0x00D6, 0x2000,	/* GAMMA start */
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
	0x00D5, 0x0001,	/* GAMMA end */
	0x0028, 0x0000,	/* Register Mask */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_movie_dmb[] = {
	/* start U1 movie dmb */
	0x0001, 0x0041,	/* PCC 40 */
	0x002c, 0x003C,	/* DNR bypass 0x003C */
	0x002d, 0x1508,	/* DNR bypass 0x0a08 */
	0x002e, 0x1005,	/* DNR bypass 0x1010 */
	0x002f, 0x0400,	/* DNR bypass 0x0400 */
	0x003A, 0x000D,	/* HDTR DE CS  de on = d , de off = 9 */
	0x003B, 0x0001,	/* DE SHARPNESS */
	0x003C, 0x0000,	/* NOISE LEVEL */
	0x003F, 0x0032,	/* CS GAIN 300 */
	0x0042, 0x003f,	/* DE TH (MAX DIFF) */
	0x0049, 0x0400,	/* pcc skin */
	0x004a, 0x7a00,	/* 7300 */
	0x004b, 0x008F,	/* 008f */
	0x004d, 0x0000,	/* pcc strength */
	0x00c8, 0x0000,	/* kb R	SCR */
	0x00c9, 0xb6bc,	/* gc R */
	0x00ca, 0xd4ff,	/* rm R */
	0x00cb, 0xffff,	/* yw R */
	0x00cc, 0x0000,	/* kb G */
	0x00cd, 0xffff,	/* gc G */
	0x00ce, 0x2148,	/* rm G */
	0x00cf, 0xe8f1,	/* yw G */
	0x00d0, 0x00ff,	/* kb B */
	0x00d1, 0x53ee,	/* gc B */
	0x00d2, 0x28f6,	/* rm B */
	0x00d3, 0x56e7,	/* yw B */
	0x00D6, 0x2000,	/* GAMMA start */
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
	0x00D5, 0x0001,	/* GAMMA end */
	0x0028, 0x0000,	/* Register Mask */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_natural_dmb[] = {
	/* start U1 natural dmb */
	0x0001, 0x0041,	/* PCC 40 */
	0x002c, 0x003C,	/* DNR bypass 0x003C */
	0x002d, 0x1508,	/* DNR bypass 0x0a08 */
	0x002e, 0x1005,	/* DNR bypass 0x1010 */
	0x002f, 0x0400,	/* DNR bypass 0x0400 */
	0x003A, 0x000D,	/* HDTR DE CS  de on = d , de off = 9 */
	0x003B, 0x03ff,	/* DE SHARPNESS */
	0x003C, 0x0000,	/* NOISE LEVEL */
	0x003F, 0x0180,	/* CS GAIN */
	0x0042, 0x0020,	/* DE TH (MAX DIFF) */
	0x0049, 0x0400,	/* pcc skin */
	0x004a, 0x7a00,	/* 7300 */
	0x004b, 0x008F,	/* 008f */
	0x004d, 0x0100,	/* pcc strength */
	0x00c8, 0x0000,	/* kb R	SCR */
	0x00c9, 0xb6bc,	/* gc R */
	0x00ca, 0xd4ff,	/* rm R */
	0x00cb, 0xffff,	/* yw R */
	0x00cc, 0x0000,	/* kb G */
	0x00cd, 0xffff,	/* gc G */
	0x00ce, 0x2148,	/* rm G */
	0x00cf, 0xe8f1,	/* yw G */
	0x00d0, 0x00ff,	/* kb B */
	0x00d1, 0x53ee,	/* gc B */
	0x00d2, 0x28f6,	/* rm B */
	0x00d3, 0x56ec,	/* yw B */
	0x00D6, 0x2000,	/* GAMMA start */
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
	0x00D5, 0x0001,	/* GAMMA end */
	0x0028, 0x0000,	/* Register Mask */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};
#else
static const unsigned short tune_dynamic_dmb[] = {
	/* start M0 dynamic dmb */
	0x0000, 0x0000,	/* BANK 0 */
	0x0008, 0x008e,	/* Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 */
			/* | CS8 DE4 DNR2 HDR1 */
	0x0030, 0x0005,	/* FA cs1 | de8 dnr4 hdr2 fa1 */
	0x0039, 0x0040,	/* FA dnrWeight */
	0x0080, 0x0fff,	/* DNR dirTh */
	0x0081, 0x1908,	/* DNR dirnumTh decon7Th */
	0x0082, 0x0809,	/* DNR decon5Th maskTh */
	0x0083, 0x0000,	/* DNR blTh */
	0x0092, 0x00e0,	/* DE pe */
	0x0093, 0x00e0,	/* DE pf */
	0x0094, 0x00e0,	/* DE pb */
	0x0095, 0x00e0,	/* DE ne */
	0x0096, 0x00e0,	/* DE nf */
	0x0097, 0x00e0,	/* DE nb */
	0x0098, 0x1000,	/* DE max ratio */
	0x0099, 0x0010,	/* DE min ratio */
	0x00b0, 0x0808,	/* CS hg ry */
	0x00b1, 0x1010,	/* CS hg gc */
	0x00b2, 0x1010,	/* CS hg bm */
	0x00b3, 0x2804,	/* CS weight grayTH */
	0x00e1, 0xff00,	/* SCR RrCr */
	0x00e2, 0x00ff,	/* SCR RgCg */
	0x00e3, 0x00ff,	/* SCR RbCb */
	0x00e4, 0x00ff,	/* SCR GrMr */
	0x00e5, 0xff00,	/* SCR GgMg */
	0x00e6, 0x00ff,	/* SCR GbMb */
	0x00e7, 0x00ff,	/* SCR BrYr */
	0x00e8, 0x00ff,	/* SCR BgYg */
	0x00e9, 0xff00,	/* SCR BbYb */
	0x00ea, 0x00ff,	/* SCR KrWr */
	0x00eb, 0x00ff,	/* SCR KgWg */
	0x00ec, 0x00ff,	/* SCR KbWb */
	0x0000, 0x0001,	/* BANK 1 */
	0x001f, 0x0080,	/* CC chsel strength */
	0x0020, 0x0000,	/* CC lut r  0 */
	0x0021, 0x0d93,	/* CC lut r  16 144 */
	0x0022, 0x1aa5,	/* CC lut r  32 160 */
	0x0023, 0x29b7,	/* CC lut r  48 176 */
	0x0024, 0x39c8,	/* CC lut r  64 192 */
	0x0025, 0x4bd8,	/* CC lut r  80 208 */
	0x0026, 0x5de6,	/* CC lut r  96 224 */
	0x0027, 0x6ff4,	/* CC lut r 112 240 */
	0x0028, 0x81ff,	/* CC lut r 128 255 */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_standard_dmb[] = {
	/* start M0 standard dmb */
	0x0000, 0x0000,	/* BANK 0 */
	0x0008, 0x000e,	/* Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 */
			/* | CS8 DE4 DNR2 HDR1 */
	0x0030, 0x0005,	/* FA cs1 | de8 dnr4 hdr2 fa1 */
	0x0039, 0x0040,	/* FA dnrWeight */
	0x0080, 0x0fff,	/* DNR dirTh */
	0x0081, 0x1908,	/* DNR dirnumTh decon7Th */
	0x0082, 0x0809,	/* DNR decon5Th maskTh */
	0x0083, 0x0000,	/* DNR blTh */
	0x0092, 0x00c0,	/* DE pe */
	0x0093, 0x00c0,	/* DE pf */
	0x0094, 0x00c0,	/* DE pb */
	0x0095, 0x00c0,	/* DE ne */
	0x0096, 0x00c0,	/* DE nf */
	0x0097, 0x00c0,	/* DE nb */
	0x0098, 0x1000,	/* DE max ratio */
	0x0099, 0x0010,	/* DE min ratio */
	0x00b0, 0x0a0a,	/* CS hg ry */
	0x00b1, 0x1010,	/* CS hg gc */
	0x00b2, 0x1010,	/* CS hg bm */
	0x00b3, 0x2004,	/* CS weight grayTH */
	0x00e1, 0xff00,	/* SCR RrCr */
	0x00e2, 0x00ff,	/* SCR RgCg */
	0x00e3, 0x00ff,	/* SCR RbCb */
	0x00e4, 0x00ff,	/* SCR GrMr */
	0x00e5, 0xff00,	/* SCR GgMg */
	0x00e6, 0x00ff,	/* SCR GbMb */
	0x00e7, 0x00ff,	/* SCR BrYr */
	0x00e8, 0x00ff,	/* SCR BgYg */
	0x00e9, 0xff00,	/* SCR BbYb */
	0x00ea, 0x00ff,	/* SCR KrWr */
	0x00eb, 0x00ff,	/* SCR KgWg */
	0x00ec, 0x00ff,	/* SCR KbWb */
	0x0000, 0x0001,	/* BANK 1 */
	0x001f, 0x0080,	/* CC chsel strength */
	0x0020, 0x0000,	/* CC lut r   0 */
	0x0021, 0x1090,	/* CC lut r  16 144  */
	0x0022, 0x20a0,	/* CC lut r  32 160 */
	0x0023, 0x30b0,	/* CC lut r  48 176 */
	0x0024, 0x40c0,	/* CC lut r  64 192 */
	0x0025, 0x50d0,	/* CC lut r  80 208 */
	0x0026, 0x60e0,	/* CC lut r  96 224 */
	0x0027, 0x70f0,	/* CC lut r 112 240 */
	0x0028, 0x80ff,	/* CC lut r 128 255 */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_movie_dmb[] = {
	/* start M0 movie dmb */
	0x0000, 0x0000,	/* BANK 0 */
	0x0008, 0x002e,	/* Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 */
			/* | CS8 DE4 DNR2 HDR1 */
	0x0030, 0x0005,	/* FA cs1 | de8 dnr4 hdr2 fa1 */
	0x0039, 0x0040,	/* FA dnrWeight */
	0x0080, 0x0fff,	/* DNR dirTh */
	0x0081, 0x1908,	/* DNR dirnumTh decon7Th */
	0x0082, 0x0809,	/* DNR decon5Th maskTh */
	0x0083, 0x0000,	/* DNR blTh */
	0x0092, 0x0040,	/* DE pe */
	0x0093, 0x0040,	/* DE pf */
	0x0094, 0x0040,	/* DE pb */
	0x0095, 0x0040,	/* DE ne */
	0x0096, 0x0040,	/* DE nf */
	0x0097, 0x0040,	/* DE nb */
	0x0098, 0x1000,	/* DE max ratio */
	0x0099, 0x0010,	/* DE min ratio */
	0x00b0, 0x1010,	/* CS hg ry */
	0x00b1, 0x1010,	/* CS hg gc */
	0x00b2, 0x1010,	/* CS hg bm */
	0x00b3, 0x1204,	/* CS weight grayTH */
	0x00e1, 0xd6ac,	/* SCR RrCr */
	0x00e2, 0x32ff,	/* SCR RgCg */
	0x00e3, 0x2ef0,	/* SCR RbCb */
	0x00e4, 0xa5fa,	/* SCR GrMr */
	0x00e5, 0xff4d,	/* SCR GgMg */
	0x00e6, 0x59ff,	/* SCR GbMb */
	0x00e7, 0x00ff,	/* SCR BrYr */
	0x00e8, 0x00fb,	/* SCR BgYg */
	0x00e9, 0xff61,	/* SCR BbYb */
	0x00ea, 0x00ff,	/* SCR KrWr */
	0x00eb, 0x00f8,	/* SCR KgWg */
	0x00ec, 0x00f1,	/* SCR KbWb */
	0x0000, 0x0001,	/* BANK 1 */
	0x001f, 0x0080,	/* CC chsel strength */
	0x0020, 0x0000,	/* CC lut r   0 */
	0x0021, 0x1090,	/* CC lut r  16 144 */
	0x0022, 0x20a0,	/* CC lut r  32 160 */
	0x0023, 0x30b0,	/* CC lut r  48 176 */
	0x0024, 0x40c0,	/* CC lut r  64 192 */
	0x0025, 0x50d0,	/* CC lut r  80 208 */
	0x0026, 0x60e0,	/* CC lut r  96 224 */
	0x0027, 0x70f0,	/* CC lut r 112 240 */
	0x0028, 0x80ff,	/* CC lut r 128 255 */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};

static const unsigned short tune_natural_dmb[] = {
	/* start M0 natural dmb */
	0x0000, 0x0000,	/* BANK 0 */
	0x0008, 0x002e,	/* Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 */
			/* | CS8 DE4 DNR2 HDR1 */
	0x0030, 0x0005,	/* FA cs1 | de8 dnr4 hdr2 fa1 */
	0x0039, 0x0040,	/* FA dnrWeight */
	0x0080, 0x0fff,	/* DNR dirTh */
	0x0081, 0x1908,	/* DNR dirnumTh decon7Th */
	0x0082, 0x0809,	/* DNR decon5Th maskTh */
	0x0083, 0x0000,	/* DNR blTh */
	0x0092, 0x00c0,	/* DE pe */
	0x0093, 0x00c0,	/* DE pf */
	0x0094, 0x00c0,	/* DE pb */
	0x0095, 0x00c0,	/* DE ne */
	0x0096, 0x00c0,	/* DE nf */
	0x0097, 0x00c0,	/* DE nb */
	0x0098, 0x1000,	/* DE max ratio */
	0x0099, 0x0010,	/* DE min ratio */
	0x00b0, 0x1010,	/* CS hg ry */
	0x00b1, 0x1010,	/* CS hg gc */
	0x00b2, 0x1010,	/* CS hg bm */
	0x00b3, 0x1804,	/* CS weight grayTH */
	0x00e1, 0xd6ac,	/* SCR RrCr */
	0x00e2, 0x32ff,	/* SCR RgCg */
	0x00e3, 0x2ef0,	/* SCR RbCb */
	0x00e4, 0xa5fa,	/* SCR GrMr */
	0x00e5, 0xff4d,	/* SCR GgMg */
	0x00e6, 0x59ff,	/* SCR GbMb */
	0x00e7, 0x00ff,	/* SCR BrYr */
	0x00e8, 0x00fb,	/* SCR BgYg */
	0x00e9, 0xff61,	/* SCR BbYb */
	0x00ea, 0x00ff,	/* SCR KrWr */
	0x00eb, 0x00fa,	/* SCR KgWg */
	0x00ec, 0x00f8,	/* SCR KbWb */
	0x0000, 0x0001,	/* BANK 1 */
	0x001f, 0x0080,	/* CC chsel strength */
	0x0020, 0x0000,	/* CC lut r   0 */
	0x0021, 0x1090,	/* CC lut r  16 144 */
	0x0022, 0x20a0,	/* CC lut r  32 160 */
	0x0023, 0x30b0,	/* CC lut r  48 176 */
	0x0024, 0x40c0,	/* CC lut r  64 192 */
	0x0025, 0x50d0,	/* CC lut r  80 208 */
	0x0026, 0x60e0,	/* CC lut r  96 224 */
	0x0027, 0x70f0,	/* CC lut r 112 240 */
	0x0028, 0x80ff,	/* CC lut r 128 255 */
	0x00ff, 0x0000,	/* Mask Release */
	/* end */
	END_SEQ, 0x0000,	/* finish code */
};
#endif

struct mdnie_tunning_info tune_dmb[MODE_MAX] = {
	{"DYNAMIC_DMB",    tune_dynamic_dmb },
	{"STANDARD_DMB",   tune_standard_dmb},
#if !defined(CONFIG_FB_MDNIE_PWM)
	{"NATURAL_DMB",    tune_natural_dmb },
#endif
	{"MOVIE_DMB",      tune_movie_dmb   },
};
#endif /* __MDNIE_DMB_H__ */
