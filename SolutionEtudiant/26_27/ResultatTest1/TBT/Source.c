#include <stdio.h>  
char tension;
char courant;
unsigned char puissance;
unsigned char resistance;
 
int main(void)
{

}
CutofInfo(unsigned int Valeur)
{
	tension = Valeur & 0xFF;
	courant = (Valeur >> 8) & 0xFF;
	puissance = (Valeur >> 16) & 0xFF;
	resistance = (Valeur >> 24) & 0xFF;
}