
struct patient
{
	
	char id[10];
	int age;
	struct patient *next;
};

struct patient *creat(int n)
{
	struct patient *head,*p1,*p2;
	int i;
	p1=(struct patient *)malloc(len);
	scanf("%s %d",p1->id,&p1->age);
	p1->next=NULL;
	head=p1;
	p2=p1;i=1;
	do
	{
		p1=(struct patient *)malloc(len);
		scanf("%s %d",p1->id,&p1->age);
		p1->next=NULL;
		i++;
		p2->next=p1;
		p2=p1;
	}while(i<n);
	return(head);
}

struct patient *tiao(struct patient *head,int n)
{
	struct patient *p1;
	int t,i;
	char s[10];
	p1=head;
   for(i=0;i<n;i++)
   {
	   p1=head;
	do
	{
		if(p1->age<(p1->next)->age&&(p1->next)->age>=60)
		{
			t=p1->age;
			p1->age=(p1->next)->age;
			(p1->next)->age=t;
			strcpy(s,p1->id);
			strcpy(p1->id,(p1->next)->id);
			strcpy((p1->next)->id,s);
		}
		p1=p1->next;
	}while(p1->next);
   }

	return(head);
}

void print(struct patient *head)
{
	struct patient *p;
	p=head;

	do
	{
		printf("%s\n",p->id);
		p=p->next;
	}while(p);
}

void main()
{
	struct patient *head;
	int n;
	scanf("%d",&n);
	head=creat(n);
	head=tiao(head,n);
	print(head);
}
	