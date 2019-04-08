
struct patient
{
	char id[10];
	int age;
	struct patient *next;
};

struct patient *sort(struct patient *head,char d[10],int a)
{
	struct patient *pp,*p,*s;
	p=head;
	pp=p;
	p=p->next;
	s=(struct patient *)malloc(LEN);
	strcpy(s->id,d);
	s->age=a;
	while(p!=NULL&&p->age>=a)
	{
		pp=p;
		p=p->next;
	}
	s->next=p;
	pp->next=s;
}

struct patient *creat(struct patient *hhead,char d[10],int a)
{
	struct patient *p,*pp,*s;
	p=hhead;
	pp=p;
	p=p->next;
	while(p!=NULL)
	{
		pp=p;
		p=p->next;
	}
	s=(struct patient*)malloc(LEN);
	s->age=a;
	strcpy(s->id,d);
	s->next=p;
	pp->next=s;
}

void main()
{
	struct patient *head,*hhead,*p1,*p2;
	int n,a,i;
	char d[10];
	scanf("%d",&n);
	head=(struct patient*)malloc(LEN);
	head->next=NULL;
	hhead=(struct patient*)malloc(LEN);
	hhead->next=NULL;
	for(i=0;i<n;i++)
	{
		scanf("%s %d\n",d,&a);
		if(a>=60)
			sort(head,d,a);
		else creat(hhead,d,a);
	}
	p1=head->next;
	p2=hhead->next;
	while(p1!=NULL)
	{
		printf("%s\n",p1->id);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		printf("%s\n",p2->id);
		p2=p2->next;
	}
}

