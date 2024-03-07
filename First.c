/***************************************************************************
 *   Copyright (C) $Year$ by $Author$   *
 *   $Email$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************

 1.  NAME
     $Source$ 

 2.  DESCRIPTION

 3.  VERSIONS
       Original:
         $Date$ / $Author$

       Version history:

**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <stdio.h>
#include "functions.h"

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES AND CONSTANTS                                  *
*--------------------------------------------------------------------*/
/* Control flags */
#define DEBUG 

/* Global constants */

/* Global variables */

/* Global structures */

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/

/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/


int main() {
    char choice;
    float num1, num2, result;

    printf("Enter choice (+, -, *, /): ");
    scanf("%c", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case '+':
            result = add(num1, num2);
            printf("Result is: %d\n", result);
            break;

        case '-':
            result = subtract(num1, num2);
            printf("Result is: %d\n", result);
            break;

        case '*':
            result = multiply(num1, num2);
            printf("Result is: %d\n", result);
            break;

        case '/':
            if(num2 != 0) 
            {
                result = divide(num1, num2);
                printf("Result is: %d\n", result);
            } else 
            {
                printf("Error! Division by zero.");
            }
            break;
            
        default:
            printf("Error! Choice is not correct.");
            break;
    }

    return 0;
} /* end of main */

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
	F U N C T I O N    D E S C R I P T I O N
---------------------------------------------------------------------
 NAME:
 DESCRIPTION:
	Input:
	Output:
  Used global variables:
 REMARKS when using this function:
*********************************************************************/