# Script de compilation pour INF1
## Auteur
Jordan Mercier

## Description
Ce repo contient un script qui permet de compiler les projets de INF1 selon les paramètres de compilation requis par les professeurs.  

J'incite les étudiants de 1ère année à partager ce script dans la joie et la bonne humeur.  

## Mode d'emploi
Attribuez vous les droits d'éxecution sur le script après l'avoir copié dans le répértoire de votre choix:
```bash
chmod +x compile-inf1.sh
```

Ensuite, lancer le script avec les paramètres suivants:
+ Le nom du programme à la sortie
+ L'extension des fichiers (cpp par exemple)

```bash
./compile-inf1.sh myprogram cpp
```

Si le résultat est ok alors vous devriez avoir le message suivant:
```bash
compilation done.
```

Ensuite exécutez votre programme comme suit:
```bash
./myprogram
```

Résultat: 
```bash
======= Truck ========
Number of wheel:	4
Brand:	MAN
Model:	Super truck
Sound:	Vroum%
```

**Note:** Un code est mis à disposition pour tester le script directement depuis le repo git.