#ifndef UTN_BIBLIOTECA_H_INCLUDED
#define UTN_BIBLIOTECA_H_INCLUDED

int utn_getString(  char *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);


int utn_getNumber(  int *resultado,
                char *msg,
                char *msgError,
                int minimo,
                int maximo,
                int reintentos);

int utn_isValidIntNumber (char* cadena);




#endif // UTN_BIBLIOTECA_H_INCLUDED
