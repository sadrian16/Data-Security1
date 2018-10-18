/*
 * Main.c
 *
 *  Created on: Oct 18, 2018
 *      Author: Asus
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Algorithms.h"

int main()
{
    int option;
    int key;
    char plain_text[50];

    printf("Enter the text: ");
    fflush( stdout );
    gets(plain_text);


    printf("Enter the number of shifts: ");
    fflush( stdout );
    scanf("%d", &key);
    while(!(key >= -25 && key <= 25))
    {
    	 printf("Please enter a shift number between 0 and 25");
    	 fflush( stdout );
    	 scanf("%d", &key);
    }
    key = abs(key);

    printf("For encryption press 1 / For decryption press 2 ");
    fflush( stdout );
    scanf("%d", &option);



    switch(option)
    {
            case 1:
            	Caesar_encrypt(plain_text, key);
            	break;

            case 2:
            	Caesar_decrypt(plain_text, key);
				break;

            default:
                printf("\n Not a valid option");
    }

    return 0;
}
