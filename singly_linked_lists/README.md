Singly Linked List in C
========================

Ce dossier contient des exemples de manipulation de listes chaînées simples (singly linked list) en langage C.

Fonctionnalités principales :
- Affichage de tous les éléments d'une liste (`print_list`)
- Comptage du nombre d'éléments (`list_len`)
- Ajout d'un nœud en début de liste (`add_node`)

Prototypes utilisés :
```c
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
```

Exemple d'utilisation :
```c
list_t *head = NULL;
add_node(&head, "World");
add_node(&head, "Hello");
print_list(head); // Affiche : [5] Hello\n[5] World
```

Chaque fonction gère les cas particuliers (chaîne NULL, liste vide, etc.).