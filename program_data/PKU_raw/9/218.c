
struct pat
{
	char id[11];
	int age;
	struct pat *next;
};

void find(struct pat *head,struct pat *s)
{
	struct pat *pre=head,*p=pre->next;
	while(p!=NULL&&s->age<=p->age)
	{
		pre=p;
		p=p->next;
	}
	pre->next=s;
	s->next=p;
}

void sort(struct pat *head,int x,char name[11])
{
	struct pat *pre=head,*p=pre->next,*s;
	s=(struct pat*)malloc(sizeof(struct pat));
	s->age=x;
	strcpy(s->id,name);
	s->next=NULL;
	if(x>=60) find(head,s);
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

int main()
{

	struct pat *head,*p;
	int n,x,i;
	char name[11];
	head=(struct pat*)malloc(sizeof(struct pat));
	head->next=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",name,&x);
		sort(head,x,name);
	}
	p=head->next;
	while(p!=NULL)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
	return 0;
}