#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;
int main ()
{
  time_t timer;                                 // Guarda el tiempo del computador en la variable llamada timer
  struct tm y2k = {0};                          // Crea una estructura de tiempo y la guarda en una variable llamada y2k
  double seconds;                               // Objeto que almacena la estrucutra de y2k

  y2k.tm_hour = 0;                              // Es una variable constante
  y2k.tm_min = 0;                               // Es una variable constante
  y2k.tm_sec = 0;                               // Es una variable constante
  int ano;                                      // Es la variable int que aun no definida
  cout<<"digite el año:"; cin>> ano;            // Imprime el mensaje "digite el año:" y define el valor de la varible int  anterior
  int mes;                                      // Es la variable int que aun no definida
  cout<<"digite el mes:"; cin>> mes;            // Imprime el mensaje "digite el mes:" y define el valor de la varible int  anterior
  int dias;                                     // Es la variable int que aun no definida
  cout<<"digite el dia:"; cin>> dias;           // Imprime el mensaje "digite el dia:" y define el valor de la varible int  anterior
  y2k.tm_year=ano-1900;                         // Es la variable que depende de una operacion con otra variable

  y2k.tm_mon=mes-1;                             // Es la variable que depende de una operacion con otra variable

  y2k.tm_mday=dias;                             // Es la variable que depende de una operacion con otra variable


  time(&timer);                                 // Convierte en tiempo unix lo de la varible timer

  seconds = difftime(timer,mktime(&y2k));       // Es una operacion de diferencial de tiempo entre la estructura y2k y el timer en tiempo unix) 
  float dia=seconds/86400;                      // Operacion que convierte el tiempo unix (seg) en dias
  printf ("has vivido %.f  ",dia);              // Imprime el valor de la variable dia con una frase
  return 0;
}