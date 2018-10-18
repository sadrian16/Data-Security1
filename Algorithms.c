/*
 * Algorithms.c
 *
 *  Created on: Oct 18, 2018
 *      Author: Asus
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Algorithms.h"

void Caesar_encrypt(char plain_text[], int key)
{
	    char current;
		int i;
		int len;
		len = strlen(plain_text);
		for (i = 0; i < len ; i++)
		{
			current = plain_text[i];
			if (current >= 'A' && current <= 'Z')
			{
				current = ((current-'A')+key)%26+'A';
				plain_text[i] = current;
			}
			if (current >= 'a' && current <= 'z')
			{
				current = ((current-'a')+key)%26+'a';
				plain_text[i] = current;
			}
		}
		 printf("Encrypted Text is : %s ", plain_text);
}

void Caesar_decrypt(char plain_text[], int key)
{



	    char current;
		int contor;
		int length;
		length = strlen(plain_text);
		for (contor = 0; contor < length ; contor++)
		{
			current = plain_text[contor];

			if (current >= 'a' && current <= 'z')
			{
				current = current - key;
				if(current < 'a')
				{
					current = current + 'z' - 'a' + 1;
				}
				plain_text[contor] = current;
			}
			if (current >= 'A' && current <= 'Z')
			{
				current = current - key;
				if(current < 'A')
				{
					current = current + 'Z' - 'A' + 1;
				}
				plain_text[contor] = current;
			}
		}
		printf("Decrypted Text is : %s ", plain_text);
}
