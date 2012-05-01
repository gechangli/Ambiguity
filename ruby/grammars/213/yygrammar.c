#include "yygrammar.h"

YYSTART ()
{
   switch(yyselect()) {
   case 39: {
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
      get_lexval();
      } break;
   case 2: {
      get_lexval();
      E();
      H();
      } break;
   case 3: {
      E();
      } break;
   case 4: {
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      get_lexval();
      E();
      C();
      } break;
   case 5: {
      E();
      C();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 6: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      A();
      } break;
   case 7: {
      B();
      get_lexval();
      A();
      get_lexval();
      get_lexval();
      B();
      } break;
   case 8: {
      F();
      get_lexval();
      E();
      G();
      get_lexval();
      get_lexval();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 9: {
      C();
      F();
      E();
      get_lexval();
      D();
      E();
      } break;
   case 10: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 11: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 12: {
      E();
      get_lexval();
      get_lexval();
      H();
      } break;
   case 13: {
      B();
      F();
      get_lexval();
      get_lexval();
      } break;
   case 14: {
      F();
      F();
      } break;
   case 15: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      } break;
   }
}

C ()
{
   switch(yyselect()) {
   case 16: {
      get_lexval();
      } break;
   case 17: {
      get_lexval();
      get_lexval();
      } break;
   case 18: {
      get_lexval();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 19: {
      B();
      get_lexval();
      get_lexval();
      G();
      get_lexval();
      get_lexval();
      } break;
   case 20: {
      get_lexval();
      E();
      get_lexval();
      } break;
   }
}

E ()
{
   switch(yyselect()) {
   case 21: {
      get_lexval();
      G();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 22: {
      get_lexval();
      } break;
   case 23: {
      E();
      get_lexval();
      get_lexval();
      B();
      get_lexval();
      } break;
   case 24: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 25: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 26: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 27: {
      get_lexval();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      get_lexval();
      } break;
   case 28: {
      get_lexval();
      D();
      get_lexval();
      } break;
   case 29: {
      get_lexval();
      G();
      get_lexval();
      } break;
   case 30: {
      B();
      D();
      get_lexval();
      H();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 31: {
      get_lexval();
      get_lexval();
      C();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 32: {
      get_lexval();
      D();
      } break;
   case 33: {
      A();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 34: {
      get_lexval();
      G();
      B();
      G();
      } break;
   case 35: {
      get_lexval();
      A();
      } break;
   case 36: {
      C();
      E();
      get_lexval();
      get_lexval();
      D();
      B();
      get_lexval();
      } break;
   case 37: {
      get_lexval();
      C();
      get_lexval();
      get_lexval();
      } break;
   case 38: {
      G();
      get_lexval();
      D();
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
int c_length = 275;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 39,
/* 6 */ 11,
/* 7 */ 50099,
/* 8 */ 50101,
/* 9 */ -6,
/* 10 */ 1,
/* 11 */ 17,
/* 12 */ 50098,
/* 13 */ 147,
/* 14 */ 240,
/* 15 */ -6,
/* 16 */ 2,
/* 17 */ 21,
/* 18 */ 147,
/* 19 */ -6,
/* 20 */ 3,
/* 21 */ 31,
/* 22 */ 50101,
/* 23 */ 50099,
/* 24 */ 147,
/* 25 */ 50099,
/* 26 */ 50098,
/* 27 */ 147,
/* 28 */ 119,
/* 29 */ -6,
/* 30 */ 4,
/* 31 */ 0,
/* 32 */ 147,
/* 33 */ 119,
/* 34 */ -6,
/* 35 */ 5,
/* 36 */ 44,
/* 37 */ 50099,
/* 38 */ 50104,
/* 39 */ 50101,
/* 40 */ 50098,
/* 41 */ 36,
/* 42 */ -36,
/* 43 */ 6,
/* 44 */ 53,
/* 45 */ 62,
/* 46 */ 50103,
/* 47 */ 36,
/* 48 */ 50104,
/* 49 */ 50100,
/* 50 */ 62,
/* 51 */ -36,
/* 52 */ 7,
/* 53 */ 0,
/* 54 */ 194,
/* 55 */ 50097,
/* 56 */ 147,
/* 57 */ 222,
/* 58 */ 50100,
/* 59 */ 50098,
/* 60 */ -36,
/* 61 */ 8,
/* 62 */ 71,
/* 63 */ 119,
/* 64 */ 194,
/* 65 */ 147,
/* 66 */ 50101,
/* 67 */ 132,
/* 68 */ 147,
/* 69 */ -62,
/* 70 */ 9,
/* 71 */ 80,
/* 72 */ 50101,
/* 73 */ 50097,
/* 74 */ 50099,
/* 75 */ 50104,
/* 76 */ 50099,
/* 77 */ 50098,
/* 78 */ -62,
/* 79 */ 10,
/* 80 */ 90,
/* 81 */ 50102,
/* 82 */ 50102,
/* 83 */ 50102,
/* 84 */ 50101,
/* 85 */ 50097,
/* 86 */ 50102,
/* 87 */ 50099,
/* 88 */ -62,
/* 89 */ 11,
/* 90 */ 97,
/* 91 */ 147,
/* 92 */ 50097,
/* 93 */ 50102,
/* 94 */ 240,
/* 95 */ -62,
/* 96 */ 12,
/* 97 */ 104,
/* 98 */ 62,
/* 99 */ 194,
/* 100 */ 50098,
/* 101 */ 50103,
/* 102 */ -62,
/* 103 */ 13,
/* 104 */ 109,
/* 105 */ 194,
/* 106 */ 194,
/* 107 */ -62,
/* 108 */ 14,
/* 109 */ 0,
/* 110 */ 50098,
/* 111 */ 50100,
/* 112 */ 50099,
/* 113 */ 50102,
/* 114 */ 50101,
/* 115 */ 147,
/* 116 */ 50100,
/* 117 */ -62,
/* 118 */ 15,
/* 119 */ 123,
/* 120 */ 50097,
/* 121 */ -119,
/* 122 */ 16,
/* 123 */ 128,
/* 124 */ 50102,
/* 125 */ 50099,
/* 126 */ -119,
/* 127 */ 17,
/* 128 */ 0,
/* 129 */ 50101,
/* 130 */ -119,
/* 131 */ 18,
/* 132 */ 141,
/* 133 */ 62,
/* 134 */ 50101,
/* 135 */ 50099,
/* 136 */ 222,
/* 137 */ 50100,
/* 138 */ 50099,
/* 139 */ -132,
/* 140 */ 19,
/* 141 */ 0,
/* 142 */ 50097,
/* 143 */ 147,
/* 144 */ 50100,
/* 145 */ -132,
/* 146 */ 20,
/* 147 */ 157,
/* 148 */ 50101,
/* 149 */ 222,
/* 150 */ 50104,
/* 151 */ 50104,
/* 152 */ 50100,
/* 153 */ 50102,
/* 154 */ 50099,
/* 155 */ -147,
/* 156 */ 21,
/* 157 */ 161,
/* 158 */ 50099,
/* 159 */ -147,
/* 160 */ 22,
/* 161 */ 169,
/* 162 */ 147,
/* 163 */ 50104,
/* 164 */ 50102,
/* 165 */ 62,
/* 166 */ 50104,
/* 167 */ -147,
/* 168 */ 23,
/* 169 */ 178,
/* 170 */ 50097,
/* 171 */ 50097,
/* 172 */ 50100,
/* 173 */ 50101,
/* 174 */ 50103,
/* 175 */ 50099,
/* 176 */ -147,
/* 177 */ 24,
/* 178 */ 187,
/* 179 */ 50104,
/* 180 */ 50101,
/* 181 */ 50099,
/* 182 */ 50102,
/* 183 */ 50100,
/* 184 */ 50104,
/* 185 */ -147,
/* 186 */ 25,
/* 187 */ 0,
/* 188 */ 50097,
/* 189 */ 50104,
/* 190 */ 50098,
/* 191 */ 50103,
/* 192 */ -147,
/* 193 */ 26,
/* 194 */ 203,
/* 195 */ 50104,
/* 196 */ 50102,
/* 197 */ 50101,
/* 198 */ 147,
/* 199 */ 50097,
/* 200 */ 50104,
/* 201 */ -194,
/* 202 */ 27,
/* 203 */ 209,
/* 204 */ 50098,
/* 205 */ 132,
/* 206 */ 50102,
/* 207 */ -194,
/* 208 */ 28,
/* 209 */ 215,
/* 210 */ 50099,
/* 211 */ 222,
/* 212 */ 50103,
/* 213 */ -194,
/* 214 */ 29,
/* 215 */ 0,
/* 216 */ 62,
/* 217 */ 132,
/* 218 */ 50098,
/* 219 */ 240,
/* 220 */ -194,
/* 221 */ 30,
/* 222 */ 231,
/* 223 */ 50098,
/* 224 */ 50103,
/* 225 */ 119,
/* 226 */ 50101,
/* 227 */ 50102,
/* 228 */ 50101,
/* 229 */ -222,
/* 230 */ 31,
/* 231 */ 236,
/* 232 */ 50099,
/* 233 */ 132,
/* 234 */ -222,
/* 235 */ 32,
/* 236 */ 0,
/* 237 */ 36,
/* 238 */ -222,
/* 239 */ 33,
/* 240 */ 247,
/* 241 */ 50102,
/* 242 */ 222,
/* 243 */ 62,
/* 244 */ 222,
/* 245 */ -240,
/* 246 */ 34,
/* 247 */ 252,
/* 248 */ 50103,
/* 249 */ 36,
/* 250 */ -240,
/* 251 */ 35,
/* 252 */ 262,
/* 253 */ 119,
/* 254 */ 147,
/* 255 */ 50104,
/* 256 */ 50098,
/* 257 */ 132,
/* 258 */ 62,
/* 259 */ 50099,
/* 260 */ -240,
/* 261 */ 36,
/* 262 */ 269,
/* 263 */ 50098,
/* 264 */ 119,
/* 265 */ 50103,
/* 266 */ 50101,
/* 267 */ -240,
/* 268 */ 37,
/* 269 */ 0,
/* 270 */ 222,
/* 271 */ 50098,
/* 272 */ 132,
/* 273 */ 50097,
/* 274 */ -240,
/* 275 */ 38,
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
/* 6 */ 11,
/* 7 */ 50099,
/* 8 */ 50101,
/* 9 */ -6,
/* 10 */ -1,
/* 11 */ 17,
/* 12 */ 50098,
/* 13 */ 0,
/* 14 */ 0,
/* 15 */ -6,
/* 16 */ -1,
/* 17 */ 21,
/* 18 */ 0,
/* 19 */ -6,
/* 20 */ -1,
/* 21 */ 31,
/* 22 */ 50101,
/* 23 */ 50099,
/* 24 */ 0,
/* 25 */ 50099,
/* 26 */ 50098,
/* 27 */ 0,
/* 28 */ 0,
/* 29 */ -6,
/* 30 */ -1,
/* 31 */ 0,
/* 32 */ 0,
/* 33 */ 0,
/* 34 */ -6,
/* 35 */ -1,
/* 36 */ 44,
/* 37 */ 50099,
/* 38 */ 50104,
/* 39 */ 50101,
/* 40 */ 50098,
/* 41 */ 0,
/* 42 */ -36,
/* 43 */ -1,
/* 44 */ 53,
/* 45 */ 0,
/* 46 */ 50103,
/* 47 */ 0,
/* 48 */ 50104,
/* 49 */ 50100,
/* 50 */ 0,
/* 51 */ -36,
/* 52 */ -1,
/* 53 */ 0,
/* 54 */ 0,
/* 55 */ 50097,
/* 56 */ 0,
/* 57 */ 0,
/* 58 */ 50100,
/* 59 */ 50098,
/* 60 */ -36,
/* 61 */ -1,
/* 62 */ 71,
/* 63 */ 0,
/* 64 */ 0,
/* 65 */ 0,
/* 66 */ 50101,
/* 67 */ 0,
/* 68 */ 0,
/* 69 */ -62,
/* 70 */ -1,
/* 71 */ 80,
/* 72 */ 50101,
/* 73 */ 50097,
/* 74 */ 50099,
/* 75 */ 50104,
/* 76 */ 50099,
/* 77 */ 50098,
/* 78 */ -62,
/* 79 */ -1,
/* 80 */ 90,
/* 81 */ 50102,
/* 82 */ 50102,
/* 83 */ 50102,
/* 84 */ 50101,
/* 85 */ 50097,
/* 86 */ 50102,
/* 87 */ 50099,
/* 88 */ -62,
/* 89 */ -1,
/* 90 */ 97,
/* 91 */ 0,
/* 92 */ 50097,
/* 93 */ 50102,
/* 94 */ 0,
/* 95 */ -62,
/* 96 */ -1,
/* 97 */ 104,
/* 98 */ 0,
/* 99 */ 0,
/* 100 */ 50098,
/* 101 */ 50103,
/* 102 */ -62,
/* 103 */ -1,
/* 104 */ 109,
/* 105 */ 0,
/* 106 */ 0,
/* 107 */ -62,
/* 108 */ -1,
/* 109 */ 0,
/* 110 */ 50098,
/* 111 */ 50100,
/* 112 */ 50099,
/* 113 */ 50102,
/* 114 */ 50101,
/* 115 */ 0,
/* 116 */ 50100,
/* 117 */ -62,
/* 118 */ -1,
/* 119 */ 123,
/* 120 */ 50097,
/* 121 */ -119,
/* 122 */ -1,
/* 123 */ 128,
/* 124 */ 50102,
/* 125 */ 50099,
/* 126 */ -119,
/* 127 */ -1,
/* 128 */ 0,
/* 129 */ 50101,
/* 130 */ -119,
/* 131 */ -1,
/* 132 */ 141,
/* 133 */ 0,
/* 134 */ 50101,
/* 135 */ 50099,
/* 136 */ 0,
/* 137 */ 50100,
/* 138 */ 50099,
/* 139 */ -132,
/* 140 */ -1,
/* 141 */ 0,
/* 142 */ 50097,
/* 143 */ 0,
/* 144 */ 50100,
/* 145 */ -132,
/* 146 */ -1,
/* 147 */ 157,
/* 148 */ 50101,
/* 149 */ 0,
/* 150 */ 50104,
/* 151 */ 50104,
/* 152 */ 50100,
/* 153 */ 50102,
/* 154 */ 50099,
/* 155 */ -147,
/* 156 */ -1,
/* 157 */ 161,
/* 158 */ 50099,
/* 159 */ -147,
/* 160 */ -1,
/* 161 */ 169,
/* 162 */ 0,
/* 163 */ 50104,
/* 164 */ 50102,
/* 165 */ 0,
/* 166 */ 50104,
/* 167 */ -147,
/* 168 */ -1,
/* 169 */ 178,
/* 170 */ 50097,
/* 171 */ 50097,
/* 172 */ 50100,
/* 173 */ 50101,
/* 174 */ 50103,
/* 175 */ 50099,
/* 176 */ -147,
/* 177 */ -1,
/* 178 */ 187,
/* 179 */ 50104,
/* 180 */ 50101,
/* 181 */ 50099,
/* 182 */ 50102,
/* 183 */ 50100,
/* 184 */ 50104,
/* 185 */ -147,
/* 186 */ -1,
/* 187 */ 0,
/* 188 */ 50097,
/* 189 */ 50104,
/* 190 */ 50098,
/* 191 */ 50103,
/* 192 */ -147,
/* 193 */ -1,
/* 194 */ 203,
/* 195 */ 50104,
/* 196 */ 50102,
/* 197 */ 50101,
/* 198 */ 0,
/* 199 */ 50097,
/* 200 */ 50104,
/* 201 */ -194,
/* 202 */ -1,
/* 203 */ 209,
/* 204 */ 50098,
/* 205 */ 0,
/* 206 */ 50102,
/* 207 */ -194,
/* 208 */ -1,
/* 209 */ 215,
/* 210 */ 50099,
/* 211 */ 0,
/* 212 */ 50103,
/* 213 */ -194,
/* 214 */ -1,
/* 215 */ 0,
/* 216 */ 0,
/* 217 */ 0,
/* 218 */ 50098,
/* 219 */ 0,
/* 220 */ -194,
/* 221 */ -1,
/* 222 */ 231,
/* 223 */ 50098,
/* 224 */ 50103,
/* 225 */ 0,
/* 226 */ 50101,
/* 227 */ 50102,
/* 228 */ 50101,
/* 229 */ -222,
/* 230 */ -1,
/* 231 */ 236,
/* 232 */ 50099,
/* 233 */ 0,
/* 234 */ -222,
/* 235 */ -1,
/* 236 */ 0,
/* 237 */ 0,
/* 238 */ -222,
/* 239 */ -1,
/* 240 */ 247,
/* 241 */ 50102,
/* 242 */ 0,
/* 243 */ 0,
/* 244 */ 0,
/* 245 */ -240,
/* 246 */ -1,
/* 247 */ 252,
/* 248 */ 50103,
/* 249 */ 0,
/* 250 */ -240,
/* 251 */ -1,
/* 252 */ 262,
/* 253 */ 0,
/* 254 */ 0,
/* 255 */ 50104,
/* 256 */ 50098,
/* 257 */ 0,
/* 258 */ 0,
/* 259 */ 50099,
/* 260 */ -240,
/* 261 */ -1,
/* 262 */ 269,
/* 263 */ 50098,
/* 264 */ 0,
/* 265 */ 50103,
/* 266 */ 50101,
/* 267 */ -240,
/* 268 */ -1,
/* 269 */ 0,
/* 270 */ 0,
/* 271 */ 50098,
/* 272 */ 0,
/* 273 */ 50097,
/* 274 */ -240,
/* 275 */ -1,
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
/* 9 */ 9999,
/* 10 */ 3008,
/* 11 */ 9999,
/* 12 */ 9999,
/* 13 */ 3023,
/* 14 */ 3025,
/* 15 */ 9999,
/* 16 */ 3019,
/* 17 */ 9999,
/* 18 */ 3030,
/* 19 */ 9999,
/* 20 */ 3030,
/* 21 */ 9999,
/* 22 */ 9999,
/* 23 */ 9999,
/* 24 */ 3043,
/* 25 */ 9999,
/* 26 */ 9999,
/* 27 */ 3053,
/* 28 */ 3055,
/* 29 */ 9999,
/* 30 */ 3035,
/* 31 */ 9999,
/* 32 */ 3060,
/* 33 */ 3062,
/* 34 */ 9999,
/* 35 */ 3060,
/* 36 */ 9999,
/* 37 */ 9999,
/* 38 */ 9999,
/* 39 */ 9999,
/* 40 */ 9999,
/* 41 */ 5021,
/* 42 */ 9999,
/* 43 */ 5005,
/* 44 */ 9999,
/* 45 */ 5026,
/* 46 */ 9999,
/* 47 */ 5032,
/* 48 */ 9999,
/* 49 */ 9999,
/* 50 */ 5042,
/* 51 */ 9999,
/* 52 */ 5026,
/* 53 */ 9999,
/* 54 */ 5047,
/* 55 */ 9999,
/* 56 */ 5053,
/* 57 */ 5055,
/* 58 */ 9999,
/* 59 */ 9999,
/* 60 */ 9999,
/* 61 */ 5047,
/* 62 */ 9999,
/* 63 */ 7005,
/* 64 */ 7007,
/* 65 */ 7009,
/* 66 */ 9999,
/* 67 */ 7015,
/* 68 */ 7017,
/* 69 */ 9999,
/* 70 */ 7005,
/* 71 */ 9999,
/* 72 */ 9999,
/* 73 */ 9999,
/* 74 */ 9999,
/* 75 */ 9999,
/* 76 */ 9999,
/* 77 */ 9999,
/* 78 */ 9999,
/* 79 */ 7022,
/* 80 */ 9999,
/* 81 */ 9999,
/* 82 */ 9999,
/* 83 */ 9999,
/* 84 */ 9999,
/* 85 */ 9999,
/* 86 */ 9999,
/* 87 */ 9999,
/* 88 */ 9999,
/* 89 */ 7049,
/* 90 */ 9999,
/* 91 */ 7080,
/* 92 */ 9999,
/* 93 */ 9999,
/* 94 */ 7090,
/* 95 */ 9999,
/* 96 */ 7080,
/* 97 */ 9999,
/* 98 */ 7095,
/* 99 */ 7097,
/* 100 */ 9999,
/* 101 */ 9999,
/* 102 */ 9999,
/* 103 */ 7095,
/* 104 */ 9999,
/* 105 */ 7110,
/* 106 */ 7112,
/* 107 */ 9999,
/* 108 */ 7110,
/* 109 */ 9999,
/* 110 */ 9999,
/* 111 */ 9999,
/* 112 */ 9999,
/* 113 */ 9999,
/* 114 */ 9999,
/* 115 */ 7137,
/* 116 */ 9999,
/* 117 */ 9999,
/* 118 */ 7117,
/* 119 */ 9999,
/* 120 */ 9999,
/* 121 */ 9999,
/* 122 */ 9005,
/* 123 */ 9999,
/* 124 */ 9999,
/* 125 */ 9999,
/* 126 */ 9999,
/* 127 */ 9012,
/* 128 */ 9999,
/* 129 */ 9999,
/* 130 */ 9999,
/* 131 */ 9023,
/* 132 */ 9999,
/* 133 */ 11005,
/* 134 */ 9999,
/* 135 */ 9999,
/* 136 */ 11015,
/* 137 */ 9999,
/* 138 */ 9999,
/* 139 */ 9999,
/* 140 */ 11005,
/* 141 */ 9999,
/* 142 */ 9999,
/* 143 */ 11032,
/* 144 */ 9999,
/* 145 */ 9999,
/* 146 */ 11028,
/* 147 */ 9999,
/* 148 */ 9999,
/* 149 */ 13009,
/* 150 */ 9999,
/* 151 */ 9999,
/* 152 */ 9999,
/* 153 */ 9999,
/* 154 */ 9999,
/* 155 */ 9999,
/* 156 */ 13005,
/* 157 */ 9999,
/* 158 */ 9999,
/* 159 */ 9999,
/* 160 */ 13034,
/* 161 */ 9999,
/* 162 */ 13041,
/* 163 */ 9999,
/* 164 */ 9999,
/* 165 */ 13051,
/* 166 */ 9999,
/* 167 */ 9999,
/* 168 */ 13041,
/* 169 */ 9999,
/* 170 */ 9999,
/* 171 */ 9999,
/* 172 */ 9999,
/* 173 */ 9999,
/* 174 */ 9999,
/* 175 */ 9999,
/* 176 */ 9999,
/* 177 */ 13060,
/* 178 */ 9999,
/* 179 */ 9999,
/* 180 */ 9999,
/* 181 */ 9999,
/* 182 */ 9999,
/* 183 */ 9999,
/* 184 */ 9999,
/* 185 */ 9999,
/* 186 */ 13087,
/* 187 */ 9999,
/* 188 */ 9999,
/* 189 */ 9999,
/* 190 */ 9999,
/* 191 */ 9999,
/* 192 */ 9999,
/* 193 */ 13114,
/* 194 */ 9999,
/* 195 */ 9999,
/* 196 */ 9999,
/* 197 */ 9999,
/* 198 */ 15017,
/* 199 */ 9999,
/* 200 */ 9999,
/* 201 */ 9999,
/* 202 */ 15005,
/* 203 */ 9999,
/* 204 */ 9999,
/* 205 */ 15034,
/* 206 */ 9999,
/* 207 */ 9999,
/* 208 */ 15030,
/* 209 */ 9999,
/* 210 */ 9999,
/* 211 */ 15047,
/* 212 */ 9999,
/* 213 */ 9999,
/* 214 */ 15043,
/* 215 */ 9999,
/* 216 */ 15056,
/* 217 */ 15058,
/* 218 */ 9999,
/* 219 */ 15064,
/* 220 */ 9999,
/* 221 */ 15056,
/* 222 */ 9999,
/* 223 */ 9999,
/* 224 */ 9999,
/* 225 */ 17013,
/* 226 */ 9999,
/* 227 */ 9999,
/* 228 */ 9999,
/* 229 */ 9999,
/* 230 */ 17005,
/* 231 */ 9999,
/* 232 */ 9999,
/* 233 */ 17034,
/* 234 */ 9999,
/* 235 */ 17030,
/* 236 */ 9999,
/* 237 */ 17039,
/* 238 */ 9999,
/* 239 */ 17039,
/* 240 */ 9999,
/* 241 */ 9999,
/* 242 */ 19009,
/* 243 */ 19011,
/* 244 */ 19013,
/* 245 */ 9999,
/* 246 */ 19005,
/* 247 */ 9999,
/* 248 */ 9999,
/* 249 */ 19022,
/* 250 */ 9999,
/* 251 */ 19018,
/* 252 */ 9999,
/* 253 */ 19027,
/* 254 */ 19029,
/* 255 */ 9999,
/* 256 */ 9999,
/* 257 */ 19039,
/* 258 */ 19041,
/* 259 */ 9999,
/* 260 */ 9999,
/* 261 */ 19027,
/* 262 */ 9999,
/* 263 */ 9999,
/* 264 */ 19054,
/* 265 */ 9999,
/* 266 */ 9999,
/* 267 */ 9999,
/* 268 */ 19050,
/* 269 */ 9999,
/* 270 */ 19067,
/* 271 */ 9999,
/* 272 */ 19073,
/* 273 */ 9999,
/* 274 */ 9999,
/* 275 */ 19067,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[277];
*/
int TABLE[40][256];
init_dirsets() {
TABLE[39][99] = 1;
TABLE[39][98] = 1;
TABLE[39][101] = 1;
TABLE[39][104] = 1;
TABLE[39][97] = 1;
TABLE[1][99] = 1;
TABLE[2][98] = 1;
TABLE[3][101] = 1;
TABLE[3][99] = 1;
TABLE[3][97] = 1;
TABLE[3][104] = 1;
TABLE[4][101] = 1;
TABLE[5][101] = 1;
TABLE[5][99] = 1;
TABLE[5][97] = 1;
TABLE[5][104] = 1;
TABLE[6][99] = 1;
TABLE[7][101] = 1;
TABLE[7][102] = 1;
TABLE[7][98] = 1;
TABLE[7][97] = 1;
TABLE[7][104] = 1;
TABLE[7][99] = 1;
TABLE[8][104] = 1;
TABLE[8][98] = 1;
TABLE[8][99] = 1;
TABLE[8][102] = 1;
TABLE[8][101] = 1;
TABLE[8][97] = 1;
TABLE[9][97] = 1;
TABLE[9][102] = 1;
TABLE[9][101] = 1;
TABLE[10][101] = 1;
TABLE[11][102] = 1;
TABLE[12][101] = 1;
TABLE[12][99] = 1;
TABLE[12][97] = 1;
TABLE[12][104] = 1;
TABLE[13][101] = 1;
TABLE[13][102] = 1;
TABLE[13][98] = 1;
TABLE[13][97] = 1;
TABLE[13][104] = 1;
TABLE[13][99] = 1;
TABLE[14][104] = 1;
TABLE[14][98] = 1;
TABLE[14][99] = 1;
TABLE[14][102] = 1;
TABLE[14][101] = 1;
TABLE[14][97] = 1;
TABLE[15][98] = 1;
TABLE[16][97] = 1;
TABLE[17][102] = 1;
TABLE[18][101] = 1;
TABLE[19][101] = 1;
TABLE[19][102] = 1;
TABLE[19][98] = 1;
TABLE[19][97] = 1;
TABLE[19][104] = 1;
TABLE[19][99] = 1;
TABLE[20][97] = 1;
TABLE[21][101] = 1;
TABLE[22][99] = 1;
TABLE[23][101] = 1;
TABLE[23][99] = 1;
TABLE[23][97] = 1;
TABLE[23][104] = 1;
TABLE[24][97] = 1;
TABLE[25][104] = 1;
TABLE[26][97] = 1;
TABLE[27][104] = 1;
TABLE[28][98] = 1;
TABLE[29][99] = 1;
TABLE[30][101] = 1;
TABLE[30][102] = 1;
TABLE[30][98] = 1;
TABLE[30][97] = 1;
TABLE[30][104] = 1;
TABLE[30][99] = 1;
TABLE[31][98] = 1;
TABLE[32][99] = 1;
TABLE[33][99] = 1;
TABLE[33][98] = 1;
TABLE[33][102] = 1;
TABLE[33][101] = 1;
TABLE[33][104] = 1;
TABLE[33][97] = 1;
TABLE[34][102] = 1;
TABLE[35][103] = 1;
TABLE[36][97] = 1;
TABLE[36][102] = 1;
TABLE[36][101] = 1;
TABLE[37][98] = 1;
TABLE[38][98] = 1;
TABLE[38][99] = 1;
TABLE[38][104] = 1;
TABLE[38][101] = 1;
TABLE[38][102] = 1;
TABLE[38][97] = 1;
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
      case 36: return 0; break;
      case 62: return 0; break;
      case 119: return 0; break;
      case 132: return 0; break;
      case 147: return 0; break;
      case 194: return 0; break;
      case 222: return 0; break;
      case 240: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 36: return "A"; break;
         case 62: return "B"; break;
         case 119: return "C"; break;
         case 132: return "D"; break;
         case 147: return "E"; break;
         case 194: return "F"; break;
         case 222: return "G"; break;
         case 240: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}
