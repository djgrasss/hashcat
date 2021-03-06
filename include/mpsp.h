/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#ifndef _MPSP_H
#define _MPSP_H

#include <stdio.h>
#include <errno.h>
#include <ctype.h>

#define CHARSIZ       0x100

#define SP_HCSTAT     "hashcat.hcstat"
#define SP_PW_MIN     2
#define SP_PW_MAX     64
#define SP_ROOT_CNT   (SP_PW_MAX * CHARSIZ)
#define SP_MARKOV_CNT (SP_PW_MAX * CHARSIZ * CHARSIZ)

#define INCR_MASKS    1000

void  sp_exec (u64 ctx, char *pw_buf, cs_t *root_css_buf, cs_t *markov_css_buf, u32 start, u32 stop);

int   mask_ctx_update_loop    (hashcat_ctx_t *hashcat_ctx);
int   mask_ctx_init           (hashcat_ctx_t *hashcat_ctx);
void  mask_ctx_destroy        (hashcat_ctx_t *hashcat_ctx);
int   mask_ctx_parse_maskfile (hashcat_ctx_t *hashcat_ctx);

#endif // _MPSP_H
