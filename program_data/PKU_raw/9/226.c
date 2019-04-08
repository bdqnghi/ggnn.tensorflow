void main()
{int n,i,j,t;
scanf("%d",&n);
struct patient
{char id[10];
int age;
struct patient *next;
} *p1,*p2,*head,*p[100],*temp;
p1=p2=head=(struct patient *)malloc(sizeof(struct patient));
scanf("%s%d",p1->id,&p1->age);
for(i=2;i<=n;i++)
{p1=(struct patient *)malloc(sizeof(struct patient));
scanf("%s%d",p1->id,&p1->age);
p2->next=p1;
p2=p1;
}
p2->next=NULL;
  for(t=0,p1=head;p1!=NULL;p1=p1->next)
    if(p1->age>=60)
	{  p[t]=p1;
	   t++;
	}
   
	for(j=0;j<t-1;j++)
		for(i=0;i<t-j-1;i++)
			if(p[i]->age<p[i+1]->age)
			{temp=p[i];
			p[i]=p[i+1];
			p[i+1]=temp;
			}

for(i=0;i<=t-1;i++)
printf("%s\n",p[i]->id);

for(p1=head;p1!=NULL;p1=p1->next)
if(p1->age<60)
 printf("%s\n",p1->id);









}