Task 4.txt

Qui a accès



Propriétés système

Type

Texte

Taille

368 octets

Espace de stockage utilisé

368 octets

Emplacement

Variables if else while

Propriétaire

Antony Bahati

Date de modification

20:42 par Antony Bahati

Ouvert

05:13 par moi

Date de création

20:46

Pas de description

Téléchargement autorisé pour les lecteurs

#include <stdio.h>

/**

 * main - print if the number is postive, zero, or negative

 *

 * Description: using the main function

 * this program prints "Programming is positive, zero, or negative

 * Return: 0

 */

int main(void)

{

char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)

{

if (ch != 'e' && ch != 'q')

{

	putchar(ch);

}

}

putchar('\n');

return (0);

}
