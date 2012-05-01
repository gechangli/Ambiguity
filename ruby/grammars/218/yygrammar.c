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
      get_lexval();
      } break;
   case 2: {
      A();
      get_lexval();
      A();
      B();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 3: {
      get_lexval();
      get_lexval();
      B();
      } break;
   case 4: {
      get_lexval();
      B();
      get_lexval();
      get_lexval();
      } break;
   case 5: {
      get_lexval();
      G();
      D();
      get_lexval();
      H();
      get_lexval();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 6: {
      D();
      get_lexval();
      C();
      D();
      C();
      get_lexval();
      get_lexval();
      } break;
   case 7: {
      get_lexval();
      get_lexval();
      C();
      get_lexval();
      } break;
   case 8: {
      get_lexval();
      B();
      A();
      A();
      E();
      B();
      get_lexval();
      } break;
   case 9: {
      get_lexval();
      H();
      get_lexval();
      H();
      } break;
   }
}

C ()
{
   switch(yyselect()) {
   case 10: {
      C();
      E();
      F();
      F();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 11: {
      F();
      D();
      } break;
   case 12: {
      get_lexval();
      get_lexval();
      get_lexval();
      G();
      H();
      get_lexval();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 13: {
      H();
      D();
      get_lexval();
      get_lexval();
      } break;
   case 14: {
      C();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      G();
      } break;
   case 15: {
      get_lexval();
      get_lexval();
      } break;
   case 16: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 17: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 18: {
      get_lexval();
      H();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 19: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 20: {
      get_lexval();
      A();
      get_lexval();
      get_lexval();
      get_lexval();
      D();
      get_lexval();
      } break;
   }
}

E ()
{
   switch(yyselect()) {
   case 21: {
      D();
      get_lexval();
      get_lexval();
      F();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 22: {
      get_lexval();
      get_lexval();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 23: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 24: {
      get_lexval();
      B();
      C();
      } break;
   case 25: {
      F();
      } break;
   case 26: {
      B();
      B();
      get_lexval();
      H();
      get_lexval();
      A();
      get_lexval();
      } break;
   case 27: {
      get_lexval();
      get_lexval();
      B();
      C();
      D();
      } break;
   case 28: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 29: {
      B();
      D();
      C();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 30: {
      E();
      } break;
   case 31: {
      G();
      C();
      get_lexval();
      get_lexval();
      } break;
   case 32: {
      A();
      get_lexval();
      get_lexval();
      D();
      B();
      A();
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
int c_length = 247;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 33,
/* 6 */ 10,
/* 7 */ 50097,
/* 8 */ -6,
/* 9 */ 1,
/* 10 */ 0,
/* 11 */ 17,
/* 12 */ 50103,
/* 13 */ 17,
/* 14 */ 39,
/* 15 */ -6,
/* 16 */ 2,
/* 17 */ 23,
/* 18 */ 50098,
/* 19 */ 50098,
/* 20 */ 39,
/* 21 */ -17,
/* 22 */ 3,
/* 23 */ 30,
/* 24 */ 50100,
/* 25 */ 39,
/* 26 */ 50100,
/* 27 */ 50099,
/* 28 */ -17,
/* 29 */ 4,
/* 30 */ 0,
/* 31 */ 50104,
/* 32 */ 177,
/* 33 */ 97,
/* 34 */ 50102,
/* 35 */ 227,
/* 36 */ 50097,
/* 37 */ -17,
/* 38 */ 5,
/* 39 */ 49,
/* 40 */ 97,
/* 41 */ 50101,
/* 42 */ 73,
/* 43 */ 97,
/* 44 */ 73,
/* 45 */ 50104,
/* 46 */ 50103,
/* 47 */ -39,
/* 48 */ 6,
/* 49 */ 56,
/* 50 */ 50097,
/* 51 */ 50099,
/* 52 */ 73,
/* 53 */ 50101,
/* 54 */ -39,
/* 55 */ 7,
/* 56 */ 66,
/* 57 */ 50104,
/* 58 */ 39,
/* 59 */ 17,
/* 60 */ 17,
/* 61 */ 162,
/* 62 */ 39,
/* 63 */ 50102,
/* 64 */ -39,
/* 65 */ 8,
/* 66 */ 0,
/* 67 */ 50101,
/* 68 */ 227,
/* 69 */ 50098,
/* 70 */ 227,
/* 71 */ -39,
/* 72 */ 9,
/* 73 */ 83,
/* 74 */ 73,
/* 75 */ 162,
/* 76 */ 172,
/* 77 */ 172,
/* 78 */ 50099,
/* 79 */ 50102,
/* 80 */ 50100,
/* 81 */ -73,
/* 82 */ 10,
/* 83 */ 88,
/* 84 */ 172,
/* 85 */ 97,
/* 86 */ -73,
/* 87 */ 11,
/* 88 */ 0,
/* 89 */ 50103,
/* 90 */ 50102,
/* 91 */ 50098,
/* 92 */ 177,
/* 93 */ 227,
/* 94 */ 50102,
/* 95 */ -73,
/* 96 */ 12,
/* 97 */ 104,
/* 98 */ 227,
/* 99 */ 97,
/* 100 */ 50104,
/* 101 */ 50103,
/* 102 */ -97,
/* 103 */ 13,
/* 104 */ 113,
/* 105 */ 73,
/* 106 */ 50100,
/* 107 */ 50099,
/* 108 */ 162,
/* 109 */ 50097,
/* 110 */ 177,
/* 111 */ -97,
/* 112 */ 14,
/* 113 */ 118,
/* 114 */ 50100,
/* 115 */ 50102,
/* 116 */ -97,
/* 117 */ 15,
/* 118 */ 128,
/* 119 */ 50098,
/* 120 */ 50097,
/* 121 */ 50097,
/* 122 */ 50102,
/* 123 */ 50102,
/* 124 */ 50098,
/* 125 */ 50104,
/* 126 */ -97,
/* 127 */ 16,
/* 128 */ 136,
/* 129 */ 50098,
/* 130 */ 50103,
/* 131 */ 50098,
/* 132 */ 50101,
/* 133 */ 50101,
/* 134 */ -97,
/* 135 */ 17,
/* 136 */ 144,
/* 137 */ 50100,
/* 138 */ 227,
/* 139 */ 50104,
/* 140 */ 50097,
/* 141 */ 50101,
/* 142 */ -97,
/* 143 */ 18,
/* 144 */ 152,
/* 145 */ 50102,
/* 146 */ 50104,
/* 147 */ 50102,
/* 148 */ 50101,
/* 149 */ 50100,
/* 150 */ -97,
/* 151 */ 19,
/* 152 */ 0,
/* 153 */ 50102,
/* 154 */ 17,
/* 155 */ 50100,
/* 156 */ 50099,
/* 157 */ 50102,
/* 158 */ 97,
/* 159 */ 50103,
/* 160 */ -97,
/* 161 */ 20,
/* 162 */ 0,
/* 163 */ 97,
/* 164 */ 50099,
/* 165 */ 50103,
/* 166 */ 172,
/* 167 */ 50103,
/* 168 */ 50100,
/* 169 */ 50102,
/* 170 */ -162,
/* 171 */ 21,
/* 172 */ 0,
/* 173 */ 50101,
/* 174 */ 50103,
/* 175 */ -172,
/* 176 */ 22,
/* 177 */ 184,
/* 178 */ 50102,
/* 179 */ 50104,
/* 180 */ 50102,
/* 181 */ 50097,
/* 182 */ -177,
/* 183 */ 23,
/* 184 */ 190,
/* 185 */ 50101,
/* 186 */ 39,
/* 187 */ 73,
/* 188 */ -177,
/* 189 */ 24,
/* 190 */ 194,
/* 191 */ 172,
/* 192 */ -177,
/* 193 */ 25,
/* 194 */ 204,
/* 195 */ 39,
/* 196 */ 39,
/* 197 */ 50099,
/* 198 */ 227,
/* 199 */ 50101,
/* 200 */ 17,
/* 201 */ 50102,
/* 202 */ -177,
/* 203 */ 26,
/* 204 */ 212,
/* 205 */ 50099,
/* 206 */ 50101,
/* 207 */ 39,
/* 208 */ 73,
/* 209 */ 97,
/* 210 */ -177,
/* 211 */ 27,
/* 212 */ 221,
/* 213 */ 50097,
/* 214 */ 50098,
/* 215 */ 50103,
/* 216 */ 50099,
/* 217 */ 50098,
/* 218 */ 50098,
/* 219 */ -177,
/* 220 */ 28,
/* 221 */ 0,
/* 222 */ 39,
/* 223 */ 97,
/* 224 */ 73,
/* 225 */ -177,
/* 226 */ 29,
/* 227 */ 231,
/* 228 */ 162,
/* 229 */ -227,
/* 230 */ 30,
/* 231 */ 238,
/* 232 */ 177,
/* 233 */ 73,
/* 234 */ 50103,
/* 235 */ 50102,
/* 236 */ -227,
/* 237 */ 31,
/* 238 */ 0,
/* 239 */ 17,
/* 240 */ 50103,
/* 241 */ 50098,
/* 242 */ 97,
/* 243 */ 39,
/* 244 */ 17,
/* 245 */ 50100,
/* 246 */ -227,
/* 247 */ 32,
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
/* 6 */ 10,
/* 7 */ 50097,
/* 8 */ -6,
/* 9 */ -1,
/* 10 */ 0,
/* 11 */ 0,
/* 12 */ 50103,
/* 13 */ 0,
/* 14 */ 0,
/* 15 */ -6,
/* 16 */ -1,
/* 17 */ 23,
/* 18 */ 50098,
/* 19 */ 50098,
/* 20 */ 0,
/* 21 */ -17,
/* 22 */ -1,
/* 23 */ 30,
/* 24 */ 50100,
/* 25 */ 0,
/* 26 */ 50100,
/* 27 */ 50099,
/* 28 */ -17,
/* 29 */ -1,
/* 30 */ 0,
/* 31 */ 50104,
/* 32 */ 0,
/* 33 */ 0,
/* 34 */ 50102,
/* 35 */ 0,
/* 36 */ 50097,
/* 37 */ -17,
/* 38 */ -1,
/* 39 */ 49,
/* 40 */ 0,
/* 41 */ 50101,
/* 42 */ 0,
/* 43 */ 0,
/* 44 */ 0,
/* 45 */ 50104,
/* 46 */ 50103,
/* 47 */ -39,
/* 48 */ -1,
/* 49 */ 56,
/* 50 */ 50097,
/* 51 */ 50099,
/* 52 */ 0,
/* 53 */ 50101,
/* 54 */ -39,
/* 55 */ -1,
/* 56 */ 66,
/* 57 */ 50104,
/* 58 */ 0,
/* 59 */ 0,
/* 60 */ 0,
/* 61 */ 0,
/* 62 */ 0,
/* 63 */ 50102,
/* 64 */ -39,
/* 65 */ -1,
/* 66 */ 0,
/* 67 */ 50101,
/* 68 */ 0,
/* 69 */ 50098,
/* 70 */ 0,
/* 71 */ -39,
/* 72 */ -1,
/* 73 */ 83,
/* 74 */ 0,
/* 75 */ 0,
/* 76 */ 0,
/* 77 */ 0,
/* 78 */ 50099,
/* 79 */ 50102,
/* 80 */ 50100,
/* 81 */ -73,
/* 82 */ -1,
/* 83 */ 88,
/* 84 */ 0,
/* 85 */ 0,
/* 86 */ -73,
/* 87 */ -1,
/* 88 */ 0,
/* 89 */ 50103,
/* 90 */ 50102,
/* 91 */ 50098,
/* 92 */ 0,
/* 93 */ 0,
/* 94 */ 50102,
/* 95 */ -73,
/* 96 */ -1,
/* 97 */ 104,
/* 98 */ 0,
/* 99 */ 0,
/* 100 */ 50104,
/* 101 */ 50103,
/* 102 */ -97,
/* 103 */ -1,
/* 104 */ 113,
/* 105 */ 0,
/* 106 */ 50100,
/* 107 */ 50099,
/* 108 */ 0,
/* 109 */ 50097,
/* 110 */ 0,
/* 111 */ -97,
/* 112 */ -1,
/* 113 */ 118,
/* 114 */ 50100,
/* 115 */ 50102,
/* 116 */ -97,
/* 117 */ -1,
/* 118 */ 128,
/* 119 */ 50098,
/* 120 */ 50097,
/* 121 */ 50097,
/* 122 */ 50102,
/* 123 */ 50102,
/* 124 */ 50098,
/* 125 */ 50104,
/* 126 */ -97,
/* 127 */ -1,
/* 128 */ 136,
/* 129 */ 50098,
/* 130 */ 50103,
/* 131 */ 50098,
/* 132 */ 50101,
/* 133 */ 50101,
/* 134 */ -97,
/* 135 */ -1,
/* 136 */ 144,
/* 137 */ 50100,
/* 138 */ 0,
/* 139 */ 50104,
/* 140 */ 50097,
/* 141 */ 50101,
/* 142 */ -97,
/* 143 */ -1,
/* 144 */ 152,
/* 145 */ 50102,
/* 146 */ 50104,
/* 147 */ 50102,
/* 148 */ 50101,
/* 149 */ 50100,
/* 150 */ -97,
/* 151 */ -1,
/* 152 */ 0,
/* 153 */ 50102,
/* 154 */ 0,
/* 155 */ 50100,
/* 156 */ 50099,
/* 157 */ 50102,
/* 158 */ 0,
/* 159 */ 50103,
/* 160 */ -97,
/* 161 */ -1,
/* 162 */ 0,
/* 163 */ 0,
/* 164 */ 50099,
/* 165 */ 50103,
/* 166 */ 0,
/* 167 */ 50103,
/* 168 */ 50100,
/* 169 */ 50102,
/* 170 */ -162,
/* 171 */ -1,
/* 172 */ 0,
/* 173 */ 50101,
/* 174 */ 50103,
/* 175 */ -172,
/* 176 */ -1,
/* 177 */ 184,
/* 178 */ 50102,
/* 179 */ 50104,
/* 180 */ 50102,
/* 181 */ 50097,
/* 182 */ -177,
/* 183 */ -1,
/* 184 */ 190,
/* 185 */ 50101,
/* 186 */ 0,
/* 187 */ 0,
/* 188 */ -177,
/* 189 */ -1,
/* 190 */ 194,
/* 191 */ 0,
/* 192 */ -177,
/* 193 */ -1,
/* 194 */ 204,
/* 195 */ 0,
/* 196 */ 0,
/* 197 */ 50099,
/* 198 */ 0,
/* 199 */ 50101,
/* 200 */ 0,
/* 201 */ 50102,
/* 202 */ -177,
/* 203 */ -1,
/* 204 */ 212,
/* 205 */ 50099,
/* 206 */ 50101,
/* 207 */ 0,
/* 208 */ 0,
/* 209 */ 0,
/* 210 */ -177,
/* 211 */ -1,
/* 212 */ 221,
/* 213 */ 50097,
/* 214 */ 50098,
/* 215 */ 50103,
/* 216 */ 50099,
/* 217 */ 50098,
/* 218 */ 50098,
/* 219 */ -177,
/* 220 */ -1,
/* 221 */ 0,
/* 222 */ 0,
/* 223 */ 0,
/* 224 */ 0,
/* 225 */ -177,
/* 226 */ -1,
/* 227 */ 231,
/* 228 */ 0,
/* 229 */ -227,
/* 230 */ -1,
/* 231 */ 238,
/* 232 */ 0,
/* 233 */ 0,
/* 234 */ 50103,
/* 235 */ 50102,
/* 236 */ -227,
/* 237 */ -1,
/* 238 */ 0,
/* 239 */ 0,
/* 240 */ 50103,
/* 241 */ 50098,
/* 242 */ 0,
/* 243 */ 0,
/* 244 */ 0,
/* 245 */ 50100,
/* 246 */ -227,
/* 247 */ -1,
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
/* 7 */ 9999,
/* 8 */ 9999,
/* 9 */ 3008,
/* 10 */ 9999,
/* 11 */ 3015,
/* 12 */ 9999,
/* 13 */ 3021,
/* 14 */ 3023,
/* 15 */ 9999,
/* 16 */ 3015,
/* 17 */ 9999,
/* 18 */ 9999,
/* 19 */ 9999,
/* 20 */ 5013,
/* 21 */ 9999,
/* 22 */ 5005,
/* 23 */ 9999,
/* 24 */ 9999,
/* 25 */ 5022,
/* 26 */ 9999,
/* 27 */ 9999,
/* 28 */ 9999,
/* 29 */ 5018,
/* 30 */ 9999,
/* 31 */ 9999,
/* 32 */ 5039,
/* 33 */ 5041,
/* 34 */ 9999,
/* 35 */ 5047,
/* 36 */ 9999,
/* 37 */ 9999,
/* 38 */ 5035,
/* 39 */ 9999,
/* 40 */ 7005,
/* 41 */ 9999,
/* 42 */ 7011,
/* 43 */ 7013,
/* 44 */ 7015,
/* 45 */ 9999,
/* 46 */ 9999,
/* 47 */ 9999,
/* 48 */ 7005,
/* 49 */ 9999,
/* 50 */ 9999,
/* 51 */ 9999,
/* 52 */ 7036,
/* 53 */ 9999,
/* 54 */ 9999,
/* 55 */ 7028,
/* 56 */ 9999,
/* 57 */ 9999,
/* 58 */ 7049,
/* 59 */ 7051,
/* 60 */ 7053,
/* 61 */ 7055,
/* 62 */ 7057,
/* 63 */ 9999,
/* 64 */ 9999,
/* 65 */ 7045,
/* 66 */ 9999,
/* 67 */ 9999,
/* 68 */ 7070,
/* 69 */ 9999,
/* 70 */ 7076,
/* 71 */ 9999,
/* 72 */ 7066,
/* 73 */ 9999,
/* 74 */ 9005,
/* 75 */ 9007,
/* 76 */ 9009,
/* 77 */ 9011,
/* 78 */ 9999,
/* 79 */ 9999,
/* 80 */ 9999,
/* 81 */ 9999,
/* 82 */ 9005,
/* 83 */ 9999,
/* 84 */ 9028,
/* 85 */ 9030,
/* 86 */ 9999,
/* 87 */ 9028,
/* 88 */ 9999,
/* 89 */ 9999,
/* 90 */ 9999,
/* 91 */ 9999,
/* 92 */ 9047,
/* 93 */ 9049,
/* 94 */ 9999,
/* 95 */ 9999,
/* 96 */ 9035,
/* 97 */ 9999,
/* 98 */ 11005,
/* 99 */ 11007,
/* 100 */ 9999,
/* 101 */ 9999,
/* 102 */ 9999,
/* 103 */ 11005,
/* 104 */ 9999,
/* 105 */ 11020,
/* 106 */ 9999,
/* 107 */ 9999,
/* 108 */ 11030,
/* 109 */ 9999,
/* 110 */ 11036,
/* 111 */ 9999,
/* 112 */ 11020,
/* 113 */ 9999,
/* 114 */ 9999,
/* 115 */ 9999,
/* 116 */ 9999,
/* 117 */ 11041,
/* 118 */ 9999,
/* 119 */ 9999,
/* 120 */ 9999,
/* 121 */ 9999,
/* 122 */ 9999,
/* 123 */ 9999,
/* 124 */ 9999,
/* 125 */ 9999,
/* 126 */ 9999,
/* 127 */ 11052,
/* 128 */ 9999,
/* 129 */ 9999,
/* 130 */ 9999,
/* 131 */ 9999,
/* 132 */ 9999,
/* 133 */ 9999,
/* 134 */ 9999,
/* 135 */ 11083,
/* 136 */ 9999,
/* 137 */ 9999,
/* 138 */ 11110,
/* 139 */ 9999,
/* 140 */ 9999,
/* 141 */ 9999,
/* 142 */ 9999,
/* 143 */ 11106,
/* 144 */ 9999,
/* 145 */ 9999,
/* 146 */ 9999,
/* 147 */ 9999,
/* 148 */ 9999,
/* 149 */ 9999,
/* 150 */ 9999,
/* 151 */ 11127,
/* 152 */ 9999,
/* 153 */ 9999,
/* 154 */ 11154,
/* 155 */ 9999,
/* 156 */ 9999,
/* 157 */ 9999,
/* 158 */ 11168,
/* 159 */ 9999,
/* 160 */ 9999,
/* 161 */ 11150,
/* 162 */ 9999,
/* 163 */ 13005,
/* 164 */ 9999,
/* 165 */ 9999,
/* 166 */ 13015,
/* 167 */ 9999,
/* 168 */ 9999,
/* 169 */ 9999,
/* 170 */ 9999,
/* 171 */ 13005,
/* 172 */ 9999,
/* 173 */ 9999,
/* 174 */ 9999,
/* 175 */ 9999,
/* 176 */ 15005,
/* 177 */ 9999,
/* 178 */ 9999,
/* 179 */ 9999,
/* 180 */ 9999,
/* 181 */ 9999,
/* 182 */ 9999,
/* 183 */ 17005,
/* 184 */ 9999,
/* 185 */ 9999,
/* 186 */ 17028,
/* 187 */ 17030,
/* 188 */ 9999,
/* 189 */ 17024,
/* 190 */ 9999,
/* 191 */ 17035,
/* 192 */ 9999,
/* 193 */ 17035,
/* 194 */ 9999,
/* 195 */ 17040,
/* 196 */ 17042,
/* 197 */ 9999,
/* 198 */ 17048,
/* 199 */ 9999,
/* 200 */ 17054,
/* 201 */ 9999,
/* 202 */ 9999,
/* 203 */ 17040,
/* 204 */ 9999,
/* 205 */ 9999,
/* 206 */ 9999,
/* 207 */ 17071,
/* 208 */ 17073,
/* 209 */ 17075,
/* 210 */ 9999,
/* 211 */ 17063,
/* 212 */ 9999,
/* 213 */ 9999,
/* 214 */ 9999,
/* 215 */ 9999,
/* 216 */ 9999,
/* 217 */ 9999,
/* 218 */ 9999,
/* 219 */ 9999,
/* 220 */ 17080,
/* 221 */ 9999,
/* 222 */ 17107,
/* 223 */ 17109,
/* 224 */ 17111,
/* 225 */ 9999,
/* 226 */ 17107,
/* 227 */ 9999,
/* 228 */ 19005,
/* 229 */ 9999,
/* 230 */ 19005,
/* 231 */ 9999,
/* 232 */ 19010,
/* 233 */ 19012,
/* 234 */ 9999,
/* 235 */ 9999,
/* 236 */ 9999,
/* 237 */ 19010,
/* 238 */ 9999,
/* 239 */ 19025,
/* 240 */ 9999,
/* 241 */ 9999,
/* 242 */ 19035,
/* 243 */ 19037,
/* 244 */ 19039,
/* 245 */ 9999,
/* 246 */ 9999,
/* 247 */ 19025,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[249];
*/
int TABLE[34][256];
init_dirsets() {
TABLE[33][97] = 1;
TABLE[33][104] = 1;
TABLE[33][100] = 1;
TABLE[33][98] = 1;
TABLE[1][97] = 1;
TABLE[2][98] = 1;
TABLE[2][100] = 1;
TABLE[2][104] = 1;
TABLE[3][98] = 1;
TABLE[4][100] = 1;
TABLE[5][104] = 1;
TABLE[6][103] = 1;
TABLE[6][100] = 1;
TABLE[6][98] = 1;
TABLE[6][102] = 1;
TABLE[6][101] = 1;
TABLE[6][104] = 1;
TABLE[6][97] = 1;
TABLE[6][99] = 1;
TABLE[7][97] = 1;
TABLE[8][104] = 1;
TABLE[9][101] = 1;
TABLE[10][103] = 1;
TABLE[10][101] = 1;
TABLE[11][101] = 1;
TABLE[12][103] = 1;
TABLE[13][103] = 1;
TABLE[13][100] = 1;
TABLE[13][98] = 1;
TABLE[13][102] = 1;
TABLE[13][99] = 1;
TABLE[13][97] = 1;
TABLE[13][104] = 1;
TABLE[13][101] = 1;
TABLE[14][103] = 1;
TABLE[14][101] = 1;
TABLE[15][100] = 1;
TABLE[16][98] = 1;
TABLE[17][98] = 1;
TABLE[18][100] = 1;
TABLE[19][102] = 1;
TABLE[20][102] = 1;
TABLE[21][103] = 1;
TABLE[21][100] = 1;
TABLE[21][98] = 1;
TABLE[21][102] = 1;
TABLE[21][101] = 1;
TABLE[21][104] = 1;
TABLE[21][97] = 1;
TABLE[21][99] = 1;
TABLE[22][101] = 1;
TABLE[23][102] = 1;
TABLE[24][101] = 1;
TABLE[25][101] = 1;
TABLE[26][97] = 1;
TABLE[26][104] = 1;
TABLE[26][101] = 1;
TABLE[26][102] = 1;
TABLE[26][98] = 1;
TABLE[26][100] = 1;
TABLE[26][103] = 1;
TABLE[26][99] = 1;
TABLE[27][99] = 1;
TABLE[28][97] = 1;
TABLE[29][97] = 1;
TABLE[29][104] = 1;
TABLE[29][101] = 1;
TABLE[29][102] = 1;
TABLE[29][98] = 1;
TABLE[29][100] = 1;
TABLE[29][103] = 1;
TABLE[29][99] = 1;
TABLE[30][102] = 1;
TABLE[30][98] = 1;
TABLE[30][100] = 1;
TABLE[30][103] = 1;
TABLE[30][99] = 1;
TABLE[30][97] = 1;
TABLE[30][104] = 1;
TABLE[30][101] = 1;
TABLE[31][102] = 1;
TABLE[31][101] = 1;
TABLE[31][104] = 1;
TABLE[31][97] = 1;
TABLE[31][99] = 1;
TABLE[31][103] = 1;
TABLE[31][100] = 1;
TABLE[31][98] = 1;
TABLE[32][98] = 1;
TABLE[32][100] = 1;
TABLE[32][104] = 1;
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
      case 17: return 0; break;
      case 39: return 0; break;
      case 73: return 0; break;
      case 97: return 0; break;
      case 162: return 0; break;
      case 172: return 0; break;
      case 177: return 0; break;
      case 227: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 17: return "A"; break;
         case 39: return "B"; break;
         case 73: return "C"; break;
         case 97: return "D"; break;
         case 162: return "E"; break;
         case 172: return "F"; break;
         case 177: return "G"; break;
         case 227: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}
