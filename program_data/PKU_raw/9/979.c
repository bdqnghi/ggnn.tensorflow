struct patient
{
char ID[10];
int age;
struct patient *next;
};

void sort(struct patient * head,struct patient * q)
{
struct patient *pre=head,*p=pre->next,*s;
s=(struct patient *)malloc(sizeof(struct patient));
s->age=q->age;strcpy(s->ID,q->ID);
s->next=NULL;
if(q->age>=60)
{
while((p!=NULL)&&(q->age<=p->age))
{
pre=p;
p=p->next;
}
pre->next=s;
s->next=p;
}
else
{
while(p!=NULL)
{
pre=p;
p=p->next;
}
pre->next=s;
s->next=p;
}
}

void print(struct patient *head)
{
struct patient *p;
p=head;
while(p!=NULL)
{
printf("%s\n",p->ID);
p=p->next;
}

}
void main()
{
int n,i;
struct patient *head;
struct patient *p;
head=(struct patient *)malloc(sizeof(struct patient));
head->next=NULL;
scanf("%d",&n);
for (i=1;i<=n;i++)
{	 
p=(struct patient *)malloc(sizeof(struct patient));
scanf("%s %d",p->ID,&p->age);
sort(head,p);
}
print(head->next);
}