# PROG - Cours de programmation année 2026 - 2027 -> V2.12

## Création d'un compte GIT + association machine de dev à votre compte 

1. Créez un compte sur un serveur GIT => pour l'ES nous utiliserons <span sytle="color:#FF0000;">[Github](https://github.com/?locale=fr-fr)</span>

2. Créez un jeton - ***token*** via Github
	1. -> Settings (dans votre profil)
	2. -> Developper settings 
	3. -> Personal access tockens 
	4. -> Tokens (classic) 
	5. -> Generate new token (classic)
		
		A. -> nom du tocken

		B. -> date d'expiration du token (maximum -> 1 année)

		C. -> [x] coches à placer 

		```
		-> repo
		-> workflow (optionnel)
		-> admin:org
		-> notifications
		-> user
		-> delete_repo
		-> write:discussion (optionnel)
		-> project
		```

		D. -> générer le jeton (***token***) et copier le clé à un endroit sûr 

3. sur votre machine, il faut installer le client github en ligne de commande (cli)
	1. -> ouvrir un power shell 
	2. -> taper la commande suivante (:warning -> il faut avoir les droits d'admin de la machine) : 

	`winget install --id GitHub.cli --source winget`  

	3. -> fermer la fenête du powershell pour que l'installation soit prise en compte

pour plus d'info voir le dépôt github sur les [commandes cli - github](https://github.com/cli/cli/blob/trunk/docs/install_windows.md) 

4. lier le token à la machine
	1. -> ouvrir un power shell 
	2. -> taper la commande suivante : `gh auth login`
	3. -> sélectionner `> Github.com`
	4. -> sélectionner `> HTTPS`
	5. -> à la question, taper : `Y`
	6. -> sélectionner `> past an authentification token`
	7. -> insérer votre tocken créé sur Github 







	






	
### Créez et gérez votre **propre dépôt** (local (votre machine) -> serveur (ex: serveur github)
	
A. sur votre machine (local) -> créez un répertoire où sera votre solution

ci-dessous exemple en ligne de commande sous **windows** pour créer un répertoire 

```Shell 
# se placer sur le bon disque -> exemple dique C 
C:

# créer un repertoire à en emplacement voulu 
mkdir c:\mesDossierGit\monDepotGit  
```

B. sur votre serveur Git, créer un dépôt -> ***new repository*** 
B1. donnez un nom à votre dépot 
B2. en quelques mots décrivez  
	
C. lier votre répertoire local à au dépôt Git (en ligne de commande) : 

```Shell 
# placez-vous dans le bon répertoire
cd c:\mesDossierGit\monDepotGit  


	
	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	C:
	> cd c:\mesDossierGit\monDepot 
	```
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 
	git push 
	```

# tips -> si vous activez les fichier cachers dans l'explorateur sous windows -> vo 
	
	
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un 
	
	A. => depuis le serveur -> forker le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	C:
	> mkdir c:\mesDossierGit\monDepot 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone https://github.com/nomUserGit/votreNomDepotGit.git 
	``` 

*=> avec un outil graphqiue* -> sourceTree pour l'ES - GitDescktop - TortoiseGit - etc. 

## Suivi des exercices 
---

| Exercice \ Initial Etudiant | **[YAD](https://github.com/TheBigYA)** | **[SAR](https://github.com/Simaugs)** | **[VBC](https://github.com/Valentin-Blanc)** | **[TBT](https://github.com/Thobrechet)** | **[MCN](https://github.com/Maraph)** | **[TCK](https://github.com/Tyuz3)** | **[NDC](https://github.com/ItzNicolo)** | **[GFE](https://github.com/Giome)** |**[GFR](https://github.com/Kinao27)** |**[GMO](https://github.com/Ninja404-coder)** | **[NRN](https://github.com/NonoAndDuck)** | **[BSC](https://github.com/Benji1920)** | **[NAM](https://github.com/Noe-Alam)** | **[NTN](https://github.com/NicoTf40)** |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|  
| [Ex1](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo1)  | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex2A](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo2) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex3](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo3) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex4](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo4) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex5](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo5) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex6](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo6) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex7](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo7) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex8](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo8) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex9](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo9) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex10](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo10) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex11](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo11) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex12](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo12) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex13](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo13) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex14](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo14) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex15](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo15) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex16](https://github.com/PBYetml/PROG_SLO1_25_26/tree/main/Exercice/Exo16) | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex17 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex18 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex19 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex20 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex21 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex22 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex23 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex24 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| Ex25 | NOK | NOK| NOK| NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |

## Exercice 2
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo2)
* lien avec le chapitre 2 
* source à disposition : - 

### Groupe
* Flow chart 			=> NAM LDE AOD  	| 	verificateur => LMY VMD SVD NTN 
* Structogramme NSI		=> CAH SPY TDS		| 	verificateur => SSR MBY DEA  ^25
* Structogramme Jackson	=> LMY VMD SVD NTN	| 	verificateur => NAM LDE AOD 
* Pseudo-Code 			=> SSR MBY DEA 		| 	verificateur => CAH SPY TDS

### Suivi projet
* [Partie A](https://github.com/PBYetml/PROG_SLO1_24_25/tree/main/Exercice/Exo2) => réaliser un flow chart / pseudo code / structogramme : 

## Exercice 3
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo3)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex3_V02.c

## Exercice 4
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo4)
* lien avec le chapitre 3 - 4  	
* source à disposition : Ex4_V2.C

## Exercice 5
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo5)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

## Exercice 6
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo6)
* lien avec le chapitre 3 - 4 - 5 - 6 	
* source à disposition : - 

## Exercices Série 7  
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo7)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 
* source à disposition : -

## Exercice 8
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo8)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : Ex8.c 

## Exercice 9
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo9)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 	
* source à disposition : Ex9.c 

## Exercice 10
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo10)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex10.c 

## Exercice 11
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo11)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex11.c 

## Exercice 12
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo12)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8	
* source à disposition : Ex12.c - Ex12c.c - Ex12d.c

## Exercice Série 13
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo13)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8 	
* source à disposition : Ex13.c - Ex13B.c - Ex13_SG.c

## Exercice 14
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo14)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex14.c 

## Exercice 15
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo15)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  

## Exercice 16
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo16)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex16.c 

## Exercices - Série 17
* voir [CDC - PDF](https://github.com/PBYetml/PROG_SLO1_23_24/tree/main/Exercice/Exo17)
* lien avec le chapitre 3 - 4 - 5 - 6 - 7 - 8  	
* source à disposition :  Ex17.c 


voir sources étudiants concernant certaines questions : [Réponses Etudiants SLO Test1](https://github.com/PBYetml/PROG_SLO1_TEST1_23_24)

=> voir [discussion](https://github.com/PBYetml/PROG_SLO1_23_24/discussions/11) - taille d'un caractère : 
![Resultat Code Demo ](/CodeDemo/CodeDemoEtudiants/ResultatSolution.PNG)

