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
void specific()
{
struct node *tp,*new1;int a,pos;tp=head;
new1 =(struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA :\n");
scanf("%d",&a);
printf("ENTER THE POSITION TO INSERT :");
scanf("%d",&pos);
for(int i=0;i<(pos-1);i++)
{
tp=tp->next;
}
new1->data=a;
new1->next=tp->next;
tp->next=new1;
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
printf("\n1.INSERT\n2.SPECIFIC POSITION\n3.DISPLAY\n4.EXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
specific();
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
