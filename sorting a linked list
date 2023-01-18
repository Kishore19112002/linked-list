#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *nxt;
};
struct node *head=NULL;
void insert()
{
struct node *new,*temp;int a;
new=(struct node*)malloc(sizeof(struct node*));
printf("ENTER THE DATA TO INSERT :\n");
scanf("%d",&a);
new->data=a;
if(head==NULL)
{
new->nxt=NULL;
head=new;
}
else
{
temp=head;
while(temp->nxt!=NULL)
{
temp=temp->nxt;
}
new->nxt=NULL;
temp->nxt=new;
}
}
void sorting()
{
struct node *x,*y;int tmp;
for(x=head;x->nxt!=NULL;x=x->nx t)
{
for(y=x->nxt;y!=NULL;y=y->nxt)
{
if(x->data>y->data)
{
tmp=x->data;
x->data=y->data;
y->data=tmp;
}
}
}
}
void disp()
{
struct node *tp;
tp=head;
while(tp->nxt!=NULL)
{
printf("%d--->",tp->data);
tp=tp->nxt;
}
printf("%d",tp->data);
}
void main()
{
int ch,b=1;
while(b==1)
{
printf("\nENTER YOUR CHOICE");
printf("\n1.INSERT\n2.SORT\n3.DISPLAY\n4.EXIT\n") ;
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
sorting();
break;
case 3:
disp();
break;
case 4:
b=0;
break;
}
}
}
