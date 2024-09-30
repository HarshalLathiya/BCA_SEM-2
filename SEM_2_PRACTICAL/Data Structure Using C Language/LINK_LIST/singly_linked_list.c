#include <stdio.h>
#include <stdlib.h>
int cnt = 0;
struct node
{
    int data;
    struct node *next;
} *head, *tmp, *tail, *new;

void create_node()
{
    new = malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Memory failed \n");
        return;
    }
    else
    {
        new->next = NULL;
        printf("Enter the data to Be inserted : ");
        scanf("%d", &new->data);
        cnt++;
    }
}

void insert_at_front()
{
    create_node();
    if (head == NULL)
    {
        head = new;
        tail = new;
        new = NULL;
        return;
    }
    else
    {
        new->next = head;
        head = new;
        new = NULL;
        return;
    }
}

void insert_at_end()
{
    if (tail == NULL)
    {
        insert_at_front();
        return;
    }
    else
    {
        create_node();
        tail->next = new;
        tail = new;
        new = NULL;
        return;
    }
}

void insert_at_specific()
{
    int index;
    printf("Enter the Index : ");
    scanf("%d", &index);
    if (index == 1)
    {
        insert_at_front();
        return;
    }
    else
    {
        create_node();
        int i = 1;
        tmp = head;
        while (i < index - 1)
        {
            tmp = tmp->next;
            i++;
        }
        new->next = tmp->next;
        tmp->next = new;
        return;
    }
}

void display()
{
    if (head == NULL && tail == NULL)
    {
        printf("List is Empty ");
    }
    else
    {
        printf("Elements : \n");
        tmp = head;
        int i = 1;

        while (tmp != NULL)
        {
            printf("Node %d\t", i);
            printf("Value : %d \n", tmp->data);
            tmp = tmp->next;
            i++;
        }
    }
}

void delete_from_front()
{
    if (head == NULL)
    {
        printf("List is empty . \n");
        return;
    }
    else
    {
        // tmp = head;
        // head = tmp->next;
        // free(tmp);
        tmp = head->next;
        head = tmp;
        free(tmp);
        cnt--;
    }
}

void delete_at_end()
{
    if (head == NULL)
    {
        printf("Unable delete list is empty \n");
        return;
    }
    tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    // struct node *a = tmp->next;
    // tmp->next = NULL;
    // free(a);
    free(tail);
    tail = tmp;
    tail->next = NULL;
    cnt--;
}

void delete_at_specific()
{
    int ind;
    printf("Enter the Index to delete : ");
    scanf("%d", &ind);

    if (ind == 1)
    {
        delete_from_front();
        return;
    }
    else
    {
        tmp = head;
        int i = 1;
        while (i < ind - 1)
        {
            tmp = tmp->next;
            i++;
        }
        struct node *a = tmp->next->next;
        tmp->next = a;
        free(a);
        cnt--;
        return;
    }
}

void insert_after()
{
    int pos;
    int i = 1;

    printf("Enter the Index to insert AFTER : ");
    scanf("%d", &pos);

    if (head == NULL && tail == NULL)
    {
        insert_at_front();
    }

    else
    {
        if (pos == cnt)
        {
            insert_at_end();
        }
        else
        {
            tmp = head;
            while (i < pos)
            {
                tmp = tmp->next;
                i++;
            }
            create_node();
            new->next = tmp->next;
            tmp->next = new;
            free(new);
        }
    }
}

void get_length()
{
    int x = 0;
    // printf("The lenght of the link list is : %d \n", cnt);
    tmp = head;
    while (tmp != NULL)
    {
        x++;
        tmp = tmp->next;
    }
    printf("The lenght of the link list is : %d \n", x);
}

void reverse()
{
    struct node *current, *previous, *nextnode;
    previous = NULL;
    current = nextnode = head;

    while (nextnode != NULL)
    {
        nextnode = current->next;
        current->next = previous;
        previous = current;
        current = nextnode;
    }
    head = previous;
}

void short_linked_list()
{
    struct node *p1, *p2;
    int var;
    p1 = head;
    while (p1 != NULL)
    {
        p2 = p1->next;
        while (p2 != NULL)
        {
            if (p1->data > p2->data)
            {
                var = p1->data;
                p1->data = p2->data;
                p2->data = var;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }
}

void add_short()
{
    create_node();
    int key = new->data;

    if (head == NULL || key < head->data)
    {
        new->next = head;
        head = new;
        return;
    }
    else
    {
        tmp = head;
        while (tmp->next != NULL && tmp->next->data < key)
        {
            new->next = tmp->next;
            tmp->next = new;
        }
    }
}

int main()
{
    int choise;
    while (choise != 11)
    {
        printf("\n\n\t\t--------Menue : ---------\n ");
        printf(" 1. for insert at first : \n");
        printf(" 2. for insert at End : \n");
        printf(" 3. for insert at Specific position \n");
        printf(" 4. for insert after the node : \n");
        printf(" 5. for delete at front \n");
        printf(" 6. for delete at the end \n");
        printf(" 7. for delete at specify index \n");
        printf(" 8. for reverse the link list \n");
        printf(" 9. for length of the linked list \n");
        printf("10. for display the linked list \n");
        printf("11. for exit \n");
        printf("12. for shorting the linked list \n");
        printf("13. for adding the new node in shorted linked list \n");
        printf("\nEnter your choise : ");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            insert_at_front();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_at_specific();
            break;
        case 4:
            insert_after();
            break;
        case 5:
            delete_from_front();
            break;
        case 6:
            delete_at_end();
            break;
        case 7:
            delete_at_specific();
            break;
        case 8:
            reverse();
            break;
        case 9:
            get_length();
            break;
        case 10:
            display();
            break;
        case 11:
            break;
        case 12:
            short_linked_list();
            break;
        case 13:
            add_short();
            break;

        default:
            printf("Invalid choise please enter again  \n");
        }
    }
    return 0;
}