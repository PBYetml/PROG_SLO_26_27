/*
========================================================
PETIT AIDE MEMOIRE C
========================================================

--- AFFECTATION / CALCUL ---

=       mettre une valeur
==      comparer si egal
!=      different

x = 5;          // x prend 5

x += 2;         // x = x + 2
x -= 2;         // x = x - 2
x *= 2;         // x = x * 2
x /= 2;         // x = x / 2
x %= 2;         // x = x % 2

+       addition
-       soustraction
*       multiplication
/       division
%       reste de division (Modulo)

exemple:
10 % 3 = 1


--- COMPARAISONS ---

==      egal
!=      pas egal
<       plus petit
>       plus grand
<=      plus petit ou egal
>=      plus grand ou egal

ex:
if (x == 5)
if (x >= 0)


--- CONDITIONS LOGIQUES ---

&&      ET
||      OU
!       NON

ex:

// entre 0 et 9
if (x >= 0 && x <= 9)

// PAS entre 0 et 9
if (x < 0 || x > 9)


--- IF / ELSE ---

if (condition)
{
    // si vrai
}
else
{
    // si faux
}

ex:

if (ValA > 9)
{
    ValA = 9;
}
else
{
    printf("OK\n");
}


--- WHILE ---

i = 0;

while (i < 5)
{
    printf("*");
    i = i + 1;
}

// ATTENTION ne pas oublier i = i + 1
// sinon boucle infinie


--- DO WHILE ---

// fait la boucle au moins 1 fois

do
{
    // instructions
}
while (condition);

// ATTENTION ; apres le while


--- FOR ---

for (i = 0; i < 5; i++)
{
    // instructions
}

// pareil que:

i = 0;

while (i < 5)
{
    // instructions
    i = i + 1;
}


// i++ pareil que:
i = i + 1;

// i-- pareil que:
i = i - 1;


--- PRINTF ---

printf("bonjour\n");

printf("%d", x);       // int
printf("%hd", x);      // short int
printf("%f", x);       // reel
printf("%.2f", x);     // reel 2 chiffres apres virgule
printf("%.6f", x);     // reel 6 chiffres apres virgule
printf("%c", x);       // caractere
printf("%s", chaine);  // chaine


--- SCANF ---

scanf("%d", &x);       // int
scanf("%hd", &x);      // short int
scanf("%f", &x);       // float
scanf("%lf", &x);      // double

// ATTENTION au &
// &x = adresse de x


--- TYPES ---

char        // caractere / petit entier
short int   // entier
int         // entier
long int    // grand entier
float       // reel
double      // reel plus precis

unsigned int    // entier seulement positif


--- DIVISION ENTIERE / CAST ---

int a = 3;
int b = 2;
double resultat;

resultat = a / b;
// donne 1 car a et b sont entier

resultat = (double)a / b;
// donne 1.5

// (double) force la conversion en double


--- FONCTION ---

// fonction qui ne retourne rien
void TestA(int valeur)
{
    printf("%d\n", valeur);
}

// appel
TestA(ValA);


// fonction qui retourne un int
int Addition(int a, int b)
{
    return a + b;
}

// appel
resultat = Addition(2, 3);


--- TABLEAU ---

int Tableau[10];

// 10 valeurs:
// Tableau[0]
// Tableau[1]
// ...
// Tableau[9]

i = 0;

while (i < 10)
{
    Tableau[i] = i;
    i = i + 1;
}


--- POINTEUR ---

int x;
int *pX;

pX = &x;

// &x  = adresse de x
// *pX = valeur qui est a cette adresse


--- PRIORITE CALCUL ---

2 + 3 * 4
// = 14 car multiplication avant addition

(2 + 3) * 4
// = 20

// si pas sur -> mettre des ( )


--- TRUCS A VERIFIER AVANT DE RENDRE ---

// =    affectation
// ==   comparaison

// &&   ET
// ||   OU

// scanf -> penser au &

// i < 10 donne 0 a 9
// i <= 10 donne 0 a 10

// penser a incrementer i dans while

// ; a la fin des instructions
// mais PAS:
// if (...);
// while (...);   sauf do while

// verifier les { }

// division de int = division entiere
// utiliser (double) si besoin

========================================================
*/