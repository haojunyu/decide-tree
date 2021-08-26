/************************/
/* Definitions for C4.5 */
/************************/

#include<stdio.h>
#include<math.h>

// variable
#define Eof EOF   // character on the end of file
#define Nil 0   // null pointer
#define False 0
#define True 1
#define None -1
#define Epsilon 1E-3

// function
#define Max(a,b)  ((a)>(b) ? a : b)
#define Min(a,b)  ((a)<(b) ? a : b)
#define Round(x)  ((int) (x+0.5))
#define Log2      0.69314718055994530942
#define Log(x)    ((x)<=0 ? 0.0 : log((float)x) / Log2)
#define Check(val, low, high)   if(val<low || val>high){printf("\t** illegal value **\n"); exit(1);}
