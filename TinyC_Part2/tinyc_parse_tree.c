#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"

typedef struct tree_node {
    char * name;
    char * val;
    struct tree_node * next;
    struct tree_node * child;
} tree;

typedef tree * tree_pointer;

tree_pointer init_node(char * name, char * val, tree_pointer child) {
    tree_pointer new_tree = (tree_pointer) malloc(sizeof(tree));
    new_tree->name = strdup(name);
    new_tree->val = strdup(val);
    new_tree->next = NULL;
    new_tree->child = NULL;

    return new_tree;
}

tree_pointer add_next(tree_pointer root, tree_pointer next) {
    tree_pointer temp = root;
    while(temp->next != NULL) temp = temp->next;

    temp->next = next;
}

void print_parse_tree(tree_pointer root, int depth) {
    if (root == NULL) return;

    for (int i=0; i<depth; i++) printf("\t");
    if (strcmp("", root->val)) printf("-> %s (%s)\n", root->name, root->val);
    else printf("-> %s\n", root->name, root->val);

    print_parse_tree(root->next, depth);
    print_parse_tree(root->child, depth+1);

    return;
}