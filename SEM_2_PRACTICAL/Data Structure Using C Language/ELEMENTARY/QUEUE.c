// Queue

#include <stdio.h>
#include <conio.h>

#define SIZE 10

int front = -1, rear = -1;

int queue[SIZE];

void main()
{
    int choice;

    void insert();
    void delet();
    void display();
    void search();
    void update();

    do
    {
        clrscr();

        printf("\n\t1. Insert");
        printf("\n\t2. Delete");
        printf("\n\t3. Display");
        printf("\n\t4. Search");
        printf("\n\t5. Update");
        printf("\n\t0. Exit");

        printf("\n\tEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 4:
            search();
            break;
        case 5:
            update();
            break;
        case 0:
            printf("\n\tEnd of Program");
            break;
        default:
            printf("\n\tInvalid Choice");
            break;
        }
        getch();
    } while (choice != 0);
}

void insert()
{
    if (rear == SIZE - 1)
    {
        printf("\n\tQueue is full / Overflow");
    }
    else
    {
        rear++;
        printf("\n\tEnter any number : ");
        scanf("%d", &queue[rear]);

        if (front == -1)
        {
            front = 0;
        }
    }
}

void delet()
{
    if (front == -1)
    {
        printf("\n\tQueue is Empty / Underflow");
    }
    else
    {
        printf("\n\tDelete Value = %d", queue[front]);

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    int a;

    if (front == -1)
    {
        printf("\n\tQueue is Empty or Underflow");
    }
    else
    {
        for (a = front; a <= rear; a++)
        {
            printf("\n\t%d", queue[a]);
        }
    }
}

void search()
{
    int a, sv;
    if (front == -1)
    {
        printf("\n\tQueue is Empty or Underflow");
    }
    else
    {
        printf("\n\tEnter Search Value : ");
        scanf("%d", &sv);

        for (a = front; a <= rear; a++)
        {
            if (queue[a] == sv)
            {
                printf("\n\tSearch value %d is found on position %d",
                       sv, a - front + 1);
                break;
            }
        }

        if (a == rear + 1)
        {
            printf("\n\tSearch value %d does not exists", sv);
        }
    }
}

void update()
{
    int a, val;
    if (front == -1)
    {
        printf("\n\tQueue is Empty / Underflow");
    }
    else
    {
        printf("\n\tEnter value to Update : ");
        scanf("%d", &val);

        for (a = front; a <= rear; a++)
        {
            if (queue[a] == val)
            {
                printf("\n\tOld Value : %d", queue[a]);

                printf("\n\tEnter New Value : ");
                scanf("%d", &queue[a]);

                printf("\n\tValue updated successfully.");

                break;
            }
        }

        if (a == rear + 1)
        {
            printf("\n\tValue %d does not exists", val);
        }
    }
}
