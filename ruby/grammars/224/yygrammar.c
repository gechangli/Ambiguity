#include "yygrammar.h"

YYSTART ()
{
   switch(yyselect()) {
   case 33: {
      root();
      get_lexval();
      } break;
   }
}

root ()
{
   switch(yyselect()) {
   case 1: {
      D();
      C();
      G();
      get_lexval();
      get_lexval();
      } break;
   case 2: {
      get_lexval();
      B();
      get_lexval();
      get_lexval();
      } break;
   case 3: {
      get_lexval();
      } break;
   case 4: {
      get_lexval();
      C();
      get_lexval();
      G();
      get_lexval();
      } break;
   case 5: {
      get_lexval();
      get_lexval();
      A();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 6: {
      A();
      } break;
   case 7: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 8: {
      E();
      get_lexval();
      get_lexval();
      H();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 9: {
      get_lexval();
      get_lexval();
      } break;
   }
}

C ()
{
   switch(yyselect()) {
   case 10: {
      B();
      get_lexval();
      get_lexval();
      A();
      get_lexval();
      get_lexval();
      D();
      } break;
   case 11: {
      get_lexval();
      G();
      get_lexval();
      get_lexval();
      } break;
   case 12: {
      E();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      A();
      get_lexval();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 13: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 14: {
      E();
      G();
      get_lexval();
      G();
      get_lexval();
      } break;
   }
}

E ()
{
   switch(yyselect()) {
   case 15: {
      A();
      } break;
   case 16: {
      H();
      } break;
   case 17: {
      G();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 18: {
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 19: {
      A();
      get_lexval();
      H();
      C();
      C();
      get_lexval();
      } break;
   case 20: {
      get_lexval();
      get_lexval();
      F();
      B();
      get_lexval();
      } break;
   case 21: {
      get_lexval();
      G();
      get_lexval();
      E();
      F();
      } break;
   case 22: {
      get_lexval();
      } break;
   case 23: {
      get_lexval();
      G();
      E();
      F();
      G();
      get_lexval();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 24: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 25: {
      G();
      } break;
   case 26: {
      G();
      get_lexval();
      C();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 27: {
      get_lexval();
      get_lexval();
      B();
      get_lexval();
      A();
      } break;
   case 28: {
      H();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 29: {
      get_lexval();
      H();
      } break;
   case 30: {
      get_lexval();
      E();
      } break;
   case 31: {
      D();
      get_lexval();
      } break;
   case 32: {
      get_lexval();
      get_lexval();
      } break;
   }
}

extern YYSTYPE yylval;
YYSTYPE yylval;
extern long yypos;
long yypos = 1;
/* GentleFlag = no */

typedef struct LEXELEMSTRUCT {
   YYSTYPE val;
   long pos;
   long sym;
   char * text;
   struct LEXELEMSTRUCT *next;
} LEXELEM;
   
LEXELEM *first_lexelem, *cur_lexelem;

init_lexelem()
{
   cur_lexelem = first_lexelem;
}

first_lexval () {
   LEXELEM *p;
   p = (LEXELEM *)malloc(sizeof(LEXELEM));
   if (! p) yymallocerror();
   p->val = yylval;
   p->pos = yypos;
   p->next = 0;
   cur_lexelem = p;
   first_lexelem = p;
}

next_lexval() {
   LEXELEM *p;
   p = (LEXELEM *)malloc(sizeof(LEXELEM));
   if (! p) yymallocerror();
   cur_lexelem-> next = p;
   p->val = yylval;
   p->pos = yypos;
   p->next = 0;
   cur_lexelem = p;
}

get_lexval() {
   extern int FREE_LEXELEMS;
   LEXELEM *p;
   yylval = cur_lexelem->val;
   yypos = cur_lexelem->pos;
   p = cur_lexelem;
   cur_lexelem = cur_lexelem->next;
   free(p);
}

extern int c_length;
int c_length = 221;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 33,
/* 6 */ 14,
/* 7 */ 93,
/* 8 */ 66,
/* 9 */ 165,
/* 10 */ 50101,
/* 11 */ 50097,
/* 12 */ -6,
/* 13 */ 1,
/* 14 */ 21,
/* 15 */ 50098,
/* 16 */ 61,
/* 17 */ 50100,
/* 18 */ 50103,
/* 19 */ -6,
/* 20 */ 2,
/* 21 */ 25,
/* 22 */ 50098,
/* 23 */ -6,
/* 24 */ 3,
/* 25 */ 33,
/* 26 */ 50102,
/* 27 */ 66,
/* 28 */ 50101,
/* 29 */ 165,
/* 30 */ 50102,
/* 31 */ -6,
/* 32 */ 4,
/* 33 */ 0,
/* 34 */ 50100,
/* 35 */ 50100,
/* 36 */ 42,
/* 37 */ 50101,
/* 38 */ 50100,
/* 39 */ 50102,
/* 40 */ -6,
/* 41 */ 5,
/* 42 */ 46,
/* 43 */ 42,
/* 44 */ -42,
/* 45 */ 6,
/* 46 */ 54,
/* 47 */ 50099,
/* 48 */ 50104,
/* 49 */ 50099,
/* 50 */ 50104,
/* 51 */ 50100,
/* 52 */ -42,
/* 53 */ 7,
/* 54 */ 0,
/* 55 */ 109,
/* 56 */ 50100,
/* 57 */ 50101,
/* 58 */ 202,
/* 59 */ -42,
/* 60 */ 8,
/* 61 */ 0,
/* 62 */ 50102,
/* 63 */ 50099,
/* 64 */ -61,
/* 65 */ 9,
/* 66 */ 76,
/* 67 */ 61,
/* 68 */ 50100,
/* 69 */ 50097,
/* 70 */ 42,
/* 71 */ 50098,
/* 72 */ 50098,
/* 73 */ 93,
/* 74 */ -66,
/* 75 */ 10,
/* 76 */ 83,
/* 77 */ 50101,
/* 78 */ 165,
/* 79 */ 50104,
/* 80 */ 50103,
/* 81 */ -66,
/* 82 */ 11,
/* 83 */ 0,
/* 84 */ 109,
/* 85 */ 50097,
/* 86 */ 50100,
/* 87 */ 109,
/* 88 */ 50097,
/* 89 */ 42,
/* 90 */ 50100,
/* 91 */ -66,
/* 92 */ 12,
/* 93 */ 101,
/* 94 */ 50103,
/* 95 */ 50102,
/* 96 */ 50103,
/* 97 */ 50102,
/* 98 */ 50102,
/* 99 */ -93,
/* 100 */ 13,
/* 101 */ 0,
/* 102 */ 109,
/* 103 */ 165,
/* 104 */ 50103,
/* 105 */ 165,
/* 106 */ 50102,
/* 107 */ -93,
/* 108 */ 14,
/* 109 */ 113,
/* 110 */ 42,
/* 111 */ -109,
/* 112 */ 15,
/* 113 */ 117,
/* 114 */ 202,
/* 115 */ -109,
/* 116 */ 16,
/* 117 */ 0,
/* 118 */ 165,
/* 119 */ -109,
/* 120 */ 17,
/* 121 */ 127,
/* 122 */ 50101,
/* 123 */ 50100,
/* 124 */ 50099,
/* 125 */ -121,
/* 126 */ 18,
/* 127 */ 136,
/* 128 */ 42,
/* 129 */ 50100,
/* 130 */ 202,
/* 131 */ 66,
/* 132 */ 66,
/* 133 */ 50102,
/* 134 */ -121,
/* 135 */ 19,
/* 136 */ 144,
/* 137 */ 50100,
/* 138 */ 50098,
/* 139 */ 121,
/* 140 */ 61,
/* 141 */ 50104,
/* 142 */ -121,
/* 143 */ 20,
/* 144 */ 152,
/* 145 */ 50103,
/* 146 */ 165,
/* 147 */ 50099,
/* 148 */ 109,
/* 149 */ 121,
/* 150 */ -121,
/* 151 */ 21,
/* 152 */ 156,
/* 153 */ 50100,
/* 154 */ -121,
/* 155 */ 22,
/* 156 */ 0,
/* 157 */ 50101,
/* 158 */ 165,
/* 159 */ 109,
/* 160 */ 121,
/* 161 */ 165,
/* 162 */ 50097,
/* 163 */ -121,
/* 164 */ 23,
/* 165 */ 172,
/* 166 */ 50103,
/* 167 */ 50103,
/* 168 */ 50097,
/* 169 */ 50098,
/* 170 */ -165,
/* 171 */ 24,
/* 172 */ 176,
/* 173 */ 165,
/* 174 */ -165,
/* 175 */ 25,
/* 176 */ 185,
/* 177 */ 165,
/* 178 */ 50099,
/* 179 */ 66,
/* 180 */ 50104,
/* 181 */ 50097,
/* 182 */ 50098,
/* 183 */ -165,
/* 184 */ 26,
/* 185 */ 193,
/* 186 */ 50101,
/* 187 */ 50104,
/* 188 */ 61,
/* 189 */ 50097,
/* 190 */ 42,
/* 191 */ -165,
/* 192 */ 27,
/* 193 */ 0,
/* 194 */ 202,
/* 195 */ 50099,
/* 196 */ 50104,
/* 197 */ 50101,
/* 198 */ 50104,
/* 199 */ 50100,
/* 200 */ -165,
/* 201 */ 28,
/* 202 */ 207,
/* 203 */ 50102,
/* 204 */ 202,
/* 205 */ -202,
/* 206 */ 29,
/* 207 */ 212,
/* 208 */ 50102,
/* 209 */ 109,
/* 210 */ -202,
/* 211 */ 30,
/* 212 */ 217,
/* 213 */ 93,
/* 214 */ 50102,
/* 215 */ -202,
/* 216 */ 31,
/* 217 */ 0,
/* 218 */ 50100,
/* 219 */ 50103,
/* 220 */ -202,
/* 221 */ 32,
0
};
extern int yyannotation[];
int yyannotation[] = {
0,
/* 1 */ 0,
/* 2 */ 0,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 0,
/* 6 */ 14,
/* 7 */ 0,
/* 8 */ 0,
/* 9 */ 0,
/* 10 */ 50101,
/* 11 */ 50097,
/* 12 */ -6,
/* 13 */ -1,
/* 14 */ 21,
/* 15 */ 50098,
/* 16 */ 0,
/* 17 */ 50100,
/* 18 */ 50103,
/* 19 */ -6,
/* 20 */ -1,
/* 21 */ 25,
/* 22 */ 50098,
/* 23 */ -6,
/* 24 */ -1,
/* 25 */ 33,
/* 26 */ 50102,
/* 27 */ 0,
/* 28 */ 50101,
/* 29 */ 0,
/* 30 */ 50102,
/* 31 */ -6,
/* 32 */ -1,
/* 33 */ 0,
/* 34 */ 50100,
/* 35 */ 50100,
/* 36 */ 0,
/* 37 */ 50101,
/* 38 */ 50100,
/* 39 */ 50102,
/* 40 */ -6,
/* 41 */ -1,
/* 42 */ 46,
/* 43 */ 0,
/* 44 */ -42,
/* 45 */ -1,
/* 46 */ 54,
/* 47 */ 50099,
/* 48 */ 50104,
/* 49 */ 50099,
/* 50 */ 50104,
/* 51 */ 50100,
/* 52 */ -42,
/* 53 */ -1,
/* 54 */ 0,
/* 55 */ 0,
/* 56 */ 50100,
/* 57 */ 50101,
/* 58 */ 0,
/* 59 */ -42,
/* 60 */ -1,
/* 61 */ 0,
/* 62 */ 50102,
/* 63 */ 50099,
/* 64 */ -61,
/* 65 */ -1,
/* 66 */ 76,
/* 67 */ 0,
/* 68 */ 50100,
/* 69 */ 50097,
/* 70 */ 0,
/* 71 */ 50098,
/* 72 */ 50098,
/* 73 */ 0,
/* 74 */ -66,
/* 75 */ -1,
/* 76 */ 83,
/* 77 */ 50101,
/* 78 */ 0,
/* 79 */ 50104,
/* 80 */ 50103,
/* 81 */ -66,
/* 82 */ -1,
/* 83 */ 0,
/* 84 */ 0,
/* 85 */ 50097,
/* 86 */ 50100,
/* 87 */ 0,
/* 88 */ 50097,
/* 89 */ 0,
/* 90 */ 50100,
/* 91 */ -66,
/* 92 */ -1,
/* 93 */ 101,
/* 94 */ 50103,
/* 95 */ 50102,
/* 96 */ 50103,
/* 97 */ 50102,
/* 98 */ 50102,
/* 99 */ -93,
/* 100 */ -1,
/* 101 */ 0,
/* 102 */ 0,
/* 103 */ 0,
/* 104 */ 50103,
/* 105 */ 0,
/* 106 */ 50102,
/* 107 */ -93,
/* 108 */ -1,
/* 109 */ 113,
/* 110 */ 0,
/* 111 */ -109,
/* 112 */ -1,
/* 113 */ 117,
/* 114 */ 0,
/* 115 */ -109,
/* 116 */ -1,
/* 117 */ 0,
/* 118 */ 0,
/* 119 */ -109,
/* 120 */ -1,
/* 121 */ 127,
/* 122 */ 50101,
/* 123 */ 50100,
/* 124 */ 50099,
/* 125 */ -121,
/* 126 */ -1,
/* 127 */ 136,
/* 128 */ 0,
/* 129 */ 50100,
/* 130 */ 0,
/* 131 */ 0,
/* 132 */ 0,
/* 133 */ 50102,
/* 134 */ -121,
/* 135 */ -1,
/* 136 */ 144,
/* 137 */ 50100,
/* 138 */ 50098,
/* 139 */ 0,
/* 140 */ 0,
/* 141 */ 50104,
/* 142 */ -121,
/* 143 */ -1,
/* 144 */ 152,
/* 145 */ 50103,
/* 146 */ 0,
/* 147 */ 50099,
/* 148 */ 0,
/* 149 */ 0,
/* 150 */ -121,
/* 151 */ -1,
/* 152 */ 156,
/* 153 */ 50100,
/* 154 */ -121,
/* 155 */ -1,
/* 156 */ 0,
/* 157 */ 50101,
/* 158 */ 0,
/* 159 */ 0,
/* 160 */ 0,
/* 161 */ 0,
/* 162 */ 50097,
/* 163 */ -121,
/* 164 */ -1,
/* 165 */ 172,
/* 166 */ 50103,
/* 167 */ 50103,
/* 168 */ 50097,
/* 169 */ 50098,
/* 170 */ -165,
/* 171 */ -1,
/* 172 */ 176,
/* 173 */ 0,
/* 174 */ -165,
/* 175 */ -1,
/* 176 */ 185,
/* 177 */ 0,
/* 178 */ 50099,
/* 179 */ 0,
/* 180 */ 50104,
/* 181 */ 50097,
/* 182 */ 50098,
/* 183 */ -165,
/* 184 */ -1,
/* 185 */ 193,
/* 186 */ 50101,
/* 187 */ 50104,
/* 188 */ 0,
/* 189 */ 50097,
/* 190 */ 0,
/* 191 */ -165,
/* 192 */ -1,
/* 193 */ 0,
/* 194 */ 0,
/* 195 */ 50099,
/* 196 */ 50104,
/* 197 */ 50101,
/* 198 */ 50104,
/* 199 */ 50100,
/* 200 */ -165,
/* 201 */ -1,
/* 202 */ 207,
/* 203 */ 50102,
/* 204 */ 0,
/* 205 */ -202,
/* 206 */ -1,
/* 207 */ 212,
/* 208 */ 50102,
/* 209 */ 0,
/* 210 */ -202,
/* 211 */ -1,
/* 212 */ 217,
/* 213 */ 0,
/* 214 */ 50102,
/* 215 */ -202,
/* 216 */ -1,
/* 217 */ 0,
/* 218 */ 50100,
/* 219 */ 50103,
/* 220 */ -202,
/* 221 */ -1,
0
};
extern int yycoordinate[];
int yycoordinate[] = {
0,
/* 1 */ 9999,
/* 2 */ 3006,
/* 3 */ 9999,
/* 4 */ 9999,
/* 5 */ 3006,
/* 6 */ 9999,
/* 7 */ 3008,
/* 8 */ 3010,
/* 9 */ 3012,
/* 10 */ 9999,
/* 11 */ 9999,
/* 12 */ 9999,
/* 13 */ 3008,
/* 14 */ 9999,
/* 15 */ 9999,
/* 16 */ 3029,
/* 17 */ 9999,
/* 18 */ 9999,
/* 19 */ 9999,
/* 20 */ 3025,
/* 21 */ 9999,
/* 22 */ 9999,
/* 23 */ 9999,
/* 24 */ 3042,
/* 25 */ 9999,
/* 26 */ 9999,
/* 27 */ 3053,
/* 28 */ 9999,
/* 29 */ 3059,
/* 30 */ 9999,
/* 31 */ 9999,
/* 32 */ 3049,
/* 33 */ 9999,
/* 34 */ 9999,
/* 35 */ 9999,
/* 36 */ 3076,
/* 37 */ 9999,
/* 38 */ 9999,
/* 39 */ 9999,
/* 40 */ 9999,
/* 41 */ 3068,
/* 42 */ 9999,
/* 43 */ 5005,
/* 44 */ 9999,
/* 45 */ 5005,
/* 46 */ 9999,
/* 47 */ 9999,
/* 48 */ 9999,
/* 49 */ 9999,
/* 50 */ 9999,
/* 51 */ 9999,
/* 52 */ 9999,
/* 53 */ 5010,
/* 54 */ 9999,
/* 55 */ 5033,
/* 56 */ 9999,
/* 57 */ 9999,
/* 58 */ 5043,
/* 59 */ 9999,
/* 60 */ 5033,
/* 61 */ 9999,
/* 62 */ 9999,
/* 63 */ 9999,
/* 64 */ 9999,
/* 65 */ 7005,
/* 66 */ 9999,
/* 67 */ 9005,
/* 68 */ 9999,
/* 69 */ 9999,
/* 70 */ 9015,
/* 71 */ 9999,
/* 72 */ 9999,
/* 73 */ 9025,
/* 74 */ 9999,
/* 75 */ 9005,
/* 76 */ 9999,
/* 77 */ 9999,
/* 78 */ 9034,
/* 79 */ 9999,
/* 80 */ 9999,
/* 81 */ 9999,
/* 82 */ 9030,
/* 83 */ 9999,
/* 84 */ 9047,
/* 85 */ 9999,
/* 86 */ 9999,
/* 87 */ 9057,
/* 88 */ 9999,
/* 89 */ 9063,
/* 90 */ 9999,
/* 91 */ 9999,
/* 92 */ 9047,
/* 93 */ 9999,
/* 94 */ 9999,
/* 95 */ 9999,
/* 96 */ 9999,
/* 97 */ 9999,
/* 98 */ 9999,
/* 99 */ 9999,
/* 100 */ 11005,
/* 101 */ 9999,
/* 102 */ 11028,
/* 103 */ 11030,
/* 104 */ 9999,
/* 105 */ 11036,
/* 106 */ 9999,
/* 107 */ 9999,
/* 108 */ 11028,
/* 109 */ 9999,
/* 110 */ 13005,
/* 111 */ 9999,
/* 112 */ 13005,
/* 113 */ 9999,
/* 114 */ 13010,
/* 115 */ 9999,
/* 116 */ 13010,
/* 117 */ 9999,
/* 118 */ 13015,
/* 119 */ 9999,
/* 120 */ 13015,
/* 121 */ 9999,
/* 122 */ 9999,
/* 123 */ 9999,
/* 124 */ 9999,
/* 125 */ 9999,
/* 126 */ 15005,
/* 127 */ 9999,
/* 128 */ 15020,
/* 129 */ 9999,
/* 130 */ 15026,
/* 131 */ 15028,
/* 132 */ 15030,
/* 133 */ 9999,
/* 134 */ 9999,
/* 135 */ 15020,
/* 136 */ 9999,
/* 137 */ 9999,
/* 138 */ 9999,
/* 139 */ 15047,
/* 140 */ 15049,
/* 141 */ 9999,
/* 142 */ 9999,
/* 143 */ 15039,
/* 144 */ 9999,
/* 145 */ 9999,
/* 146 */ 15062,
/* 147 */ 9999,
/* 148 */ 15068,
/* 149 */ 15070,
/* 150 */ 9999,
/* 151 */ 15058,
/* 152 */ 9999,
/* 153 */ 9999,
/* 154 */ 9999,
/* 155 */ 15075,
/* 156 */ 9999,
/* 157 */ 9999,
/* 158 */ 15086,
/* 159 */ 15088,
/* 160 */ 15090,
/* 161 */ 15092,
/* 162 */ 9999,
/* 163 */ 9999,
/* 164 */ 15082,
/* 165 */ 9999,
/* 166 */ 9999,
/* 167 */ 9999,
/* 168 */ 9999,
/* 169 */ 9999,
/* 170 */ 9999,
/* 171 */ 17005,
/* 172 */ 9999,
/* 173 */ 17024,
/* 174 */ 9999,
/* 175 */ 17024,
/* 176 */ 9999,
/* 177 */ 17029,
/* 178 */ 9999,
/* 179 */ 17035,
/* 180 */ 9999,
/* 181 */ 9999,
/* 182 */ 9999,
/* 183 */ 9999,
/* 184 */ 17029,
/* 185 */ 9999,
/* 186 */ 9999,
/* 187 */ 9999,
/* 188 */ 17060,
/* 189 */ 9999,
/* 190 */ 17066,
/* 191 */ 9999,
/* 192 */ 17052,
/* 193 */ 9999,
/* 194 */ 17071,
/* 195 */ 9999,
/* 196 */ 9999,
/* 197 */ 9999,
/* 198 */ 9999,
/* 199 */ 9999,
/* 200 */ 9999,
/* 201 */ 17071,
/* 202 */ 9999,
/* 203 */ 9999,
/* 204 */ 19009,
/* 205 */ 9999,
/* 206 */ 19005,
/* 207 */ 9999,
/* 208 */ 9999,
/* 209 */ 19018,
/* 210 */ 9999,
/* 211 */ 19014,
/* 212 */ 9999,
/* 213 */ 19023,
/* 214 */ 9999,
/* 215 */ 9999,
/* 216 */ 19023,
/* 217 */ 9999,
/* 218 */ 9999,
/* 219 */ 9999,
/* 220 */ 9999,
/* 221 */ 19032,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[223];
*/
int TABLE[34][256];
init_dirsets() {
TABLE[33][98] = 1;
TABLE[33][102] = 1;
TABLE[33][100] = 1;
TABLE[33][103] = 1;
TABLE[33][99] = 1;
TABLE[33][101] = 1;
TABLE[1][103] = 1;
TABLE[1][99] = 1;
TABLE[1][101] = 1;
TABLE[1][102] = 1;
TABLE[1][100] = 1;
TABLE[2][98] = 1;
TABLE[3][98] = 1;
TABLE[4][102] = 1;
TABLE[5][100] = 1;
TABLE[6][99] = 1;
TABLE[6][101] = 1;
TABLE[6][102] = 1;
TABLE[6][103] = 1;
TABLE[6][100] = 1;
TABLE[7][99] = 1;
TABLE[8][99] = 1;
TABLE[8][100] = 1;
TABLE[8][103] = 1;
TABLE[8][102] = 1;
TABLE[8][101] = 1;
TABLE[9][102] = 1;
TABLE[10][102] = 1;
TABLE[11][101] = 1;
TABLE[12][99] = 1;
TABLE[12][100] = 1;
TABLE[12][103] = 1;
TABLE[12][102] = 1;
TABLE[12][101] = 1;
TABLE[13][103] = 1;
TABLE[14][99] = 1;
TABLE[14][100] = 1;
TABLE[14][103] = 1;
TABLE[14][102] = 1;
TABLE[14][101] = 1;
TABLE[15][99] = 1;
TABLE[15][101] = 1;
TABLE[15][102] = 1;
TABLE[15][103] = 1;
TABLE[15][100] = 1;
TABLE[16][102] = 1;
TABLE[16][103] = 1;
TABLE[16][100] = 1;
TABLE[16][99] = 1;
TABLE[16][101] = 1;
TABLE[17][103] = 1;
TABLE[17][101] = 1;
TABLE[17][100] = 1;
TABLE[17][102] = 1;
TABLE[17][99] = 1;
TABLE[18][101] = 1;
TABLE[19][99] = 1;
TABLE[19][101] = 1;
TABLE[19][102] = 1;
TABLE[19][103] = 1;
TABLE[19][100] = 1;
TABLE[20][100] = 1;
TABLE[21][103] = 1;
TABLE[22][100] = 1;
TABLE[23][101] = 1;
TABLE[24][103] = 1;
TABLE[25][103] = 1;
TABLE[25][101] = 1;
TABLE[25][100] = 1;
TABLE[25][102] = 1;
TABLE[25][99] = 1;
TABLE[26][103] = 1;
TABLE[26][101] = 1;
TABLE[26][100] = 1;
TABLE[26][102] = 1;
TABLE[26][99] = 1;
TABLE[27][101] = 1;
TABLE[28][102] = 1;
TABLE[28][103] = 1;
TABLE[28][100] = 1;
TABLE[28][99] = 1;
TABLE[28][101] = 1;
TABLE[29][102] = 1;
TABLE[30][102] = 1;
TABLE[31][103] = 1;
TABLE[31][99] = 1;
TABLE[31][101] = 1;
TABLE[31][102] = 1;
TABLE[31][100] = 1;
TABLE[32][100] = 1;
}

extern int yydirset();
int yydirset(i,j)
   int i,j;
{
   return TABLE[i][j];
}
int yytransparent(n)
   int n;
{
   switch(n) {
      case 1: return 0; break;
      case 6: return 0; break;
      case 42: return 0; break;
      case 61: return 0; break;
      case 66: return 0; break;
      case 93: return 0; break;
      case 109: return 0; break;
      case 121: return 0; break;
      case 165: return 0; break;
      case 202: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 42: return "A"; break;
         case 61: return "B"; break;
         case 66: return "C"; break;
         case 93: return "D"; break;
         case 109: return "E"; break;
         case 121: return "F"; break;
         case 165: return "G"; break;
         case 202: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}
