#include <stdio.h>
/* eco de los argumentos de la línea de órdenes; la. versión */
main(int argc, char *argv[ ])
{
int i;
for (i = 1; i < argc; i + + )
printf("%s% s", argv[i], (i < argv—1) ? "":"");
  printf ("\n");
retum 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
/* eco de los argumentos de la línea de órdenes; 2a. versión */
main(int argc, char *argv[ ])
{
while (— argc > 0)
printf("%s%s", *+ + argv, (argc > 1) ? “ "
printfOV");
retum 0;
}

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7
#include <stdio.h>
#include < string.h>
#define MAXLINE 1000
int getline(char *line, int xnax);
/* find: imprime lineas que coinciden con el patrón del 1er. argumento */
main(int argc, char *argv[ ])
{
char line [MAXLINE];
int found = 0;
if (argc ! = 2)
printf ("Uso: find patrón\n");
else
while (getline(line, MAXLINE) > 0)
if (strstr(line, argv[l] != NULL) {
printf("%s", line);
found + + ;
}
retum found;
}
    
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////77
    
 #include < stdio.h>
#include < string.h>
#define MAXLINE 1000
int getline(char *line, int max);
/* find: imprime líneas que coinciden con el patrón del 1er. argumento */
main(int argc, char *argv[ ])
í
char line [MAXLINE];
long lineno = 0;
int c, except = 0, number = 0, found = 0;
while (— argc > 0 && (*4- +argv)[0] = ='-')
while (c = *+ + argv[0])
switch (c) {
case 'x':
except = 1;
break;
case 'n':
number = 1;
break;
default:
printf ("find: opción ilegal % c\n", c);
argc = 0;
found = —1;
break;
}
if (argc ! = 1)
printf ("Uso: find - x —n patrón\n");
else
while (getline(line, MAXLINE) > 0) [
lineno + + ;
if ((strstr(line, *argv) != NULL) != except) {
if (number)
printf(“%ld:", lineno);
printf("%s", Une);
found + + ;
}
}
retum found;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
 #include <stdio.h>
#include < string.h>
#define MAXLINES 5000 /* máx # de líneas a ordenar */
char *lineptr[MAXLINES]; /* apuntadores a líneas de texto */
int rea dlines( char * lineptr [ ], int nlines);
void writelines(char *lineptr[ ], int nlines);
void qsort(void *lineptr[ ], int left, int right,
int (*comp) (void *, void *));
int numcmp(char *, char *);
/* ordena líneas de entrada */
main(int argc, char *argv[ ])
f
int nlines; /* número de lineas de entrada leídas */
int numeric = 0; /* 1 si es ordenamiento numérico */
if (argc > 1 && strcm p(argv[l], n") = = 0)
numeric = 1;
if ((nlines = readlines(lineptr, MAXLINES)) > = 0) {
qsort((void **) lineptr, 0, nlines—1,
(int (*) (void*, void*)) (numeric ? numemp : strcmp));
writelines(lineptr, nlines);
retum 0;
} else {
  printf ("entrada demasiado grande para ser ordenada\n");
return 1;
}
}
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
