struct arr
{
	char id[10];
	int age;
	struct arr *next;
};
int n;
struct arr *create(int m)                 
{
	struct arr *head;
	struct arr *p1,*p2;
	n=1;
	p1=p2=(struct arr *) malloc(LEN);
	scanf("%s %d",&p1->id,&p1->age);                            
	head=p1;
	while(n<m)
	{
		p1=(struct arr *)malloc(LEN);
		p2->next=p1;
		n++;
		p2=p1;
		scanf("%s %d",&p1->id,&p1->age);                         
	}
	p1->next=NULL;
	return(head);
}
struct arr *del(struct arr *head,long int dnum)
{
	struct arr *p1,*p2;
	p1=p2=head;
	while(p1!=NULL&&p1->age==dnum)
		{
			head=p1->next;
			p2=head;
			free(p1);
			p1=head;
		}
	while(p1!=NULL)
	{
			p2=p1;
			p1=p1->next;
		while(p1!=NULL&&p1->age==dnum)
		{
			p2->next=p1->next;
			free(p1);
			p1=p2->next;
		}
		
	}
	return(head);
}
void print(struct arr *head)
{
	struct arr *p;
	p=head;
	while(p!=NULL)
	{
		if(p==head)
		printf("%s\n",p->id);
		else printf("%s\n",p->id);        
		p=p->next;
	}
}
void freelist(struct arr *head)
	{
		struct arr *p=head ;
		if(head!=NULL)
		{
		while(p!=NULL)
		{
			head=head->next;
			free(p);
			p=head;
		}
		}
}
void main()
{
	struct arr *head,*p1;
	int m,max=0;
	scanf("%d",&m);
	head=create(m);
	for(;;)
	{
		max=0;
		for(p1=head;p1!=NULL;p1=p1->next)
		{
			max=(max>p1->age)?max:p1->age;
		}
		if(max>=60)
		{
			for(p1=head;p1!=NULL;p1=p1->next)
			{
				if(p1->age==max)
					printf("%s\n",p1->id);
			}
			head=del(head,max);
		}
		else break;
	}
	print(head);
	freelist(head);
}

