#include "yygrammar.h"

YYSTART ()
{
   switch(yyselect()) {
   case 36: {
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
      } break;
   case 2: {
      H();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 3: {
      B();
      E();
      F();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 4: {
      A();
      B();
      F();
      get_lexval();
      } break;
   case 5: {
      G();
      F();
      get_lexval();
      C();
      get_lexval();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 6: {
      B();
      get_lexval();
      A();
      get_lexval();
      } break;
   case 7: {
      get_lexval();
      E();
      A();
      F();
      get_lexval();
      } break;
   case 8: {
      H();
      F();
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
   case 9: {
      get_lexval();
      D();
      E();
      F();
      get_lexval();
      A();
      } break;
   case 10: {
      get_lexval();
      D();
      G();
      get_lexval();
      E();
      } break;
   case 11: {
      D();
      get_lexval();
      B();
      get_lexval();
      get_lexval();
      H();
      get_lexval();
      } break;
   case 12: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 13: {
      get_lexval();
      get_lexval();
      B();
      get_lexval();
      D();
      get_lexval();
      get_lexval();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 14: {
      get_lexval();
      } break;
   case 15: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 16: {
      get_lexval();
      H();
      get_lexval();
      F();
      get_lexval();
      A();
      D();
      } break;
   case 17: {
      A();
      get_lexval();
      get_lexval();
      A();
      } break;
   case 18: {
      F();
      get_lexval();
      get_lexval();
      G();
      E();
      get_lexval();
      F();
      } break;
   case 19: {
      D();
      get_lexval();
      get_lexval();
      } break;
   }
}

E ()
{
   switch(yyselect()) {
   case 20: {
      D();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 21: {
      B();
      } break;
   case 22: {
      get_lexval();
      get_lexval();
      } break;
   case 23: {
      F();
      G();
      get_lexval();
      F();
      get_lexval();
      get_lexval();
      C();
      } break;
   case 24: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 25: {
      get_lexval();
      H();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 26: {
      C();
      } break;
   case 27: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 28: {
      H();
      get_lexval();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 29: {
      get_lexval();
      get_lexval();
      } break;
   case 30: {
      G();
      G();
      E();
      get_lexval();
      } break;
   case 31: {
      B();
      C();
      F();
      G();
      G();
      } break;
   case 32: {
      H();
      get_lexval();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 33: {
      get_lexval();
      } break;
   case 34: {
      get_lexval();
      get_lexval();
      C();
      } break;
   case 35: {
      get_lexval();
      E();
      A();
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
int c_length = 259;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 36,
/* 6 */ 13,
/* 7 */ 50104,
/* 8 */ 50101,
/* 9 */ 50101,
/* 10 */ 50102,
/* 11 */ -6,
/* 12 */ 1,
/* 13 */ 0,
/* 14 */ 242,
/* 15 */ 50101,
/* 16 */ 50099,
/* 17 */ 50098,
/* 18 */ -6,
/* 19 */ 2,
/* 20 */ 29,
/* 21 */ 44,
/* 22 */ 158,
/* 23 */ 199,
/* 24 */ 50104,
/* 25 */ 50102,
/* 26 */ 50097,
/* 27 */ -20,
/* 28 */ 3,
/* 29 */ 36,
/* 30 */ 20,
/* 31 */ 44,
/* 32 */ 199,
/* 33 */ 50102,
/* 34 */ -20,
/* 35 */ 4,
/* 36 */ 0,
/* 37 */ 217,
/* 38 */ 199,
/* 39 */ 50099,
/* 40 */ 69,
/* 41 */ 50098,
/* 42 */ -20,
/* 43 */ 5,
/* 44 */ 51,
/* 45 */ 44,
/* 46 */ 50098,
/* 47 */ 20,
/* 48 */ 50102,
/* 49 */ -44,
/* 50 */ 6,
/* 51 */ 59,
/* 52 */ 50101,
/* 53 */ 158,
/* 54 */ 20,
/* 55 */ 199,
/* 56 */ 50103,
/* 57 */ -44,
/* 58 */ 7,
/* 59 */ 0,
/* 60 */ 242,
/* 61 */ 199,
/* 62 */ 50103,
/* 63 */ 50097,
/* 64 */ 50100,
/* 65 */ 158,
/* 66 */ 50097,
/* 67 */ -44,
/* 68 */ 8,
/* 69 */ 78,
/* 70 */ 50097,
/* 71 */ 114,
/* 72 */ 158,
/* 73 */ 199,
/* 74 */ 50103,
/* 75 */ 20,
/* 76 */ -69,
/* 77 */ 9,
/* 78 */ 86,
/* 79 */ 50097,
/* 80 */ 114,
/* 81 */ 217,
/* 82 */ 50099,
/* 83 */ 158,
/* 84 */ -69,
/* 85 */ 10,
/* 86 */ 96,
/* 87 */ 114,
/* 88 */ 50103,
/* 89 */ 44,
/* 90 */ 50097,
/* 91 */ 50100,
/* 92 */ 242,
/* 93 */ 50103,
/* 94 */ -69,
/* 95 */ 11,
/* 96 */ 104,
/* 97 */ 50099,
/* 98 */ 50100,
/* 99 */ 50099,
/* 100 */ 50098,
/* 101 */ 50104,
/* 102 */ -69,
/* 103 */ 12,
/* 104 */ 0,
/* 105 */ 50104,
/* 106 */ 50101,
/* 107 */ 44,
/* 108 */ 50098,
/* 109 */ 114,
/* 110 */ 50104,
/* 111 */ 50097,
/* 112 */ -69,
/* 113 */ 13,
/* 114 */ 118,
/* 115 */ 50101,
/* 116 */ -114,
/* 117 */ 14,
/* 118 */ 125,
/* 119 */ 50101,
/* 120 */ 50104,
/* 121 */ 50097,
/* 122 */ 50099,
/* 123 */ -114,
/* 124 */ 15,
/* 125 */ 135,
/* 126 */ 50098,
/* 127 */ 242,
/* 128 */ 50103,
/* 129 */ 199,
/* 130 */ 50102,
/* 131 */ 20,
/* 132 */ 114,
/* 133 */ -114,
/* 134 */ 16,
/* 135 */ 142,
/* 136 */ 20,
/* 137 */ 50099,
/* 138 */ 50102,
/* 139 */ 20,
/* 140 */ -114,
/* 141 */ 17,
/* 142 */ 152,
/* 143 */ 199,
/* 144 */ 50100,
/* 145 */ 50099,
/* 146 */ 217,
/* 147 */ 158,
/* 148 */ 50101,
/* 149 */ 199,
/* 150 */ -114,
/* 151 */ 18,
/* 152 */ 0,
/* 153 */ 114,
/* 154 */ 50100,
/* 155 */ 50100,
/* 156 */ -114,
/* 157 */ 19,
/* 158 */ 165,
/* 159 */ 114,
/* 160 */ 50098,
/* 161 */ 50098,
/* 162 */ 50100,
/* 163 */ -158,
/* 164 */ 20,
/* 165 */ 169,
/* 166 */ 44,
/* 167 */ -158,
/* 168 */ 21,
/* 169 */ 174,
/* 170 */ 50100,
/* 171 */ 50104,
/* 172 */ -158,
/* 173 */ 22,
/* 174 */ 184,
/* 175 */ 199,
/* 176 */ 217,
/* 177 */ 50100,
/* 178 */ 199,
/* 179 */ 50100,
/* 180 */ 50100,
/* 181 */ 69,
/* 182 */ -158,
/* 183 */ 23,
/* 184 */ 194,
/* 185 */ 50097,
/* 186 */ 50099,
/* 187 */ 50098,
/* 188 */ 50099,
/* 189 */ 50101,
/* 190 */ 50099,
/* 191 */ 50097,
/* 192 */ -158,
/* 193 */ 24,
/* 194 */ 0,
/* 195 */ 50100,
/* 196 */ 242,
/* 197 */ -158,
/* 198 */ 25,
/* 199 */ 203,
/* 200 */ 69,
/* 201 */ -199,
/* 202 */ 26,
/* 203 */ 212,
/* 204 */ 50098,
/* 205 */ 50097,
/* 206 */ 50104,
/* 207 */ 50102,
/* 208 */ 50103,
/* 209 */ 50101,
/* 210 */ -199,
/* 211 */ 27,
/* 212 */ 0,
/* 213 */ 242,
/* 214 */ 50104,
/* 215 */ -199,
/* 216 */ 28,
/* 217 */ 222,
/* 218 */ 50104,
/* 219 */ 50099,
/* 220 */ -217,
/* 221 */ 29,
/* 222 */ 229,
/* 223 */ 217,
/* 224 */ 217,
/* 225 */ 158,
/* 226 */ 50104,
/* 227 */ -217,
/* 228 */ 30,
/* 229 */ 237,
/* 230 */ 44,
/* 231 */ 69,
/* 232 */ 199,
/* 233 */ 217,
/* 234 */ 217,
/* 235 */ -217,
/* 236 */ 31,
/* 237 */ 0,
/* 238 */ 242,
/* 239 */ 50103,
/* 240 */ -217,
/* 241 */ 32,
/* 242 */ 246,
/* 243 */ 50104,
/* 244 */ -242,
/* 245 */ 33,
/* 246 */ 252,
/* 247 */ 50103,
/* 248 */ 50101,
/* 249 */ 69,
/* 250 */ -242,
/* 251 */ 34,
/* 252 */ 0,
/* 253 */ 50097,
/* 254 */ 158,
/* 255 */ 20,
/* 256 */ 20,
/* 257 */ 50098,
/* 258 */ -242,
/* 259 */ 35,
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
/* 6 */ 13,
/* 7 */ 50104,
/* 8 */ 50101,
/* 9 */ 50101,
/* 10 */ 50102,
/* 11 */ -6,
/* 12 */ -1,
/* 13 */ 0,
/* 14 */ 0,
/* 15 */ 50101,
/* 16 */ 50099,
/* 17 */ 50098,
/* 18 */ -6,
/* 19 */ -1,
/* 20 */ 29,
/* 21 */ 0,
/* 22 */ 0,
/* 23 */ 0,
/* 24 */ 50104,
/* 25 */ 50102,
/* 26 */ 50097,
/* 27 */ -20,
/* 28 */ -1,
/* 29 */ 36,
/* 30 */ 0,
/* 31 */ 0,
/* 32 */ 0,
/* 33 */ 50102,
/* 34 */ -20,
/* 35 */ -1,
/* 36 */ 0,
/* 37 */ 0,
/* 38 */ 0,
/* 39 */ 50099,
/* 40 */ 0,
/* 41 */ 50098,
/* 42 */ -20,
/* 43 */ -1,
/* 44 */ 51,
/* 45 */ 0,
/* 46 */ 50098,
/* 47 */ 0,
/* 48 */ 50102,
/* 49 */ -44,
/* 50 */ -1,
/* 51 */ 59,
/* 52 */ 50101,
/* 53 */ 0,
/* 54 */ 0,
/* 55 */ 0,
/* 56 */ 50103,
/* 57 */ -44,
/* 58 */ -1,
/* 59 */ 0,
/* 60 */ 0,
/* 61 */ 0,
/* 62 */ 50103,
/* 63 */ 50097,
/* 64 */ 50100,
/* 65 */ 0,
/* 66 */ 50097,
/* 67 */ -44,
/* 68 */ -1,
/* 69 */ 78,
/* 70 */ 50097,
/* 71 */ 0,
/* 72 */ 0,
/* 73 */ 0,
/* 74 */ 50103,
/* 75 */ 0,
/* 76 */ -69,
/* 77 */ -1,
/* 78 */ 86,
/* 79 */ 50097,
/* 80 */ 0,
/* 81 */ 0,
/* 82 */ 50099,
/* 83 */ 0,
/* 84 */ -69,
/* 85 */ -1,
/* 86 */ 96,
/* 87 */ 0,
/* 88 */ 50103,
/* 89 */ 0,
/* 90 */ 50097,
/* 91 */ 50100,
/* 92 */ 0,
/* 93 */ 50103,
/* 94 */ -69,
/* 95 */ -1,
/* 96 */ 104,
/* 97 */ 50099,
/* 98 */ 50100,
/* 99 */ 50099,
/* 100 */ 50098,
/* 101 */ 50104,
/* 102 */ -69,
/* 103 */ -1,
/* 104 */ 0,
/* 105 */ 50104,
/* 106 */ 50101,
/* 107 */ 0,
/* 108 */ 50098,
/* 109 */ 0,
/* 110 */ 50104,
/* 111 */ 50097,
/* 112 */ -69,
/* 113 */ -1,
/* 114 */ 118,
/* 115 */ 50101,
/* 116 */ -114,
/* 117 */ -1,
/* 118 */ 125,
/* 119 */ 50101,
/* 120 */ 50104,
/* 121 */ 50097,
/* 122 */ 50099,
/* 123 */ -114,
/* 124 */ -1,
/* 125 */ 135,
/* 126 */ 50098,
/* 127 */ 0,
/* 128 */ 50103,
/* 129 */ 0,
/* 130 */ 50102,
/* 131 */ 0,
/* 132 */ 0,
/* 133 */ -114,
/* 134 */ -1,
/* 135 */ 142,
/* 136 */ 0,
/* 137 */ 50099,
/* 138 */ 50102,
/* 139 */ 0,
/* 140 */ -114,
/* 141 */ -1,
/* 142 */ 152,
/* 143 */ 0,
/* 144 */ 50100,
/* 145 */ 50099,
/* 146 */ 0,
/* 147 */ 0,
/* 148 */ 50101,
/* 149 */ 0,
/* 150 */ -114,
/* 151 */ -1,
/* 152 */ 0,
/* 153 */ 0,
/* 154 */ 50100,
/* 155 */ 50100,
/* 156 */ -114,
/* 157 */ -1,
/* 158 */ 165,
/* 159 */ 0,
/* 160 */ 50098,
/* 161 */ 50098,
/* 162 */ 50100,
/* 163 */ -158,
/* 164 */ -1,
/* 165 */ 169,
/* 166 */ 0,
/* 167 */ -158,
/* 168 */ -1,
/* 169 */ 174,
/* 170 */ 50100,
/* 171 */ 50104,
/* 172 */ -158,
/* 173 */ -1,
/* 174 */ 184,
/* 175 */ 0,
/* 176 */ 0,
/* 177 */ 50100,
/* 178 */ 0,
/* 179 */ 50100,
/* 180 */ 50100,
/* 181 */ 0,
/* 182 */ -158,
/* 183 */ -1,
/* 184 */ 194,
/* 185 */ 50097,
/* 186 */ 50099,
/* 187 */ 50098,
/* 188 */ 50099,
/* 189 */ 50101,
/* 190 */ 50099,
/* 191 */ 50097,
/* 192 */ -158,
/* 193 */ -1,
/* 194 */ 0,
/* 195 */ 50100,
/* 196 */ 0,
/* 197 */ -158,
/* 198 */ -1,
/* 199 */ 203,
/* 200 */ 0,
/* 201 */ -199,
/* 202 */ -1,
/* 203 */ 212,
/* 204 */ 50098,
/* 205 */ 50097,
/* 206 */ 50104,
/* 207 */ 50102,
/* 208 */ 50103,
/* 209 */ 50101,
/* 210 */ -199,
/* 211 */ -1,
/* 212 */ 0,
/* 213 */ 0,
/* 214 */ 50104,
/* 215 */ -199,
/* 216 */ -1,
/* 217 */ 222,
/* 218 */ 50104,
/* 219 */ 50099,
/* 220 */ -217,
/* 221 */ -1,
/* 222 */ 229,
/* 223 */ 0,
/* 224 */ 0,
/* 225 */ 0,
/* 226 */ 50104,
/* 227 */ -217,
/* 228 */ -1,
/* 229 */ 237,
/* 230 */ 0,
/* 231 */ 0,
/* 232 */ 0,
/* 233 */ 0,
/* 234 */ 0,
/* 235 */ -217,
/* 236 */ -1,
/* 237 */ 0,
/* 238 */ 0,
/* 239 */ 50103,
/* 240 */ -217,
/* 241 */ -1,
/* 242 */ 246,
/* 243 */ 50104,
/* 244 */ -242,
/* 245 */ -1,
/* 246 */ 252,
/* 247 */ 50103,
/* 248 */ 50101,
/* 249 */ 0,
/* 250 */ -242,
/* 251 */ -1,
/* 252 */ 0,
/* 253 */ 50097,
/* 254 */ 0,
/* 255 */ 0,
/* 256 */ 0,
/* 257 */ 50098,
/* 258 */ -242,
/* 259 */ -1,
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
/* 12 */ 3008,
/* 13 */ 9999,
/* 14 */ 3027,
/* 15 */ 9999,
/* 16 */ 9999,
/* 17 */ 9999,
/* 18 */ 9999,
/* 19 */ 3027,
/* 20 */ 9999,
/* 21 */ 5005,
/* 22 */ 5007,
/* 23 */ 5009,
/* 24 */ 9999,
/* 25 */ 9999,
/* 26 */ 9999,
/* 27 */ 9999,
/* 28 */ 5005,
/* 29 */ 9999,
/* 30 */ 5026,
/* 31 */ 5028,
/* 32 */ 5030,
/* 33 */ 9999,
/* 34 */ 9999,
/* 35 */ 5026,
/* 36 */ 9999,
/* 37 */ 5039,
/* 38 */ 5041,
/* 39 */ 9999,
/* 40 */ 5047,
/* 41 */ 9999,
/* 42 */ 9999,
/* 43 */ 5039,
/* 44 */ 9999,
/* 45 */ 7005,
/* 46 */ 9999,
/* 47 */ 7011,
/* 48 */ 9999,
/* 49 */ 9999,
/* 50 */ 7005,
/* 51 */ 9999,
/* 52 */ 9999,
/* 53 */ 7024,
/* 54 */ 7026,
/* 55 */ 7028,
/* 56 */ 9999,
/* 57 */ 9999,
/* 58 */ 7020,
/* 59 */ 9999,
/* 60 */ 7037,
/* 61 */ 7039,
/* 62 */ 9999,
/* 63 */ 9999,
/* 64 */ 9999,
/* 65 */ 7053,
/* 66 */ 9999,
/* 67 */ 9999,
/* 68 */ 7037,
/* 69 */ 9999,
/* 70 */ 9999,
/* 71 */ 9009,
/* 72 */ 9011,
/* 73 */ 9013,
/* 74 */ 9999,
/* 75 */ 9019,
/* 76 */ 9999,
/* 77 */ 9005,
/* 78 */ 9999,
/* 79 */ 9999,
/* 80 */ 9028,
/* 81 */ 9030,
/* 82 */ 9999,
/* 83 */ 9036,
/* 84 */ 9999,
/* 85 */ 9024,
/* 86 */ 9999,
/* 87 */ 9041,
/* 88 */ 9999,
/* 89 */ 9047,
/* 90 */ 9999,
/* 91 */ 9999,
/* 92 */ 9057,
/* 93 */ 9999,
/* 94 */ 9999,
/* 95 */ 9041,
/* 96 */ 9999,
/* 97 */ 9999,
/* 98 */ 9999,
/* 99 */ 9999,
/* 100 */ 9999,
/* 101 */ 9999,
/* 102 */ 9999,
/* 103 */ 9066,
/* 104 */ 9999,
/* 105 */ 9999,
/* 106 */ 9999,
/* 107 */ 9097,
/* 108 */ 9999,
/* 109 */ 9103,
/* 110 */ 9999,
/* 111 */ 9999,
/* 112 */ 9999,
/* 113 */ 9089,
/* 114 */ 9999,
/* 115 */ 9999,
/* 116 */ 9999,
/* 117 */ 11005,
/* 118 */ 9999,
/* 119 */ 9999,
/* 120 */ 9999,
/* 121 */ 9999,
/* 122 */ 9999,
/* 123 */ 9999,
/* 124 */ 11012,
/* 125 */ 9999,
/* 126 */ 9999,
/* 127 */ 11035,
/* 128 */ 9999,
/* 129 */ 11041,
/* 130 */ 9999,
/* 131 */ 11047,
/* 132 */ 11049,
/* 133 */ 9999,
/* 134 */ 11031,
/* 135 */ 9999,
/* 136 */ 11054,
/* 137 */ 9999,
/* 138 */ 9999,
/* 139 */ 11064,
/* 140 */ 9999,
/* 141 */ 11054,
/* 142 */ 9999,
/* 143 */ 11069,
/* 144 */ 9999,
/* 145 */ 9999,
/* 146 */ 11079,
/* 147 */ 11081,
/* 148 */ 9999,
/* 149 */ 11087,
/* 150 */ 9999,
/* 151 */ 11069,
/* 152 */ 9999,
/* 153 */ 11092,
/* 154 */ 9999,
/* 155 */ 9999,
/* 156 */ 9999,
/* 157 */ 11092,
/* 158 */ 9999,
/* 159 */ 13005,
/* 160 */ 9999,
/* 161 */ 9999,
/* 162 */ 9999,
/* 163 */ 9999,
/* 164 */ 13005,
/* 165 */ 9999,
/* 166 */ 13022,
/* 167 */ 9999,
/* 168 */ 13022,
/* 169 */ 9999,
/* 170 */ 9999,
/* 171 */ 9999,
/* 172 */ 9999,
/* 173 */ 13027,
/* 174 */ 9999,
/* 175 */ 13038,
/* 176 */ 13040,
/* 177 */ 9999,
/* 178 */ 13046,
/* 179 */ 9999,
/* 180 */ 9999,
/* 181 */ 13056,
/* 182 */ 9999,
/* 183 */ 13038,
/* 184 */ 9999,
/* 185 */ 9999,
/* 186 */ 9999,
/* 187 */ 9999,
/* 188 */ 9999,
/* 189 */ 9999,
/* 190 */ 9999,
/* 191 */ 9999,
/* 192 */ 9999,
/* 193 */ 13061,
/* 194 */ 9999,
/* 195 */ 9999,
/* 196 */ 13096,
/* 197 */ 9999,
/* 198 */ 13092,
/* 199 */ 9999,
/* 200 */ 15005,
/* 201 */ 9999,
/* 202 */ 15005,
/* 203 */ 9999,
/* 204 */ 9999,
/* 205 */ 9999,
/* 206 */ 9999,
/* 207 */ 9999,
/* 208 */ 9999,
/* 209 */ 9999,
/* 210 */ 9999,
/* 211 */ 15010,
/* 212 */ 9999,
/* 213 */ 15037,
/* 214 */ 9999,
/* 215 */ 9999,
/* 216 */ 15037,
/* 217 */ 9999,
/* 218 */ 9999,
/* 219 */ 9999,
/* 220 */ 9999,
/* 221 */ 17005,
/* 222 */ 9999,
/* 223 */ 17016,
/* 224 */ 17018,
/* 225 */ 17020,
/* 226 */ 9999,
/* 227 */ 9999,
/* 228 */ 17016,
/* 229 */ 9999,
/* 230 */ 17029,
/* 231 */ 17031,
/* 232 */ 17033,
/* 233 */ 17035,
/* 234 */ 17037,
/* 235 */ 9999,
/* 236 */ 17029,
/* 237 */ 9999,
/* 238 */ 17042,
/* 239 */ 9999,
/* 240 */ 9999,
/* 241 */ 17042,
/* 242 */ 9999,
/* 243 */ 9999,
/* 244 */ 9999,
/* 245 */ 19005,
/* 246 */ 9999,
/* 247 */ 9999,
/* 248 */ 9999,
/* 249 */ 19020,
/* 250 */ 9999,
/* 251 */ 19012,
/* 252 */ 9999,
/* 253 */ 9999,
/* 254 */ 19029,
/* 255 */ 19031,
/* 256 */ 19033,
/* 257 */ 9999,
/* 258 */ 9999,
/* 259 */ 19025,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[261];
*/
int TABLE[37][256];
init_dirsets() {
TABLE[36][104] = 1;
TABLE[36][97] = 1;
TABLE[36][103] = 1;
TABLE[1][104] = 1;
TABLE[2][104] = 1;
TABLE[2][103] = 1;
TABLE[2][97] = 1;
TABLE[3][101] = 1;
TABLE[3][97] = 1;
TABLE[3][103] = 1;
TABLE[3][104] = 1;
TABLE[4][101] = 1;
TABLE[4][104] = 1;
TABLE[4][103] = 1;
TABLE[4][97] = 1;
TABLE[5][104] = 1;
TABLE[5][101] = 1;
TABLE[5][103] = 1;
TABLE[5][97] = 1;
TABLE[6][101] = 1;
TABLE[6][97] = 1;
TABLE[6][103] = 1;
TABLE[6][104] = 1;
TABLE[7][101] = 1;
TABLE[8][104] = 1;
TABLE[8][103] = 1;
TABLE[8][97] = 1;
TABLE[9][97] = 1;
TABLE[10][97] = 1;
TABLE[11][101] = 1;
TABLE[11][98] = 1;
TABLE[11][104] = 1;
TABLE[11][97] = 1;
TABLE[11][99] = 1;
TABLE[11][103] = 1;
TABLE[12][99] = 1;
TABLE[13][104] = 1;
TABLE[14][101] = 1;
TABLE[15][101] = 1;
TABLE[16][98] = 1;
TABLE[17][101] = 1;
TABLE[17][104] = 1;
TABLE[17][103] = 1;
TABLE[17][97] = 1;
TABLE[18][104] = 1;
TABLE[18][99] = 1;
TABLE[18][97] = 1;
TABLE[18][98] = 1;
TABLE[18][101] = 1;
TABLE[18][103] = 1;
TABLE[19][101] = 1;
TABLE[19][98] = 1;
TABLE[19][104] = 1;
TABLE[19][97] = 1;
TABLE[19][99] = 1;
TABLE[19][103] = 1;
TABLE[20][101] = 1;
TABLE[20][98] = 1;
TABLE[20][104] = 1;
TABLE[20][97] = 1;
TABLE[20][99] = 1;
TABLE[20][103] = 1;
TABLE[21][101] = 1;
TABLE[21][97] = 1;
TABLE[21][103] = 1;
TABLE[21][104] = 1;
TABLE[22][100] = 1;
TABLE[23][104] = 1;
TABLE[23][99] = 1;
TABLE[23][97] = 1;
TABLE[23][98] = 1;
TABLE[23][101] = 1;
TABLE[23][103] = 1;
TABLE[24][97] = 1;
TABLE[25][100] = 1;
TABLE[26][97] = 1;
TABLE[26][99] = 1;
TABLE[26][104] = 1;
TABLE[26][98] = 1;
TABLE[26][101] = 1;
TABLE[26][103] = 1;
TABLE[27][98] = 1;
TABLE[28][104] = 1;
TABLE[28][103] = 1;
TABLE[28][97] = 1;
TABLE[29][104] = 1;
TABLE[30][104] = 1;
TABLE[30][101] = 1;
TABLE[30][103] = 1;
TABLE[30][97] = 1;
TABLE[31][101] = 1;
TABLE[31][97] = 1;
TABLE[31][103] = 1;
TABLE[31][104] = 1;
TABLE[32][104] = 1;
TABLE[32][103] = 1;
TABLE[32][97] = 1;
TABLE[33][104] = 1;
TABLE[34][103] = 1;
TABLE[35][97] = 1;
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
      case 20: return 0; break;
      case 44: return 0; break;
      case 69: return 0; break;
      case 114: return 0; break;
      case 158: return 0; break;
      case 199: return 0; break;
      case 217: return 0; break;
      case 242: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 20: return "A"; break;
         case 44: return "B"; break;
         case 69: return "C"; break;
         case 114: return "D"; break;
         case 158: return "E"; break;
         case 199: return "F"; break;
         case 217: return "G"; break;
         case 242: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}