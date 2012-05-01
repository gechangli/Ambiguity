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
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 2: {
      A();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 3: {
      H();
      B();
      } break;
   case 4: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 5: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 6: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 7: {
      F();
      get_lexval();
      get_lexval();
      } break;
   case 8: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 9: {
      A();
      B();
      H();
      get_lexval();
      get_lexval();
      E();
      A();
      } break;
   case 10: {
      H();
      E();
      get_lexval();
      get_lexval();
      get_lexval();
      F();
      C();
      } break;
   case 11: {
      A();
      C();
      get_lexval();
      C();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 12: {
      get_lexval();
      C();
      get_lexval();
      F();
      F();
      G();
      } break;
   case 13: {
      get_lexval();
      E();
      get_lexval();
      F();
      B();
      } break;
   case 14: {
      B();
      B();
      B();
      } break;
   case 15: {
      get_lexval();
      get_lexval();
      get_lexval();
      H();
      get_lexval();
      F();
      } break;
   }
}

C ()
{
   switch(yyselect()) {
   case 16: {
      get_lexval();
      get_lexval();
      get_lexval();
      D();
      } break;
   case 17: {
      H();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 18: {
      A();
      get_lexval();
      get_lexval();
      G();
      } break;
   case 19: {
      get_lexval();
      get_lexval();
      get_lexval();
      D();
      } break;
   case 20: {
      get_lexval();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 21: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 22: {
      G();
      H();
      C();
      } break;
   case 23: {
      B();
      D();
      get_lexval();
      C();
      F();
      } break;
   }
}

E ()
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
      E();
      F();
      get_lexval();
      get_lexval();
      G();
      C();
      } break;
   case 26: {
      G();
      } break;
   case 27: {
      get_lexval();
      C();
      D();
      get_lexval();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 28: {
      get_lexval();
      F();
      get_lexval();
      get_lexval();
      } break;
   case 29: {
      get_lexval();
      get_lexval();
      get_lexval();
      H();
      B();
      A();
      } break;
   case 30: {
      get_lexval();
      get_lexval();
      B();
      get_lexval();
      } break;
   case 31: {
      get_lexval();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      } break;
   case 32: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 33: {
      D();
      get_lexval();
      } break;
   case 34: {
      C();
      } break;
   case 35: {
      get_lexval();
      A();
      } break;
   case 36: {
      G();
      get_lexval();
      G();
      C();
      E();
      A();
      get_lexval();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 37: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 38: {
      C();
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
int c_length = 279;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 39,
/* 6 */ 14,
/* 7 */ 50097,
/* 8 */ 50099,
/* 9 */ 50102,
/* 10 */ 50102,
/* 11 */ 50098,
/* 12 */ -6,
/* 13 */ 1,
/* 14 */ 0,
/* 15 */ 18,
/* 16 */ -6,
/* 17 */ 2,
/* 18 */ 23,
/* 19 */ 265,
/* 20 */ 88,
/* 21 */ -18,
/* 22 */ 3,
/* 23 */ 30,
/* 24 */ 50097,
/* 25 */ 50097,
/* 26 */ 50099,
/* 27 */ 50098,
/* 28 */ -18,
/* 29 */ 4,
/* 30 */ 39,
/* 31 */ 50099,
/* 32 */ 50104,
/* 33 */ 50100,
/* 34 */ 50098,
/* 35 */ 50099,
/* 36 */ 50103,
/* 37 */ -18,
/* 38 */ 5,
/* 39 */ 48,
/* 40 */ 50100,
/* 41 */ 50101,
/* 42 */ 50102,
/* 43 */ 50099,
/* 44 */ 50100,
/* 45 */ 50102,
/* 46 */ -18,
/* 47 */ 6,
/* 48 */ 54,
/* 49 */ 202,
/* 50 */ 50104,
/* 51 */ 50103,
/* 52 */ -18,
/* 53 */ 7,
/* 54 */ 61,
/* 55 */ 50100,
/* 56 */ 50097,
/* 57 */ 50099,
/* 58 */ 50102,
/* 59 */ -18,
/* 60 */ 8,
/* 61 */ 71,
/* 62 */ 18,
/* 63 */ 88,
/* 64 */ 265,
/* 65 */ 50099,
/* 66 */ 50100,
/* 67 */ 174,
/* 68 */ 18,
/* 69 */ -18,
/* 70 */ 9,
/* 71 */ 81,
/* 72 */ 265,
/* 73 */ 174,
/* 74 */ 50099,
/* 75 */ 50100,
/* 76 */ 50100,
/* 77 */ 202,
/* 78 */ 120,
/* 79 */ -18,
/* 80 */ 10,
/* 81 */ 0,
/* 82 */ 18,
/* 83 */ 120,
/* 84 */ 50101,
/* 85 */ 120,
/* 86 */ -18,
/* 87 */ 11,
/* 88 */ 97,
/* 89 */ 50101,
/* 90 */ 120,
/* 91 */ 50097,
/* 92 */ 202,
/* 93 */ 202,
/* 94 */ 241,
/* 95 */ -88,
/* 96 */ 12,
/* 97 */ 105,
/* 98 */ 50098,
/* 99 */ 174,
/* 100 */ 50100,
/* 101 */ 202,
/* 102 */ 88,
/* 103 */ -88,
/* 104 */ 13,
/* 105 */ 111,
/* 106 */ 88,
/* 107 */ 88,
/* 108 */ 88,
/* 109 */ -88,
/* 110 */ 14,
/* 111 */ 0,
/* 112 */ 50098,
/* 113 */ 50098,
/* 114 */ 50103,
/* 115 */ 265,
/* 116 */ 50100,
/* 117 */ 202,
/* 118 */ -88,
/* 119 */ 15,
/* 120 */ 127,
/* 121 */ 50099,
/* 122 */ 50100,
/* 123 */ 50104,
/* 124 */ 153,
/* 125 */ -120,
/* 126 */ 16,
/* 127 */ 135,
/* 128 */ 265,
/* 129 */ 50102,
/* 130 */ 50103,
/* 131 */ 50102,
/* 132 */ 50098,
/* 133 */ -120,
/* 134 */ 17,
/* 135 */ 142,
/* 136 */ 18,
/* 137 */ 50099,
/* 138 */ 50099,
/* 139 */ 241,
/* 140 */ -120,
/* 141 */ 18,
/* 142 */ 149,
/* 143 */ 50102,
/* 144 */ 50103,
/* 145 */ 50104,
/* 146 */ 153,
/* 147 */ -120,
/* 148 */ 19,
/* 149 */ 0,
/* 150 */ 50101,
/* 151 */ -120,
/* 152 */ 20,
/* 153 */ 160,
/* 154 */ 50101,
/* 155 */ 50098,
/* 156 */ 50097,
/* 157 */ 50099,
/* 158 */ -153,
/* 159 */ 21,
/* 160 */ 166,
/* 161 */ 241,
/* 162 */ 265,
/* 163 */ 120,
/* 164 */ -153,
/* 165 */ 22,
/* 166 */ 0,
/* 167 */ 88,
/* 168 */ 153,
/* 169 */ 50098,
/* 170 */ 120,
/* 171 */ 202,
/* 172 */ -153,
/* 173 */ 23,
/* 174 */ 181,
/* 175 */ 50100,
/* 176 */ 50102,
/* 177 */ 50100,
/* 178 */ 50102,
/* 179 */ -174,
/* 180 */ 24,
/* 181 */ 191,
/* 182 */ 241,
/* 183 */ 174,
/* 184 */ 202,
/* 185 */ 50099,
/* 186 */ 50101,
/* 187 */ 241,
/* 188 */ 120,
/* 189 */ -174,
/* 190 */ 25,
/* 191 */ 195,
/* 192 */ 241,
/* 193 */ -174,
/* 194 */ 26,
/* 195 */ 0,
/* 196 */ 50104,
/* 197 */ 120,
/* 198 */ 153,
/* 199 */ 50103,
/* 200 */ -174,
/* 201 */ 27,
/* 202 */ 209,
/* 203 */ 50097,
/* 204 */ 202,
/* 205 */ 50102,
/* 206 */ 50102,
/* 207 */ -202,
/* 208 */ 28,
/* 209 */ 218,
/* 210 */ 50098,
/* 211 */ 50100,
/* 212 */ 50099,
/* 213 */ 265,
/* 214 */ 88,
/* 215 */ 18,
/* 216 */ -202,
/* 217 */ 29,
/* 218 */ 225,
/* 219 */ 50102,
/* 220 */ 50101,
/* 221 */ 88,
/* 222 */ 50099,
/* 223 */ -202,
/* 224 */ 30,
/* 225 */ 233,
/* 226 */ 50102,
/* 227 */ 50099,
/* 228 */ 50103,
/* 229 */ 174,
/* 230 */ 50103,
/* 231 */ -202,
/* 232 */ 31,
/* 233 */ 0,
/* 234 */ 50104,
/* 235 */ 50103,
/* 236 */ 50102,
/* 237 */ 50103,
/* 238 */ 50104,
/* 239 */ -202,
/* 240 */ 32,
/* 241 */ 246,
/* 242 */ 153,
/* 243 */ 50102,
/* 244 */ -241,
/* 245 */ 33,
/* 246 */ 250,
/* 247 */ 120,
/* 248 */ -241,
/* 249 */ 34,
/* 250 */ 255,
/* 251 */ 50100,
/* 252 */ 18,
/* 253 */ -241,
/* 254 */ 35,
/* 255 */ 0,
/* 256 */ 241,
/* 257 */ 50101,
/* 258 */ 241,
/* 259 */ 120,
/* 260 */ 174,
/* 261 */ 18,
/* 262 */ 50098,
/* 263 */ -241,
/* 264 */ 36,
/* 265 */ 275,
/* 266 */ 50100,
/* 267 */ 50104,
/* 268 */ 50103,
/* 269 */ 50097,
/* 270 */ 50102,
/* 271 */ 50103,
/* 272 */ 50100,
/* 273 */ -265,
/* 274 */ 37,
/* 275 */ 0,
/* 276 */ 120,
/* 277 */ 50103,
/* 278 */ -265,
/* 279 */ 38,
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
/* 7 */ 50097,
/* 8 */ 50099,
/* 9 */ 50102,
/* 10 */ 50102,
/* 11 */ 50098,
/* 12 */ -6,
/* 13 */ -1,
/* 14 */ 0,
/* 15 */ 0,
/* 16 */ -6,
/* 17 */ -1,
/* 18 */ 23,
/* 19 */ 0,
/* 20 */ 0,
/* 21 */ -18,
/* 22 */ -1,
/* 23 */ 30,
/* 24 */ 50097,
/* 25 */ 50097,
/* 26 */ 50099,
/* 27 */ 50098,
/* 28 */ -18,
/* 29 */ -1,
/* 30 */ 39,
/* 31 */ 50099,
/* 32 */ 50104,
/* 33 */ 50100,
/* 34 */ 50098,
/* 35 */ 50099,
/* 36 */ 50103,
/* 37 */ -18,
/* 38 */ -1,
/* 39 */ 48,
/* 40 */ 50100,
/* 41 */ 50101,
/* 42 */ 50102,
/* 43 */ 50099,
/* 44 */ 50100,
/* 45 */ 50102,
/* 46 */ -18,
/* 47 */ -1,
/* 48 */ 54,
/* 49 */ 0,
/* 50 */ 50104,
/* 51 */ 50103,
/* 52 */ -18,
/* 53 */ -1,
/* 54 */ 61,
/* 55 */ 50100,
/* 56 */ 50097,
/* 57 */ 50099,
/* 58 */ 50102,
/* 59 */ -18,
/* 60 */ -1,
/* 61 */ 71,
/* 62 */ 0,
/* 63 */ 0,
/* 64 */ 0,
/* 65 */ 50099,
/* 66 */ 50100,
/* 67 */ 0,
/* 68 */ 0,
/* 69 */ -18,
/* 70 */ -1,
/* 71 */ 81,
/* 72 */ 0,
/* 73 */ 0,
/* 74 */ 50099,
/* 75 */ 50100,
/* 76 */ 50100,
/* 77 */ 0,
/* 78 */ 0,
/* 79 */ -18,
/* 80 */ -1,
/* 81 */ 0,
/* 82 */ 0,
/* 83 */ 0,
/* 84 */ 50101,
/* 85 */ 0,
/* 86 */ -18,
/* 87 */ -1,
/* 88 */ 97,
/* 89 */ 50101,
/* 90 */ 0,
/* 91 */ 50097,
/* 92 */ 0,
/* 93 */ 0,
/* 94 */ 0,
/* 95 */ -88,
/* 96 */ -1,
/* 97 */ 105,
/* 98 */ 50098,
/* 99 */ 0,
/* 100 */ 50100,
/* 101 */ 0,
/* 102 */ 0,
/* 103 */ -88,
/* 104 */ -1,
/* 105 */ 111,
/* 106 */ 0,
/* 107 */ 0,
/* 108 */ 0,
/* 109 */ -88,
/* 110 */ -1,
/* 111 */ 0,
/* 112 */ 50098,
/* 113 */ 50098,
/* 114 */ 50103,
/* 115 */ 0,
/* 116 */ 50100,
/* 117 */ 0,
/* 118 */ -88,
/* 119 */ -1,
/* 120 */ 127,
/* 121 */ 50099,
/* 122 */ 50100,
/* 123 */ 50104,
/* 124 */ 0,
/* 125 */ -120,
/* 126 */ -1,
/* 127 */ 135,
/* 128 */ 0,
/* 129 */ 50102,
/* 130 */ 50103,
/* 131 */ 50102,
/* 132 */ 50098,
/* 133 */ -120,
/* 134 */ -1,
/* 135 */ 142,
/* 136 */ 0,
/* 137 */ 50099,
/* 138 */ 50099,
/* 139 */ 0,
/* 140 */ -120,
/* 141 */ -1,
/* 142 */ 149,
/* 143 */ 50102,
/* 144 */ 50103,
/* 145 */ 50104,
/* 146 */ 0,
/* 147 */ -120,
/* 148 */ -1,
/* 149 */ 0,
/* 150 */ 50101,
/* 151 */ -120,
/* 152 */ -1,
/* 153 */ 160,
/* 154 */ 50101,
/* 155 */ 50098,
/* 156 */ 50097,
/* 157 */ 50099,
/* 158 */ -153,
/* 159 */ -1,
/* 160 */ 166,
/* 161 */ 0,
/* 162 */ 0,
/* 163 */ 0,
/* 164 */ -153,
/* 165 */ -1,
/* 166 */ 0,
/* 167 */ 0,
/* 168 */ 0,
/* 169 */ 50098,
/* 170 */ 0,
/* 171 */ 0,
/* 172 */ -153,
/* 173 */ -1,
/* 174 */ 181,
/* 175 */ 50100,
/* 176 */ 50102,
/* 177 */ 50100,
/* 178 */ 50102,
/* 179 */ -174,
/* 180 */ -1,
/* 181 */ 191,
/* 182 */ 0,
/* 183 */ 0,
/* 184 */ 0,
/* 185 */ 50099,
/* 186 */ 50101,
/* 187 */ 0,
/* 188 */ 0,
/* 189 */ -174,
/* 190 */ -1,
/* 191 */ 195,
/* 192 */ 0,
/* 193 */ -174,
/* 194 */ -1,
/* 195 */ 0,
/* 196 */ 50104,
/* 197 */ 0,
/* 198 */ 0,
/* 199 */ 50103,
/* 200 */ -174,
/* 201 */ -1,
/* 202 */ 209,
/* 203 */ 50097,
/* 204 */ 0,
/* 205 */ 50102,
/* 206 */ 50102,
/* 207 */ -202,
/* 208 */ -1,
/* 209 */ 218,
/* 210 */ 50098,
/* 211 */ 50100,
/* 212 */ 50099,
/* 213 */ 0,
/* 214 */ 0,
/* 215 */ 0,
/* 216 */ -202,
/* 217 */ -1,
/* 218 */ 225,
/* 219 */ 50102,
/* 220 */ 50101,
/* 221 */ 0,
/* 222 */ 50099,
/* 223 */ -202,
/* 224 */ -1,
/* 225 */ 233,
/* 226 */ 50102,
/* 227 */ 50099,
/* 228 */ 50103,
/* 229 */ 0,
/* 230 */ 50103,
/* 231 */ -202,
/* 232 */ -1,
/* 233 */ 0,
/* 234 */ 50104,
/* 235 */ 50103,
/* 236 */ 50102,
/* 237 */ 50103,
/* 238 */ 50104,
/* 239 */ -202,
/* 240 */ -1,
/* 241 */ 246,
/* 242 */ 0,
/* 243 */ 50102,
/* 244 */ -241,
/* 245 */ -1,
/* 246 */ 250,
/* 247 */ 0,
/* 248 */ -241,
/* 249 */ -1,
/* 250 */ 255,
/* 251 */ 50100,
/* 252 */ 0,
/* 253 */ -241,
/* 254 */ -1,
/* 255 */ 0,
/* 256 */ 0,
/* 257 */ 50101,
/* 258 */ 0,
/* 259 */ 0,
/* 260 */ 0,
/* 261 */ 0,
/* 262 */ 50098,
/* 263 */ -241,
/* 264 */ -1,
/* 265 */ 275,
/* 266 */ 50100,
/* 267 */ 50104,
/* 268 */ 50103,
/* 269 */ 50097,
/* 270 */ 50102,
/* 271 */ 50103,
/* 272 */ 50100,
/* 273 */ -265,
/* 274 */ -1,
/* 275 */ 0,
/* 276 */ 0,
/* 277 */ 50103,
/* 278 */ -265,
/* 279 */ -1,
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
/* 10 */ 9999,
/* 11 */ 9999,
/* 12 */ 9999,
/* 13 */ 3008,
/* 14 */ 9999,
/* 15 */ 3031,
/* 16 */ 9999,
/* 17 */ 3031,
/* 18 */ 9999,
/* 19 */ 5005,
/* 20 */ 5007,
/* 21 */ 9999,
/* 22 */ 5005,
/* 23 */ 9999,
/* 24 */ 9999,
/* 25 */ 9999,
/* 26 */ 9999,
/* 27 */ 9999,
/* 28 */ 9999,
/* 29 */ 5012,
/* 30 */ 9999,
/* 31 */ 9999,
/* 32 */ 9999,
/* 33 */ 9999,
/* 34 */ 9999,
/* 35 */ 9999,
/* 36 */ 9999,
/* 37 */ 9999,
/* 38 */ 5031,
/* 39 */ 9999,
/* 40 */ 9999,
/* 41 */ 9999,
/* 42 */ 9999,
/* 43 */ 9999,
/* 44 */ 9999,
/* 45 */ 9999,
/* 46 */ 9999,
/* 47 */ 5058,
/* 48 */ 9999,
/* 49 */ 5085,
/* 50 */ 9999,
/* 51 */ 9999,
/* 52 */ 9999,
/* 53 */ 5085,
/* 54 */ 9999,
/* 55 */ 9999,
/* 56 */ 9999,
/* 57 */ 9999,
/* 58 */ 9999,
/* 59 */ 9999,
/* 60 */ 5098,
/* 61 */ 9999,
/* 62 */ 5117,
/* 63 */ 5119,
/* 64 */ 5121,
/* 65 */ 9999,
/* 66 */ 9999,
/* 67 */ 5131,
/* 68 */ 5133,
/* 69 */ 9999,
/* 70 */ 5117,
/* 71 */ 9999,
/* 72 */ 5138,
/* 73 */ 5140,
/* 74 */ 9999,
/* 75 */ 9999,
/* 76 */ 9999,
/* 77 */ 5154,
/* 78 */ 5156,
/* 79 */ 9999,
/* 80 */ 5138,
/* 81 */ 9999,
/* 82 */ 5161,
/* 83 */ 5163,
/* 84 */ 9999,
/* 85 */ 5169,
/* 86 */ 9999,
/* 87 */ 5161,
/* 88 */ 9999,
/* 89 */ 9999,
/* 90 */ 7009,
/* 91 */ 9999,
/* 92 */ 7015,
/* 93 */ 7017,
/* 94 */ 7019,
/* 95 */ 9999,
/* 96 */ 7005,
/* 97 */ 9999,
/* 98 */ 9999,
/* 99 */ 7028,
/* 100 */ 9999,
/* 101 */ 7034,
/* 102 */ 7036,
/* 103 */ 9999,
/* 104 */ 7024,
/* 105 */ 9999,
/* 106 */ 7041,
/* 107 */ 7043,
/* 108 */ 7045,
/* 109 */ 9999,
/* 110 */ 7041,
/* 111 */ 9999,
/* 112 */ 9999,
/* 113 */ 9999,
/* 114 */ 9999,
/* 115 */ 7062,
/* 116 */ 9999,
/* 117 */ 7068,
/* 118 */ 9999,
/* 119 */ 7050,
/* 120 */ 9999,
/* 121 */ 9999,
/* 122 */ 9999,
/* 123 */ 9999,
/* 124 */ 9017,
/* 125 */ 9999,
/* 126 */ 9005,
/* 127 */ 9999,
/* 128 */ 9022,
/* 129 */ 9999,
/* 130 */ 9999,
/* 131 */ 9999,
/* 132 */ 9999,
/* 133 */ 9999,
/* 134 */ 9022,
/* 135 */ 9999,
/* 136 */ 9043,
/* 137 */ 9999,
/* 138 */ 9999,
/* 139 */ 9053,
/* 140 */ 9999,
/* 141 */ 9043,
/* 142 */ 9999,
/* 143 */ 9999,
/* 144 */ 9999,
/* 145 */ 9999,
/* 146 */ 9070,
/* 147 */ 9999,
/* 148 */ 9058,
/* 149 */ 9999,
/* 150 */ 9999,
/* 151 */ 9999,
/* 152 */ 9075,
/* 153 */ 9999,
/* 154 */ 9999,
/* 155 */ 9999,
/* 156 */ 9999,
/* 157 */ 9999,
/* 158 */ 9999,
/* 159 */ 11005,
/* 160 */ 9999,
/* 161 */ 11024,
/* 162 */ 11026,
/* 163 */ 11028,
/* 164 */ 9999,
/* 165 */ 11024,
/* 166 */ 9999,
/* 167 */ 11033,
/* 168 */ 11035,
/* 169 */ 9999,
/* 170 */ 11041,
/* 171 */ 11043,
/* 172 */ 9999,
/* 173 */ 11033,
/* 174 */ 9999,
/* 175 */ 9999,
/* 176 */ 9999,
/* 177 */ 9999,
/* 178 */ 9999,
/* 179 */ 9999,
/* 180 */ 13005,
/* 181 */ 9999,
/* 182 */ 13024,
/* 183 */ 13026,
/* 184 */ 13028,
/* 185 */ 9999,
/* 186 */ 9999,
/* 187 */ 13038,
/* 188 */ 13040,
/* 189 */ 9999,
/* 190 */ 13024,
/* 191 */ 9999,
/* 192 */ 13045,
/* 193 */ 9999,
/* 194 */ 13045,
/* 195 */ 9999,
/* 196 */ 9999,
/* 197 */ 13054,
/* 198 */ 13056,
/* 199 */ 9999,
/* 200 */ 9999,
/* 201 */ 13050,
/* 202 */ 9999,
/* 203 */ 9999,
/* 204 */ 15009,
/* 205 */ 9999,
/* 206 */ 9999,
/* 207 */ 9999,
/* 208 */ 15005,
/* 209 */ 9999,
/* 210 */ 9999,
/* 211 */ 9999,
/* 212 */ 9999,
/* 213 */ 15034,
/* 214 */ 15036,
/* 215 */ 15038,
/* 216 */ 9999,
/* 217 */ 15022,
/* 218 */ 9999,
/* 219 */ 9999,
/* 220 */ 9999,
/* 221 */ 15051,
/* 222 */ 9999,
/* 223 */ 9999,
/* 224 */ 15043,
/* 225 */ 9999,
/* 226 */ 9999,
/* 227 */ 9999,
/* 228 */ 9999,
/* 229 */ 15072,
/* 230 */ 9999,
/* 231 */ 9999,
/* 232 */ 15060,
/* 233 */ 9999,
/* 234 */ 9999,
/* 235 */ 9999,
/* 236 */ 9999,
/* 237 */ 9999,
/* 238 */ 9999,
/* 239 */ 9999,
/* 240 */ 15081,
/* 241 */ 9999,
/* 242 */ 17005,
/* 243 */ 9999,
/* 244 */ 9999,
/* 245 */ 17005,
/* 246 */ 9999,
/* 247 */ 17014,
/* 248 */ 9999,
/* 249 */ 17014,
/* 250 */ 9999,
/* 251 */ 9999,
/* 252 */ 17023,
/* 253 */ 9999,
/* 254 */ 17019,
/* 255 */ 9999,
/* 256 */ 17028,
/* 257 */ 9999,
/* 258 */ 17034,
/* 259 */ 17036,
/* 260 */ 17038,
/* 261 */ 17040,
/* 262 */ 9999,
/* 263 */ 9999,
/* 264 */ 17028,
/* 265 */ 9999,
/* 266 */ 9999,
/* 267 */ 9999,
/* 268 */ 9999,
/* 269 */ 9999,
/* 270 */ 9999,
/* 271 */ 9999,
/* 272 */ 9999,
/* 273 */ 9999,
/* 274 */ 19005,
/* 275 */ 9999,
/* 276 */ 19036,
/* 277 */ 9999,
/* 278 */ 9999,
/* 279 */ 19036,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[281];
*/
int TABLE[40][256];
init_dirsets() {
TABLE[39][97] = 1;
TABLE[39][100] = 1;
TABLE[39][99] = 1;
TABLE[39][98] = 1;
TABLE[39][104] = 1;
TABLE[39][101] = 1;
TABLE[39][102] = 1;
TABLE[1][97] = 1;
TABLE[2][97] = 1;
TABLE[2][99] = 1;
TABLE[2][100] = 1;
TABLE[2][102] = 1;
TABLE[2][101] = 1;
TABLE[2][104] = 1;
TABLE[2][98] = 1;
TABLE[3][100] = 1;
TABLE[3][101] = 1;
TABLE[3][102] = 1;
TABLE[3][97] = 1;
TABLE[3][99] = 1;
TABLE[3][104] = 1;
TABLE[3][98] = 1;
TABLE[4][97] = 1;
TABLE[5][99] = 1;
TABLE[6][100] = 1;
TABLE[7][97] = 1;
TABLE[7][98] = 1;
TABLE[7][102] = 1;
TABLE[7][104] = 1;
TABLE[8][100] = 1;
TABLE[9][97] = 1;
TABLE[9][99] = 1;
TABLE[9][100] = 1;
TABLE[9][102] = 1;
TABLE[9][101] = 1;
TABLE[9][104] = 1;
TABLE[9][98] = 1;
TABLE[10][100] = 1;
TABLE[10][101] = 1;
TABLE[10][102] = 1;
TABLE[10][97] = 1;
TABLE[10][99] = 1;
TABLE[10][104] = 1;
TABLE[10][98] = 1;
TABLE[11][97] = 1;
TABLE[11][99] = 1;
TABLE[11][100] = 1;
TABLE[11][102] = 1;
TABLE[11][101] = 1;
TABLE[11][104] = 1;
TABLE[11][98] = 1;
TABLE[12][101] = 1;
TABLE[13][98] = 1;
TABLE[14][101] = 1;
TABLE[14][98] = 1;
TABLE[15][98] = 1;
TABLE[16][99] = 1;
TABLE[17][100] = 1;
TABLE[17][101] = 1;
TABLE[17][102] = 1;
TABLE[17][97] = 1;
TABLE[17][99] = 1;
TABLE[17][104] = 1;
TABLE[17][98] = 1;
TABLE[18][97] = 1;
TABLE[18][99] = 1;
TABLE[18][100] = 1;
TABLE[18][102] = 1;
TABLE[18][101] = 1;
TABLE[18][104] = 1;
TABLE[18][98] = 1;
TABLE[19][102] = 1;
TABLE[20][101] = 1;
TABLE[21][101] = 1;
TABLE[22][98] = 1;
TABLE[22][101] = 1;
TABLE[22][102] = 1;
TABLE[22][97] = 1;
TABLE[22][100] = 1;
TABLE[22][99] = 1;
TABLE[22][104] = 1;
TABLE[23][101] = 1;
TABLE[23][98] = 1;
TABLE[24][100] = 1;
TABLE[25][98] = 1;
TABLE[25][101] = 1;
TABLE[25][102] = 1;
TABLE[25][97] = 1;
TABLE[25][100] = 1;
TABLE[25][99] = 1;
TABLE[25][104] = 1;
TABLE[26][98] = 1;
TABLE[26][101] = 1;
TABLE[26][102] = 1;
TABLE[26][97] = 1;
TABLE[26][100] = 1;
TABLE[26][99] = 1;
TABLE[26][104] = 1;
TABLE[27][104] = 1;
TABLE[28][97] = 1;
TABLE[29][98] = 1;
TABLE[30][102] = 1;
TABLE[31][102] = 1;
TABLE[32][104] = 1;
TABLE[33][101] = 1;
TABLE[33][98] = 1;
TABLE[33][99] = 1;
TABLE[33][100] = 1;
TABLE[33][97] = 1;
TABLE[33][102] = 1;
TABLE[33][104] = 1;
TABLE[34][99] = 1;
TABLE[34][100] = 1;
TABLE[34][97] = 1;
TABLE[34][102] = 1;
TABLE[34][101] = 1;
TABLE[34][98] = 1;
TABLE[34][104] = 1;
TABLE[35][100] = 1;
TABLE[36][98] = 1;
TABLE[36][101] = 1;
TABLE[36][102] = 1;
TABLE[36][97] = 1;
TABLE[36][100] = 1;
TABLE[36][99] = 1;
TABLE[36][104] = 1;
TABLE[37][100] = 1;
TABLE[38][99] = 1;
TABLE[38][100] = 1;
TABLE[38][97] = 1;
TABLE[38][102] = 1;
TABLE[38][101] = 1;
TABLE[38][98] = 1;
TABLE[38][104] = 1;
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
      case 18: return 0; break;
      case 88: return 0; break;
      case 120: return 0; break;
      case 153: return 0; break;
      case 174: return 0; break;
      case 202: return 0; break;
      case 241: return 0; break;
      case 265: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 18: return "A"; break;
         case 88: return "B"; break;
         case 120: return "C"; break;
         case 153: return "D"; break;
         case 174: return "E"; break;
         case 202: return "F"; break;
         case 241: return "G"; break;
         case 265: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}