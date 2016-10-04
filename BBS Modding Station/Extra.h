#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
using namespace std;

#define u32 unsigned int

int soff = 0;
int nsoff = 0;
char version = 0;
char dat = 0;
unsigned char bonCount = 0;
unsigned int LAST_PMO = 0;
unsigned int LAST_PMP = 0;
unsigned int LAST_TIM2 = 0;
int cnt_bcd = 0;
int cnt_seb = 0;
int cnt_ead = 0;
int cnt_txa = 0;
int checkat3 = 0;
int EXTRA_CHECK = 0;
int EX_CHECK = 0;
int cnt = 0;
DWORD read;
short PMO_A = 0;
int cnt_pmp = 0;
int cnt_ex = 0;
int cnt_ex2 = 0;
int cnt_ex3 = 0;
int ARC_POS = 0;
int CHECK_SPECIAL = 0;
short CHECK_VERSION = 0;
int CHECK_FORMAT = 0;
char CHECK_PMO_FILENAME;
int BCD_SIZE = 0;
int PMP_SIZE = 0;
int TXA_SIZE = 0;
int FEP_SIZE = 0;
int TIM2_SIZE = 0;
int SSCF_SIZE = 0;
int AT3_SIZE = 0;
unsigned int PMOX_SIZE = 0;
int EXTRA_TIM2 = 0;
int PMO_SIZE = 0;
int PAM_SIZE = 0;
int OLO_SIZE = 0;
int EXA_SIZE = 0;
int SEB_SIZE = 0;
int EAD_SIZE = 0;
int EXA_CNT = 0;
int CTD = 0;
int PMOX = 0;
int TIM2 = 0;
int SSCF = 0;
int PMF = 0;
int PMF_SIZE = 0;
unsigned int p1 = 0;
unsigned int p2 = 0;
int AT3 = 0;
short CTD_CHECK = 0;
int CTD_SEC = 0;
int CTD_OFF = 0;
int FFFF_SIZE = 0;
unsigned int PACK_SIZE = 0;
int offdiff = 0;
int pmp_cnt = 0;
int CHECK_PMO = 0;
short textures = 0;
int OFFSET = 0;
int NOFFSET = 0;
int PMOX_SIZE_EX = 0;
int c1 = 0;
int c2 = 0;
int c3 = 0;
int c4 = 0;
int n = 0;
short pointer = 0;
int relleno = 0;

void InitText()
{
	cout << "--BBS File Extractor--" << endl;
}