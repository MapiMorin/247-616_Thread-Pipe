/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * Le main éxecute 5 commandes shell une à la suite de  
 * l'autre avec la fonction system.
 * 3 de ces commandes sont pour envoyer différent processus (1,3 et 5)
 * Et 2 de ces commandes sont pour faire attendre/dormir le programme
 * soit pendant 10 secondes soit pendant 5 secondes.
 * Suivi d'un affichage pour dire que le tout est terminé.
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
