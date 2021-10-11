
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
#include <math.h>
/* numemp: compara si y s2 numéricamente */
int numcmp(char *sl, char *s2)
{
double vi, v2;
v i = atof(sl);
v2 = atof(s2);
if (vi < v2)
return - 1;
else if (vi > v2)
retum 1;
else
retum 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXTOKEN 100
enum { ÑAME, PARENS, BRACKETS };
void dcl(void);
void dirdrUvoid);
int gettoken(void);
int tokentype; /* tipo del último token */
char token [MAXTOKEN]; /* cadena del último token */
char ñame [MAXTOKEN]; /* nombre del identificador */
char datatype[MAXTOKEN]; /* tipo de dato = char, int, etc. */
char out[1000]; /* cadena de sahda */
main( ) /* convierte una declaración a palabras */
{
while (gettoken( ) ! = EOF) { /* 1er. token en la línea */
strcpy (datatype, token); /* es el tipo de dato */
out[0] = '\0'¡
dcl( ); /* reconoce el resto de la línea */
if (tokentype ! = '\n')
printf ("error de sintaxis\n");
printf("%s: %s %s\n", ñame, out, datatype);
}
return 0;
}
