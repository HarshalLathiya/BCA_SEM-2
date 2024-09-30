#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
} *root;

struct que
{
    int front;
    int rear;
    int size;
    struct node **Q_arr;
};

void create_que(struct que *q)
{
    printf("Enter the size of the array: ");
    scanf("%d", &q->size);
    q->front = q->rear = -1;
    q->Q_arr = malloc(q->size * sizeof(struct node *));
}

void enque(struct que *q, struct node *p)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1)
        q->front = q->rear = 0;
    else
        q->rear = (q->rear + 1) % q->size;
    q->Q_arr[q->rear] = p;
}

struct node *deque(struct que *q)
{
    struct node *val = NULL;
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return NULL;
    }
    else
    {
        val = q->Q_arr[q->front];
        if (q->front == q->rear)
            q->front = q->rear = -1;
        else
            q->front = (q->front + 1) % q->size;
    }
    return val;
}

int isEmpty(struct que *q)
{
    return q->front == -1;
}

void TreeCreate(struct que *q)
{
    struct node *p, *t;
    int x;

    root = malloc(sizeof(struct node));
    root->left = NULL;
    root->right = NULL;

    printf("Enter the root value: ");
    scanf("%d", &x);

    root->data = x;
    enque(q, root);
    while (!isEmpty(q))
    {
        p = deque(q);
        printf("Enter the left child of %d (-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = malloc(sizeof(struct node));
            t->data = x;
            t->left = t->right = NULL;
            p->left = t;
            enque(q, t);
        }

        printf("Enter the right child of %d (-1 for no child): ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = malloc(sizeof(struct node));
            t->data = x;
            t->left = t->right = NULL;
            p->right = t;
            enque(q, t);
        }
    }
}

void preorder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->left);
        preorder(p->right);
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

void postorder(struct node *p)
{
    if (p)
    {
        postorder(p->left);
        postorder(p->right);
        printf("%d ", p->data);
    }
}

void levelorder(struct node *p, struct que *q)
{
    printf("%d ", p->data);
    enque(q, p);

    while (!isEmpty(q))
    {
        p = deque(q);

        if (p->left)
        {
            printf("%d ", p->left->data);
            enque(q, p->left);
        }

        if (p->right)
        {
            printf("%d ", p->right->data);
            enque(q, p->right);
        }
    }
}

int nodeCount(struct node *p)
{
    int x, y;

    if (p != NULL)
    {
        x = nodeCount(p->left);
        y = nodeCount(p->right);

        return x + y + 1;
    }
    else
    {
        return x + y;
    }
}

int twoChildCnt(struct node *p)
{
    int x, y;

    if (p != NULL)
    {
        x = twoChildCnt(p->left);
        y = twoChildCnt(p->right);

        if (p->left == NULL || p->right == NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
}

int leafNodeCnt(struct node *p)
{
    int x, y;

    if (p != NULL)
    {
        x = leafNodeCnt(p->left);
        y = leafNodeCnt(p->right);

        if (p->left == NULL && p->right == NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
}

int oneChildNode(struct node *p)
{
    int x, y;

    if (p != NULL)
    {
        x = oneChildNode(p->left);
        y = oneChildNode(p->right);

        if ((p->left == NULL && p->right != NULL) || (p->left != NULL && p->right == NULL))
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
}

int main()
{
    struct que *q = malloc(sizeof(struct que));
    create_que(q);
    TreeCreate(q);
    printf("Preorder traversal: ");
    preorder(root);

    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);

    printf("\n");
    printf("Level order traversal: ");
    levelorder(root, q);

    printf("\n");
    printf("Node count is %d ", nodeCount(root));

    printf("\n");
    printf("Node having 2 child count is %d ", twoChildCnt(root));

    printf("\n");
    printf("count of leaf node is %d ", leafNodeCnt(root));

    printf("\n");
    printf("Node having only 1 child count is %d ", oneChildNode(root));

    return 0;
}
