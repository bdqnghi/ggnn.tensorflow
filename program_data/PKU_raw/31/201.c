struct student
{char num[1000];
struct student *next;
};
void main()
{struct student *head,*p1,*p,*p2,*end;
int n=0;
p=p1=p2=(struct student*)malloc(LEN);
gets(p1->num);
head=NULL;
while(strcmp(p1->num,"end")!=0)
 {n=n+1;
  head=p1;
  if(n==1) p1->next=NULL;
  else p1->next=p2;
  p2=p1;
  p1=(struct student*)malloc(LEN);
  gets(p1->num);
}
p=head;
if (head != NULL)
{do
{puts(p->num);
p=p->next;}
while(p != NULL);}	
}