#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
} *root = NULL;

struct node *Rinsert(struct node *p, int key)
{
    if (p == NULL)
    {
        struct node *t = malloc(sizeof(struct node));
        t->data = key;
        t->left = t->right = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->left = Rinsert(p->left, key);
    }
    else if (key > p->data)
        p->right = Rinsert(p->right, key);

    return p;
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

int Rsearch(struct node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
        {
            return 1; // Key found
        }
        else if (key < p->data)
        {
            return Rsearch(p->left, key); // Move to the left subtree
        }
        else
        {
            return Rsearch(p->right, key); // Move to the right subtree
        }
    }
    return 0; // Key not found
}

int Height(struct node *p)
{
    int x, y;
    if (p == NULL)
        return 0;
    x = Height(p->left);
    y = Height(p->right);

    return x > y ? x + 1 : y + 1;
}

struct node *InPre(struct node *p)
{
    while (p && p->right != NULL)
        p = p->right;

    return p;
}

struct node *InSucc(struct node *p)
{
    while (p && p->right != NULL)
        p = p->right;

    return p;
}

struct node *delete(struct node *p, int key)
{
    struct node *q = malloc(sizeof(struct node));

    if (p == NULL)
    {
        return NULL;
    }
    if (p->left == NULL && p->right == NULL)
    {
        if (p == root)
        {
            root = NULL;
        }
        free(p);
        return NULL;
    }

    if (key < p->data)
    {
        p->left = delete (p->left, key);
    }
    else if (key > p->data)
        p->right = delete (p->right, key);
    else
    {
        if (Height(p->left) > Height(p->right))
        {
            q = InPre(p->left);
            p->data = q->data;

            p->left = delete (p->left, q->data);
        }
        else
        {
            q = InSucc(p->right);
            p->data = q->data;

            p->right = delete (p->right, q->data);
        }
    }
    return p;
}

int main()
{
    root = Rinsert(root, 50);
    Rinsert(root, 10);
    Rinsert(root, 40);
    Rinsert(root, 20);
    Rinsert(root, 30);

    delete (root, 30);

    inorder(root);

    if (Rsearch(root, 20))
    {
        printf("\nit is found \n");
    }
    else
    {
        printf("\nit is NOT found \n");
    }

    return 0;
}