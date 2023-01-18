#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void insert()
{
struct node *newnd,*temp;int a;
newnd=(struct node*)malloc(sizeof(struct node*));
printf("ENTER THE DATA TO INSERT :\n");
scanf("%d",&a);
newnd->data=a;
if(head==NULL)
{
newnd->next=NULL;
head=newnd;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->n ext;
}
newnd->next=NULL;
temp->next=newnd ;
}
}
void rev()
{
struct node *cur,*nxt,*pre;
cur=head;
nxt=head;pre=NULL;
while(nxt!=NULL)
{
nxt=nxt->next;
cur->next=pre;
pre=cur;
cur=nxt;
}
head=pre;
}
void disp()
{
struct node *tp;
tp=head;
while(tp->next!=NULL)
{
printf("%d--->",tp->data);
tp=tp->next;
}
printf("%d",tp->data);
}
int main()
{
int ch,b=1;
while(b==1)
{
printf("\nENTER YOUR CHOICE");
printf("\n1.INSERT\n2.REVERSE\n3.DISPLAY\n4.EXIT\n") ;
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
rev();
break;
case 3:
disp();
break;
case 4:
b=0;
break;
}
}
return 0;
}
