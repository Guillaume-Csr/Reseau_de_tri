># Compte rendu Projet :
><p align = center>
> Réseau de Tri
>
> ![image tri](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e9/SimpleSortingNetwork2.svg/1200px-SimpleSortingNetwork2.svg.png)
></p>
>Guillaume Cuisinier M1

---

Lien vers le dépôt GitHub du projet : https://github.com/Guillaume-Csr/Reseau_de_tri.git

## Introdution

Le réseau de tri, comme son nom l'indique est un réseau capable de réaliser un tri soit de valeurs ou d'objets. Ici, le but de ce projet est d'utiliser une liste de nombre en désordre et grâce à un systéme de réseau de tri obtenir en résultat la liste de nombre trié soit dans un ordre croissant ou décroissant. 

Le réseau de tri est basé sur plusieurs enchaînement de comparaison entre deux élément à trier puis ranger dans l'ordre selon les critères de tri. On réprésente ce réseau sous la forme de ligne horizontal relié par certains endroit par des noeuds. Les lignes correspondent aux chemins du réseaux qu'emprinte les chiffres et les noeuds correspondent aux points de comparaison entre les deux nombres présent sur les lignes reliés à un instant t du programme. Ainsi une fois le noeud passé il en résulte la position des nombres triés par ordre de supériorité ou d'infériorité.

Laissons place au programme pour illustrer tout ceci !

## L'interface

Durant ce projet j'ai souhaiter utiliser l'option Design proposée par Qt pour créer l'interface de mon application. Cette option permet de creer simplement l'application que l'on souhaite sous la forme d'un fichier d'extension ".ui".
Cette méthode va nous permettre de simplifier la rédaction du programme pour générer l'interface graphique. En effet, tout les Widgets sont automatiquement initialisé dans le "mainwindow.ui", et Qt se charge automatique de les inscrire dans le même namespace de l'ensemble du projet. Par conséquent, au sein de nos classe il suffit d'appeler les widgets par leur nom et de programmer leurs actions.

- Au lancement

Ci-dessus voici une capture d'écran de l'application découpé en plusieurs partie.

<p align="center">
  <img src="2Capture.png">
  Application au lancement
</p>

En Noir on retrouve les widget permettant l'insertion des nombres a trié.

En Rouge on retrouve l'écran sur lequel sera affiché le réseau comprenant ainsi les lignes et les noeuds.

En Bleu on retrouve les QLabel qui sont des widgets où sera affiché le résultat de la comparaison. Les nombres sont ainsi trié dans un ordre croissant, le plus petit étant placé en haut

En Vert on retrouve les boutons principaux permettant de commander l'application. 
**Generate Content** permet de Générer, une fois la liste de nombre inscrite, le réseau de tri sous sa représentation graphique avec une couleur correspondant au chemin que parcours chaque chiffre jusqu'à la phase de tri final.

**Reset** permet de réinitialiser l'application à ses valeurs par défaut

**Quit** permet de quitter l'application

- En fonction

<p align="center">
  <img src="Capture.png">
  Application une fois le contenu générer avec solution
</p>

L'affichage graphique et généré sur un QGraphicView qui est ensuite géré par la classe MyScenne du projet. On y retrouve les librairie permettant de créer les éléments qui compose l'affichage à savoir QWidget et QObject. QObject va permettre d'appeler des méthodes tel que AddLine et AddRect qui vont permmetre de créer les lignes et les noeuds de l'affichage. On utilise la librairie QPen pour pouvoir générer les chemins de chaque chiffre à la couleur qui lui est attribuée.

## Conclusion

A travers ce projet, j'ai pu découvrir le principe de fonctionnement du réseau de tri ainsi que son interprétation graphique. Ce qui à été compliqué pour moi au sein de ce projet a été de mettre en place l'algorythme permettant l'affichage des lignes à chaque compraison de deux nombres. En revanche j'ai été satisfait d'avoir pu mettre en place ce projet jusqu'au but final.