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
      B();
      G();
      get_lexval();
      D();
      } break;
   case 2: {
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 3: {
      E();
      get_lexval();
      get_lexval();
      } break;
   }
}

A ()
{
   switch(yyselect()) {
   case 4: {
      get_lexval();
      H();
      get_lexval();
      get_lexval();
      G();
      get_lexval();
      get_lexval();
      } break;
   case 5: {
      get_lexval();
      } break;
   }
}

B ()
{
   switch(yyselect()) {
   case 6: {
      C();
      G();
      get_lexval();
      G();
      B();
      } break;
   case 7: {
      A();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   case 8: {
      get_lexval();
      get_lexval();
      B();
      } break;
   case 9: {
      get_lexval();
      } break;
   case 10: {
      B();
      B();
      get_lexval();
      } break;
   case 11: {
      get_lexval();
      H();
      get_lexval();
      get_lexval();
      get_lexval();
      } break;
   }
}

C ()
{
   switch(yyselect()) {
   case 12: {
      get_lexval();
      } break;
   case 13: {
      get_lexval();
      H();
      get_lexval();
      get_lexval();
      } break;
   case 14: {
      get_lexval();
      get_lexval();
      } break;
   case 15: {
      B();
      A();
      D();
      } break;
   }
}

D ()
{
   switch(yyselect()) {
   case 16: {
      get_lexval();
      get_lexval();
      get_lexval();
      B();
      E();
      get_lexval();
      get_lexval();
      } break;
   case 17: {
      get_lexval();
      C();
      get_lexval();
      H();
      D();
      get_lexval();
      } break;
   }
}

E ()
{
   switch(yyselect()) {
   case 18: {
      get_lexval();
      get_lexval();
      C();
      C();
      get_lexval();
      } break;
   case 19: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      B();
      get_lexval();
      C();
      } break;
   case 20: {
      get_lexval();
      get_lexval();
      A();
      get_lexval();
      get_lexval();
      E();
      get_lexval();
      } break;
   case 21: {
      get_lexval();
      F();
      G();
      B();
      } break;
   }
}

F ()
{
   switch(yyselect()) {
   case 22: {
      E();
      A();
      E();
      } break;
   case 23: {
      D();
      } break;
   }
}

G ()
{
   switch(yyselect()) {
   case 24: {
      get_lexval();
      A();
      get_lexval();
      E();
      H();
      get_lexval();
      } break;
   case 25: {
      get_lexval();
      H();
      get_lexval();
      } break;
   case 26: {
      H();
      D();
      get_lexval();
      D();
      get_lexval();
      } break;
   case 27: {
      get_lexval();
      } break;
   }
}

