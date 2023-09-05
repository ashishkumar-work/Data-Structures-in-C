//Program of single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
void display();
void count();
void search();
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
struct node *addatpos(struct node *start, int data, int pos);
struct node *del(struct node *start, int data);
struct node *reverse(struct node *start);

int main(){
    struct node *start=NULL;
    int choice,data,item,pos;
    while(1){
        printf("1.Create List\n");
        printf("2.Display\n");
        printf("3.Count \n");
        printf("4.Search\n");
        printf("5.Add to empty list / Add at beginning\n");
        printf("6.Add at end\n");
        printf("7.Add after node\n");
        printf("8.Add before node\n");
        printf("9.Add at position\n");
        printf("10.Delete\n");
        printf("11.Reverse\n");
        printf("12.Ouit\n\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
    

    switch (choice)
    {
    case 1:
    start = create_list(start);
    break;
    
    case 2:
    display(start);
    break;

    case 3:
    count(start);
    break;

    case 4:
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    search(start, data);
    break;

    case 5:
    printf("Enter the elememt to be inserted: ");
    scanf("%d", &data);
    start = addatbeg(start, data);
    break;

    case 6:
    printf("Enter the element to be instered: ");
    scanf("%d", &data);
    start = addatend(start, data);

    case 7:
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the element after which to be insert: ");
    scanf("%d", &item);
    start = addafter(start, data, item);
    break;

    case 8:
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the element before which to insert: ");
    scanf("%d", &item);
    start = addbefore(start, data, item);
    break;

    case 9:
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the position at which to insert: ");
    scanf("%d", &pos);
    start = addatpos(start, data, pos);
    break;

    case 10:
    printf("Enter the element to be deleted: ");
    scanf("%d", &data);
    start = del(start, data);
    break;

    case 11:
    start = reverse(start);
    break;

    case 12:
    exit(1);


    default:
    printf("Wrong choice !");
        break;
    } //End of Switch
  } //End of while
}//End of main

/*Start Of Display*/
void display(struct node *start){
    struct node *p;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    p = start;
    printf("List is : ");
    while(p!=NULL){
        printf("%d  ", p->info);
        p = p->link;
    }
    printf("\n\n");
}//End of Display

/*Start of Count*/
void count(struct node *start){
    struct node *p;
    int cnt = 0;
    p = start;
    while (p!=NULL)
    {
        p = p->link;
        cnt++;
    }
    printf("Number of elements are %d\n\n", cnt);
}//End of Count 

/*Start of serach*/
void search(struct node *start, int item){
    struct node *p = start;
    int pos = 1;
    while (p!=NULL)
    {
        if(p->info == item){
            printf("item %d found at the position %d\n\n", item,pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("Item %d not found in the list\n\n", item);
}//End of the search

/*Start of addatbeg()*/
struct node *addatbeg(struct node *start, int data){
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;
}//End of addatbeg()

/*Start of addatend()*/
struct node *addatend(struct node *start, int data){
    struct node *p, *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    p = start;
    while(p->link!=NULL){
        p = p->link;
    }
    p->link = tmp;
    tmp->link = NULL;
    return start;
}//End of addatend()

/*Start of addafter*/
struct node *addafter(struct node *start, int data, int item){
    struct node *tmp, *p;
    p = start;
    while(p!=NULL){
        if (p->info == item){
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link = p->link;
            p->link = tmp;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the the list\n", item);
    return start;
}//End of addafter

/*Start of addbefore*/
struct node *addbefore(struct node *start, int data, int item){
    struct node *tmp, *p;
    if (start == NULL){
        printf("List is empty\n");
        return start;
    }//IF THE DATA IS TO BE INSERTED BEFORE THE FIRST NODE
    
    if (item == start->info){
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link = tmp;
        start = tmp;
        return start;
    }
    p = start;
    while(p->link != NULL){
        if (p->link->info == item){
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link = p->link;
            p->link = tmp;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the list\n", item);
    return start;
}//End of addbefore()

/*Start of addatpos()*/
struct node *addatpos(struct node *start, int data, int pos){
    struct node *tmp, *p;
    int i;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    if(pos == 1){
        tmp->link = start;
        start = tmp;
        return start;
    }
    p = start;
    for(i=1; i<pos-1 && p!=NULL; i++){
        p = p->link;
    }
    if(p == NULL){
        printf("There are less than %d elements\n", pos);
    }
        else{
            tmp->link = p->link;
            p->link = tmp;

        }
        return start;
}//End of addatpos()

/*Start of create_list()*/
struct node *create_list(struct node *start){
    int i,n,data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    start = NULL;
    if(n==0){
        return start;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &data);
    start = addatbeg(start, data);
    for(i=2; i<=n; i++){
        printf("Enter the next element to be interted: ");
        scanf("%d", &data);
        start = addatend(start, data);
    }
    printf("\n");
    return start;
}//End of create_list()

/*Start of del()*/
struct node *del(struct node *start, int data){
       struct node *tmp, *p;
       if(start == NULL){
        printf("The list is empty\n");
        return start;
       }
       if(start->info == data){      //DELETION OF FIRST NODE
        tmp = start;
        start = start->link;
        free(tmp);
        return start;
       }
       p = start;    //DELETION IN BETWEEN OR AT THE END
       while(p->link != NULL){
        if(p->link->info == data){
            tmp = p->link;
            p->link = tmp->link;
            free(tmp);
            return start;
        }
        p = p->link;
       }
       printf("Element %d not found\n", data);
       return start;
}//End of del()

/*Start of reverse()*/
struct node *reverse(struct node *start){
    struct node *prev, *ptr, *next;
    prev = NULL;
    ptr = start;
    while(ptr != NULL){
        
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}//End of reverse()