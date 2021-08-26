/**********************************************************/
/* Get names of classes, attributes and attribute values  */
/**********************************************************/

#include "defns.h"
#include "types.h"
#include "extern.h"

//#include <sys/types.h>
//#include <sys/stat.h>

#define Space(s) (s==' ' || s=='\n' || s=='\t')

Boolean ReadName(FILE *f, String s){
  register char *Sp=s;
  register int c;

  while( (c = getc(f)) == '|' || Space(c) ){
    if (c=='|'){
      
    }
  }
}
