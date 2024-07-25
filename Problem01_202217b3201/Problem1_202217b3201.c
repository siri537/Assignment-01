#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int a,b[MAX], n, p, e, f, i, pos;

void create();
void insert();
void deletion();
void search();
void display();

int main()
{
    int ch;
    char g='y';
    do
    {
        printf("\n Main Menu");
        printf("\n 1. Create \n 2. Delete \n 3. Search \n 4. Insert \n 5. Display\n 6. Exit \n");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: create();
                    break;
            case 2: deletion();
                    break;
            case 3: search();
                    break;
            case 4: insert();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
                    break;
            default: printf(" \n Enter the correct choice:");
        }

        printf("\n Do you want to continue(y/n): ");
        scanf("\n%c", &g);
    } while(g=='y'||g=='Y');

    return 0;
}

void create() 
{
    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) 
    {
        printf("\n Enter the Element %d: ", i+1);
        scanf("%d", &b[i]); 
    }
}

void deletion() 
{
    printf("\n Enter the position you want to delete: ");
    scanf("%d", &pos);

    if(pos>=n) 
    {
        printf("\n Invalid Location::");
    }
    else 
    {
        for(i=pos+1; i<n; i++) 
        {
            b[i-1]=b[i];
        }
        n--;
    }

    printf("\n The Elements after deletion: ");
    for(i=0; i<n; i++) 
    {
        printf("\t%d", b[i]);
    }
}

void search() 
{
    printf("\n Enter the Element to be searched: ");
    scanf("%d", &e);
    for(i=0; i<n; i++) 
    {
        if(b[i]==e) 
        {
            printf("Value is in the %d Position", i);
            break;
        }
    }

    if(i==n)
        printf("Value %d is not in the list::", e);
}

void insert() 
{
    printf("\n Enter the position you need to insert: ");
    scanf("%d", &pos);

    if(pos>n) 
    {
        printf("\n Invalid Location::"); 
    }
    else
    {
        printf("\n Enter the element to insert: ");
        scanf("%d", &p);

        for(i=n-1; i>=pos-1; i--)
        {
            b[i+1]=b[i]; 
        }

        b[pos-1]=p;
        n++; 
    }

    printf("\n The list after insertion: ");
    display(); 
}

void display() 
{
    printf("\n The Elements of The list ADT are:");
    for(i=0; i<n; i++) 
    {
        printf("\n%d", b[i]);
    }
}
