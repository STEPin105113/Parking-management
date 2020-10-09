#ifndef PARKING_OPERATION_H_
#define PARKING_OPERATION_H_
#include <stdio.h>


#define CAR 1
#define SCOOTER 2


struct vehicle
{
	int num ;
	int row ;
	int col ;
  int type ;
} ;

int parkinfo[4][10] ;
int vehcount ;
int carcount ;
int scootercount ;

void display( ) ;
void changecol ( struct vehicle * ) ;
struct vehicle * add ( int, int, int, int ) ;
void del ( struct vehicle * ) ;
void getfreerowcol ( int, int * ) ;
void getrcbyinfo ( int, int, int * ) ;
void show( ) ;


#endif // PARKING_OPERATION_H_INCLUDED
