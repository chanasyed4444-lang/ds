#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL, *last = NULL, *temp, *t1;

/* INSERT FIRST */
void insert_first()
{
    int e;

    printf("\nenter element: ");
    scanf("%d", &e);

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = e;

    if (start == NULL)
    {
        start = last = temp;
        temp->link = start;
    }
    else
    {
        temp->link = start;
        start = temp;
        last->link = start;
    }
}

/* INSERT LAST */
void insert_last()
{
    int e;

    printf("\nenter element: ");
    scanf("%d", &e);

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = e;

    if (start == NULL)
    {
        start = last = temp;
        temp->link = start;
    }
    else
    {
        last->link = temp;
        temp->link = start;
        last = temp;
    }
}

/* INSERT MIDDLE */
void insert_middle()
{
    int e, pos, i = 1;

    printf("\nenter element: ");
    scanf("%d", &e);

    printf("enter position: ");
    scanf("%d", &pos);

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = e;

    if (start == NULL || pos == 1)
    {
        insert_first();
        return;
    }

    t1 = start;

    while (i < pos - 1 && t1->link != start)
    {
        t1 = t1->link;
        i++;
    }

    temp->link = t1->link;
    t1->link = temp;

    if (t1 == last)
        last = temp;
}

/* DISPLAY */
void display()
{
    if (start == NULL)
    {
        printf("\nlist is empty");
        return;
    }

    printf("\n\nlinked list elements are:\n");

    t1 = start;

    do
    {
       printf("%d -> ", t1->data);
        t1 = t1->link;
    } while (t1 != start);

    printf("\n");
}

/* MAIN */
int main()
{
    int ch;

    while (1)
    {
        printf("\n\n==============================");
        printf("\n CIRCULAR LINKED LIST MENU");
        printf("\n1. Insert First");
        printf("\n2. Insert Last");
        printf("\n3. Insert Middle");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\n==============================");

        printf("\nenter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insert_first(); break;
            case 2: insert_last(); break;
            case 3: insert_middle(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("\ninvalid choice");
        }
    }
}
