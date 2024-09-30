#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
} *root = NULL;

void insert(int key)
{
    struct node *t = root;
    struct node *r = NULL; // Pointer to keep track of the parent node
    struct node *p;

    if (root == NULL)
    {
        p = malloc(sizeof(struct node));
        p->data = key;
        p->left = p->right = NULL;
        root = p; // Update root if it's initially NULL
        return;
    }

    while (t != NULL)
    {
        r = t;
        if (key < t->data)
        {
            t = t->left;
        }
        else if (key > t->data)
        {
            t = t->right;
        }
        else
        {
            return; // Key already exists, no need to insert again
        }
    }
    p = malloc(sizeof(struct node));
    p->data = key;
    p->left = p->right = NULL;

    if (key < r->data)
    {
        r->left = p; // Link new node to the left of its parent
    }
    else
    {
        r->right = p; // Link new node to the right of its parent
    }
}

void inorder(struct node *p)
{
    if (p)
    {
        inorder(p->left);
        printf("%d ", p->data);
        inorder(p->right);
    }
}

int Search(struct node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
        {
            return 1; // Key found
        }
        else if (key < p->data)
        {
            p = p->left; // Move to the left subtree
        }
        else
        {
            p = p->right; // Move to the right subtree
        }
    }
    return 0; // Key not found
}

int main()
{
    insert(10);
    insert(5);
    insert(20);
    insert(8);
    insert(30);

    inorder(root);
    printf("\n");

        printf("\n");

    if (Search(root, 30))
    {
        printf("is found in the tree\n");
    }
    else
    {
        printf("not found\n");
    }

    printf("\n");
    return 0;
}