H ()
{
   switch(yyselect()) {
   case 28: {
      get_lexval();
      get_lexval();
      } break;
   case 29: {
      get_lexval();
      get_lexval();
      get_lexval();
      B();
      } break;
   case 30: {
      get_lexval();
      get_lexval();
      get_lexval();
      get_lexval();
      C();
      get_lexval();
      } break;
   case 31: {
      get_lexval();
      get_lexval();
      } break;
   case 32: {
      C();
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
int c_length = 223;
extern int yygrammar[];
int yygrammar[] = {
0,
/* 1 */ 0,
/* 2 */ 6,
/* 3 */ 50000,
/* 4 */ -1,
/* 5 */ 33,
/* 6 */ 14,
/* 7 */ 50099,
/* 8 */ 40,
/* 9 */ 165,
/* 10 */ 50100,
/* 11 */ 101,
/* 12 */ -6,
/* 13 */ 1,
/* 14 */ 20,
/* 15 */ 50104,
/* 16 */ 50099,
/* 17 */ 50097,
/* 18 */ -6,
/* 19 */ 2,
/* 20 */ 0,
/* 21 */ 120,
/* 22 */ 50100,
/* 23 */ 50102,
/* 24 */ -6,
/* 25 */ 3,
/* 26 */ 36,
/* 27 */ 50099,
/* 28 */ 192,
/* 29 */ 50097,
/* 30 */ 50100,
/* 31 */ 165,
/* 32 */ 50104,
/* 33 */ 50097,
/* 34 */ -26,
/* 35 */ 4,
/* 36 */ 0,
/* 37 */ 50098,
/* 38 */ -26,
/* 39 */ 5,
/* 40 */ 48,
/* 41 */ 79,
/* 42 */ 165,
/* 43 */ 50099,
/* 44 */ 165,
/* 45 */ 40,
/* 46 */ -40,
/* 47 */ 6,
/* 48 */ 55,
/* 49 */ 26,
/* 50 */ 50103,
/* 51 */ 50097,
/* 52 */ 50101,
/* 53 */ -40,
/* 54 */ 7,
/* 55 */ 61,
/* 56 */ 50103,
/* 57 */ 50097,
/* 58 */ 40,
/* 59 */ -40,
/* 60 */ 8,
/* 61 */ 65,
/* 62 */ 50101,
/* 63 */ -40,
/* 64 */ 9,
/* 65 */ 71,
/* 66 */ 40,
/* 67 */ 40,
/* 68 */ 50098,
/* 69 */ -40,
/* 70 */ 10,
/* 71 */ 0,
/* 72 */ 50100,
/* 73 */ 192,
/* 74 */ 50099,
/* 75 */ 50103,
/* 76 */ 50100,
/* 77 */ -40,
/* 78 */ 11,
/* 79 */ 83,
/* 80 */ 50102,
/* 81 */ -79,
/* 82 */ 12,
/* 83 */ 90,
/* 84 */ 50104,
/* 85 */ 192,
/* 86 */ 50104,
/* 87 */ 50098,
/* 88 */ -79,
/* 89 */ 13,
/* 90 */ 95,
/* 91 */ 50099,
/* 92 */ 50104,
/* 93 */ -79,
/* 94 */ 14,
/* 95 */ 0,
/* 96 */ 40,
/* 97 */ 26,
/* 98 */ 101,
/* 99 */ -79,
/* 100 */ 15,
/* 101 */ 111,
/* 102 */ 50100,
/* 103 */ 50100,
/* 104 */ 50101,
/* 105 */ 40,
/* 106 */ 120,
/* 107 */ 50102,
/* 108 */ 50098,
/* 109 */ -101,
/* 110 */ 16,
/* 111 */ 0,
/* 112 */ 50104,
/* 113 */ 79,
/* 114 */ 50102,
/* 115 */ 192,
/* 116 */ 101,
/* 117 */ 50104,
/* 118 */ -101,
/* 119 */ 17,
/* 120 */ 128,
/* 121 */ 50097,
/* 122 */ 50103,
/* 123 */ 79,
/* 124 */ 79,
/* 125 */ 50100,
/* 126 */ -120,
/* 127 */ 18,
/* 128 */ 138,
/* 129 */ 50101,
/* 130 */ 50097,
/* 131 */ 50097,
/* 132 */ 50100,
/* 133 */ 40,
/* 134 */ 50100,
/* 135 */ 79,
/* 136 */ -120,
/* 137 */ 19,
/* 138 */ 148,
/* 139 */ 50104,
/* 140 */ 50102,
/* 141 */ 26,
/* 142 */ 50104,
/* 143 */ 50099,
/* 144 */ 120,
/* 145 */ 50099,
/* 146 */ -120,
/* 147 */ 20,
/* 148 */ 0,
/* 149 */ 50102,
/* 150 */ 155,
/* 151 */ 165,
/* 152 */ 40,
/* 153 */ -120,
/* 154 */ 21,
/* 155 */ 161,
/* 156 */ 120,
/* 157 */ 26,
/* 158 */ 120,
/* 159 */ -155,
/* 160 */ 22,
/* 161 */ 0,
/* 162 */ 101,
/* 163 */ -155,
/* 164 */ 23,
/* 165 */ 174,
/* 166 */ 50097,
/* 167 */ 26,
/* 168 */ 50100,
/* 169 */ 120,
/* 170 */ 192,
/* 171 */ 50103,
/* 172 */ -165,
/* 173 */ 24,
/* 174 */ 180,
/* 175 */ 50097,
/* 176 */ 192,
/* 177 */ 50099,
/* 178 */ -165,
/* 179 */ 25,
/* 180 */ 188,
/* 181 */ 192,
/* 182 */ 101,
/* 183 */ 50097,
/* 184 */ 101,
/* 185 */ 50097,
/* 186 */ -165,
/* 187 */ 26,
/* 188 */ 0,
/* 189 */ 50101,
/* 190 */ -165,
/* 191 */ 27,
/* 192 */ 197,
/* 193 */ 50099,
/* 194 */ 50097,
/* 195 */ -192,
/* 196 */ 28,
/* 197 */ 204,
/* 198 */ 50102,
/* 199 */ 50102,
/* 200 */ 50104,
/* 201 */ 40,
/* 202 */ -192,
/* 203 */ 29,
/* 204 */ 213,
/* 205 */ 50104,
/* 206 */ 50099,
/* 207 */ 50102,
/* 208 */ 50101,
/* 209 */ 79,
/* 210 */ 50099,
/* 211 */ -192,
/* 212 */ 30,
/* 213 */ 218,
/* 214 */ 50097,
/* 215 */ 50099,
/* 216 */ -192,
/* 217 */ 31,
/* 218 */ 0,
/* 219 */ 79,
/* 220 */ 50098,
/* 221 */ 50097,
/* 222 */ -192,
/* 223 */ 32,
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
/* 7 */ 50099,
/* 8 */ 0,
/* 9 */ 0,
/* 10 */ 50100,
/* 11 */ 0,
/* 12 */ -6,
/* 13 */ -1,
/* 14 */ 20,
/* 15 */ 50104,
/* 16 */ 50099,
/* 17 */ 50097,
/* 18 */ -6,
/* 19 */ -1,
/* 20 */ 0,
/* 21 */ 0,
/* 22 */ 50100,
/* 23 */ 50102,
/* 24 */ -6,
/* 25 */ -1,
/* 26 */ 36,
/* 27 */ 50099,
/* 28 */ 0,
/* 29 */ 50097,
/* 30 */ 50100,
/* 31 */ 0,
/* 32 */ 50104,
/* 33 */ 50097,
/* 34 */ -26,
/* 35 */ -1,
/* 36 */ 0,
/* 37 */ 50098,
/* 38 */ -26,
/* 39 */ -1,
/* 40 */ 48,
/* 41 */ 0,
/* 42 */ 0,
/* 43 */ 50099,
/* 44 */ 0,
/* 45 */ 0,
/* 46 */ -40,
/* 47 */ -1,
/* 48 */ 55,
/* 49 */ 0,
/* 50 */ 50103,
/* 51 */ 50097,
/* 52 */ 50101,
/* 53 */ -40,
/* 54 */ -1,
/* 55 */ 61,
/* 56 */ 50103,
/* 57 */ 50097,
/* 58 */ 0,
/* 59 */ -40,
/* 60 */ -1,
/* 61 */ 65,
/* 62 */ 50101,
/* 63 */ -40,
/* 64 */ -1,
/* 65 */ 71,
/* 66 */ 0,
/* 67 */ 0,
/* 68 */ 50098,
/* 69 */ -40,
/* 70 */ -1,
/* 71 */ 0,
/* 72 */ 50100,
/* 73 */ 0,
/* 74 */ 50099,
/* 75 */ 50103,
/* 76 */ 50100,
/* 77 */ -40,
/* 78 */ -1,
/* 79 */ 83,
/* 80 */ 50102,
/* 81 */ -79,
/* 82 */ -1,
/* 83 */ 90,
/* 84 */ 50104,
/* 85 */ 0,
/* 86 */ 50104,
/* 87 */ 50098,
/* 88 */ -79,
/* 89 */ -1,
/* 90 */ 95,
/* 91 */ 50099,
/* 92 */ 50104,
/* 93 */ -79,
/* 94 */ -1,
/* 95 */ 0,
/* 96 */ 0,
/* 97 */ 0,
/* 98 */ 0,
/* 99 */ -79,
/* 100 */ -1,
/* 101 */ 111,
/* 102 */ 50100,
/* 103 */ 50100,
/* 104 */ 50101,
/* 105 */ 0,
/* 106 */ 0,
/* 107 */ 50102,
/* 108 */ 50098,
/* 109 */ -101,
/* 110 */ -1,
/* 111 */ 0,
/* 112 */ 50104,
/* 113 */ 0,
/* 114 */ 50102,
/* 115 */ 0,
/* 116 */ 0,
/* 117 */ 50104,
/* 118 */ -101,
/* 119 */ -1,
/* 120 */ 128,
/* 121 */ 50097,
/* 122 */ 50103,
/* 123 */ 0,
/* 124 */ 0,
/* 125 */ 50100,
/* 126 */ -120,
/* 127 */ -1,
/* 128 */ 138,
/* 129 */ 50101,
/* 130 */ 50097,
/* 131 */ 50097,
/* 132 */ 50100,
/* 133 */ 0,
/* 134 */ 50100,
/* 135 */ 0,
/* 136 */ -120,
/* 137 */ -1,
/* 138 */ 148,
/* 139 */ 50104,
/* 140 */ 50102,
/* 141 */ 0,
/* 142 */ 50104,
/* 143 */ 50099,
/* 144 */ 0,
/* 145 */ 50099,
/* 146 */ -120,
/* 147 */ -1,
/* 148 */ 0,
/* 149 */ 50102,
/* 150 */ 0,
/* 151 */ 0,
/* 152 */ 0,
/* 153 */ -120,
/* 154 */ -1,
/* 155 */ 161,
/* 156 */ 0,
/* 157 */ 0,
/* 158 */ 0,
/* 159 */ -155,
/* 160 */ -1,
/* 161 */ 0,
/* 162 */ 0,
/* 163 */ -155,
/* 164 */ -1,
/* 165 */ 174,
/* 166 */ 50097,
/* 167 */ 0,
/* 168 */ 50100,
/* 169 */ 0,
/* 170 */ 0,
/* 171 */ 50103,
/* 172 */ -165,
/* 173 */ -1,
/* 174 */ 180,
/* 175 */ 50097,
/* 176 */ 0,
/* 177 */ 50099,
/* 178 */ -165,
/* 179 */ -1,
/* 180 */ 188,
/* 181 */ 0,
/* 182 */ 0,
/* 183 */ 50097,
/* 184 */ 0,
/* 185 */ 50097,
/* 186 */ -165,
/* 187 */ -1,
/* 188 */ 0,
/* 189 */ 50101,
/* 190 */ -165,
/* 191 */ -1,
/* 192 */ 197,
/* 193 */ 50099,
/* 194 */ 50097,
/* 195 */ -192,
/* 196 */ -1,
/* 197 */ 204,
/* 198 */ 50102,
/* 199 */ 50102,
/* 200 */ 50104,
/* 201 */ 0,
/* 202 */ -192,
/* 203 */ -1,
/* 204 */ 213,
/* 205 */ 50104,
/* 206 */ 50099,
/* 207 */ 50102,
/* 208 */ 50101,
/* 209 */ 0,
/* 210 */ 50099,
/* 211 */ -192,
/* 212 */ -1,
/* 213 */ 218,
/* 214 */ 50097,
/* 215 */ 50099,
/* 216 */ -192,
/* 217 */ -1,
/* 218 */ 0,
/* 219 */ 0,
/* 220 */ 50098,
/* 221 */ 50097,
/* 222 */ -192,
/* 223 */ -1,
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
/* 8 */ 3012,
/* 9 */ 3014,
/* 10 */ 9999,
/* 11 */ 3020,
/* 12 */ 9999,
/* 13 */ 3008,
/* 14 */ 9999,
/* 15 */ 9999,
/* 16 */ 9999,
/* 17 */ 9999,
/* 18 */ 9999,
/* 19 */ 3025,
/* 20 */ 9999,
/* 21 */ 3040,
/* 22 */ 9999,
/* 23 */ 9999,
/* 24 */ 9999,
/* 25 */ 3040,
/* 26 */ 9999,
/* 27 */ 9999,
/* 28 */ 5009,
/* 29 */ 9999,
/* 30 */ 9999,
/* 31 */ 5019,
/* 32 */ 9999,
/* 33 */ 9999,
/* 34 */ 9999,
/* 35 */ 5005,
/* 36 */ 9999,
/* 37 */ 9999,
/* 38 */ 9999,
/* 39 */ 5032,
/* 40 */ 9999,
/* 41 */ 7005,
/* 42 */ 7007,
/* 43 */ 9999,
/* 44 */ 7013,
/* 45 */ 7015,
/* 46 */ 9999,
/* 47 */ 7005,
/* 48 */ 9999,
/* 49 */ 7020,
/* 50 */ 9999,
/* 51 */ 9999,
/* 52 */ 9999,
/* 53 */ 9999,
/* 54 */ 7020,
/* 55 */ 9999,
/* 56 */ 9999,
/* 57 */ 9999,
/* 58 */ 7045,
/* 59 */ 9999,
/* 60 */ 7037,
/* 61 */ 9999,
/* 62 */ 9999,
/* 63 */ 9999,
/* 64 */ 7050,
/* 65 */ 9999,
/* 66 */ 7057,
/* 67 */ 7059,
/* 68 */ 9999,
/* 69 */ 9999,
/* 70 */ 7057,
/* 71 */ 9999,
/* 72 */ 9999,
/* 73 */ 7072,
/* 74 */ 9999,
/* 75 */ 9999,
/* 76 */ 9999,
/* 77 */ 9999,
/* 78 */ 7068,
/* 79 */ 9999,
/* 80 */ 9999,
/* 81 */ 9999,
/* 82 */ 9005,
/* 83 */ 9999,
/* 84 */ 9999,
/* 85 */ 9016,
/* 86 */ 9999,
/* 87 */ 9999,
/* 88 */ 9999,
/* 89 */ 9012,
/* 90 */ 9999,
/* 91 */ 9999,
/* 92 */ 9999,
/* 93 */ 9999,
/* 94 */ 9029,
/* 95 */ 9999,
/* 96 */ 9040,
/* 97 */ 9042,
/* 98 */ 9044,
/* 99 */ 9999,
/* 100 */ 9040,
/* 101 */ 9999,
/* 102 */ 9999,
/* 103 */ 9999,
/* 104 */ 9999,
/* 105 */ 11017,
/* 106 */ 11019,
/* 107 */ 9999,
/* 108 */ 9999,
/* 109 */ 9999,
/* 110 */ 11005,
/* 111 */ 9999,
/* 112 */ 9999,
/* 113 */ 11036,
/* 114 */ 9999,
/* 115 */ 11042,
/* 116 */ 11044,
/* 117 */ 9999,
/* 118 */ 9999,
/* 119 */ 11032,
/* 120 */ 9999,
/* 121 */ 9999,
/* 122 */ 9999,
/* 123 */ 13013,
/* 124 */ 13015,
/* 125 */ 9999,
/* 126 */ 9999,
/* 127 */ 13005,
/* 128 */ 9999,
/* 129 */ 9999,
/* 130 */ 9999,
/* 131 */ 9999,
/* 132 */ 9999,
/* 133 */ 13040,
/* 134 */ 9999,
/* 135 */ 13046,
/* 136 */ 9999,
/* 137 */ 13024,
/* 138 */ 9999,
/* 139 */ 9999,
/* 140 */ 9999,
/* 141 */ 13059,
/* 142 */ 9999,
/* 143 */ 9999,
/* 144 */ 13069,
/* 145 */ 9999,
/* 146 */ 9999,
/* 147 */ 13051,
/* 148 */ 9999,
/* 149 */ 9999,
/* 150 */ 13082,
/* 151 */ 13084,
/* 152 */ 13086,
/* 153 */ 9999,
/* 154 */ 13078,
/* 155 */ 9999,
/* 156 */ 15005,
/* 157 */ 15007,
/* 158 */ 15009,
/* 159 */ 9999,
/* 160 */ 15005,
/* 161 */ 9999,
/* 162 */ 15014,
/* 163 */ 9999,
/* 164 */ 15014,
/* 165 */ 9999,
/* 166 */ 9999,
/* 167 */ 17009,
/* 168 */ 9999,
/* 169 */ 17015,
/* 170 */ 17017,
/* 171 */ 9999,
/* 172 */ 9999,
/* 173 */ 17005,
/* 174 */ 9999,
/* 175 */ 9999,
/* 176 */ 17030,
/* 177 */ 9999,
/* 178 */ 9999,
/* 179 */ 17026,
/* 180 */ 9999,
/* 181 */ 17039,
/* 182 */ 17041,
/* 183 */ 9999,
/* 184 */ 17047,
/* 185 */ 9999,
/* 186 */ 9999,
/* 187 */ 17039,
/* 188 */ 9999,
/* 189 */ 9999,
/* 190 */ 9999,
/* 191 */ 17056,
/* 192 */ 9999,
/* 193 */ 9999,
/* 194 */ 9999,
/* 195 */ 9999,
/* 196 */ 19005,
/* 197 */ 9999,
/* 198 */ 9999,
/* 199 */ 9999,
/* 200 */ 9999,
/* 201 */ 19028,
/* 202 */ 9999,
/* 203 */ 19016,
/* 204 */ 9999,
/* 205 */ 9999,
/* 206 */ 9999,
/* 207 */ 9999,
/* 208 */ 9999,
/* 209 */ 19049,
/* 210 */ 9999,
/* 211 */ 9999,
/* 212 */ 19033,
/* 213 */ 9999,
/* 214 */ 9999,
/* 215 */ 9999,
/* 216 */ 9999,
/* 217 */ 19058,
/* 218 */ 9999,
/* 219 */ 19069,
/* 220 */ 9999,
/* 221 */ 9999,
/* 222 */ 9999,
/* 223 */ 19069,
0
};
/* only for BIGHASH (see art.c)
extern int DHITS[];
int DHITS[225];
*/
int TABLE[34][256];
init_dirsets() {
TABLE[33][99] = 1;
TABLE[33][104] = 1;
TABLE[33][102] = 1;
TABLE[33][101] = 1;
TABLE[33][97] = 1;
TABLE[1][99] = 1;
TABLE[2][104] = 1;
TABLE[3][97] = 1;
TABLE[3][101] = 1;
TABLE[3][104] = 1;
TABLE[3][102] = 1;
TABLE[4][99] = 1;
TABLE[5][98] = 1;
TABLE[6][102] = 1;
TABLE[6][104] = 1;
TABLE[6][99] = 1;
TABLE[6][100] = 1;
TABLE[6][101] = 1;
TABLE[6][103] = 1;
TABLE[6][98] = 1;
TABLE[7][99] = 1;
TABLE[7][98] = 1;
TABLE[8][103] = 1;
TABLE[9][101] = 1;
TABLE[10][98] = 1;
TABLE[10][99] = 1;
TABLE[10][103] = 1;
TABLE[10][101] = 1;
TABLE[10][100] = 1;
TABLE[10][104] = 1;
TABLE[10][102] = 1;
TABLE[11][100] = 1;
TABLE[12][102] = 1;
TABLE[13][104] = 1;
TABLE[14][99] = 1;
TABLE[15][98] = 1;
TABLE[15][99] = 1;
TABLE[15][103] = 1;
TABLE[15][101] = 1;
TABLE[15][100] = 1;
TABLE[15][104] = 1;
TABLE[15][102] = 1;
TABLE[16][100] = 1;
TABLE[17][104] = 1;
TABLE[18][97] = 1;
TABLE[19][101] = 1;
TABLE[20][104] = 1;
TABLE[21][102] = 1;
TABLE[22][97] = 1;
TABLE[22][101] = 1;
TABLE[22][104] = 1;
TABLE[22][102] = 1;
TABLE[23][100] = 1;
TABLE[23][104] = 1;
TABLE[24][97] = 1;
TABLE[25][97] = 1;
TABLE[26][99] = 1;
TABLE[26][102] = 1;
TABLE[26][104] = 1;
TABLE[26][97] = 1;
TABLE[26][98] = 1;
TABLE[26][103] = 1;
TABLE[26][101] = 1;
TABLE[26][100] = 1;
TABLE[27][101] = 1;
TABLE[28][99] = 1;
TABLE[29][102] = 1;
TABLE[30][104] = 1;
TABLE[31][97] = 1;
TABLE[32][102] = 1;
TABLE[32][104] = 1;
TABLE[32][99] = 1;
TABLE[32][100] = 1;
TABLE[32][101] = 1;
TABLE[32][103] = 1;
TABLE[32][98] = 1;
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
      case 26: return 0; break;
      case 40: return 0; break;
      case 79: return 0; break;
      case 101: return 0; break;
      case 120: return 0; break;
      case 155: return 0; break;
      case 165: return 0; break;
      case 192: return 0; break;
   }
}
char * yyprintname(n)
   int n;
{
   if (n <= 50000)
      switch(n) {
         case 1: return "YYSTART"; break;
         case 6: return "root"; break;
         case 26: return "A"; break;
         case 40: return "B"; break;
         case 79: return "C"; break;
         case 101: return "D"; break;
         case 120: return "E"; break;
         case 155: return "F"; break;
         case 165: return "G"; break;
         case 192: return "H"; break;
   }
   else 
      switch(n-50000) {
      }
   return "special_character";
}
