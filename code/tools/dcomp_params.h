/*
 * Legal Notice
 *
 * This document and associated source code (the "Work") is a part of a
 * benchmark specification maintained by the TPC.
 *
 * The TPC reserves all right, title, and interest to the Work as provided
 * under U.S. and international laws, including without limitation all patent
 * and trademark rights therein.
 *
 * No Warranty
 *
 * 1.1 TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THE INFORMATION
 *     CONTAINED HEREIN IS PROVIDED "AS IS" AND WITH ALL FAULTS, AND THE
 *     AUTHORS AND DEVELOPERS OF THE WORK HEREBY DISCLAIM ALL OTHER
 *     WARRANTIES AND CONDITIONS, EITHER EXPRESS, IMPLIED OR STATUTORY,
 *     INCLUDING, BUT NOT LIMITED TO, ANY (IF ANY) IMPLIED WARRANTIES,
 *     DUTIES OR CONDITIONS OF MERCHANTABILITY, OF FITNESS FOR A PARTICULAR
 *     PURPOSE, OF ACCURACY OR COMPLETENESS OF RESPONSES, OF RESULTS, OF
 *     WORKMANLIKE EFFORT, OF LACK OF VIRUSES, AND OF LACK OF NEGLIGENCE.
 *     ALSO, THERE IS NO WARRANTY OR CONDITION OF TITLE, QUIET ENJOYMENT,
 *     QUIET POSSESSION, CORRESPONDENCE TO DESCRIPTION OR NON-INFRINGEMENT
 *     WITH REGARD TO THE WORK.
 * 1.2 IN NO EVENT WILL ANY AUTHOR OR DEVELOPER OF THE WORK BE LIABLE TO
 *     ANY OTHER PARTY FOR ANY DAMAGES, INCLUDING BUT NOT LIMITED TO THE
 *     COST OF PROCURING SUBSTITUTE GOODS OR SERVICES, LOST PROFITS, LOSS
 *     OF USE, LOSS OF DATA, OR ANY INCIDENTAL, CONSEQUENTIAL, DIRECT,
 *     INDIRECT, OR SPECIAL DAMAGES WHETHER UNDER CONTRACT, TORT, WARRANTY,
 *     OR OTHERWISE, ARISING IN ANY WAY OUT OF THIS OR ANY OTHER AGREEMENT
 *     RELATING TO THE WORK, WHETHER OR NOT SUCH AUTHOR OR DEVELOPER HAD
 *     ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES.
 *
 * Contributors:
 * Gradient Systems
 */
#ifndef DCOMP_PARAMS_H
#define DCOMP_PARAMS_H

#include "r_params.h"
#define MAX_PARAM	8
#ifdef DECLARER

option_t options[] =
{
/* General Parmeters */
{"PROG",OPT_STR|OPT_HIDE|OPT_SET,0, "DO NOT MODIFY" , NULL, "distcomp"},
{"INPUT",OPT_STR,1, "read distributions from file <s>", NULL, ""},
{"VERBOSE",OPT_FLG,2, "enable verbose output", NULL, "N"},
{"HELP",OPT_FLG,3, "display this message", usage, "N"},
{"OUTPUT",OPT_STR,4, "output the compiled distributions to <s>", NULL, "."},
{"HEADER",OPT_STR,5, "output distribution index names to header file <s>", NULL, ""},
{"PARAM_DIST",	OPT_STR,	6, "parameter distribution", NULL, "uniform"},
{"PARAM_SIGMA", OPT_STR,	7, "variance of normal distribution", NULL, "1.0"},
{"PARAM_CENTER", OPT_STR,	8, "center of normal distribution", NULL, "0"},
{"RNGSEED", OPT_INT,	9, "random seed", NULL, "7919"},
{NULL}
};

char *params[MAX_PARAM + 2];
#else
extern option_t options[];
extern char *params[];
extern char *szTableNames[];
#endif
#endif
