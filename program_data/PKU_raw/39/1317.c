struct student
{
	char name[25];
	int  s1;
	int  s2;
	char yn1;
	char yn2;
	int  t;
	int sum;
	struct student*next;
};

struct student *creat(int n)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	p1=p2=(struct student *)malloc(sizeof (struct student));
	scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->yn1,&p1->yn2,&p1->t);
	head=NULL;
	
	for(i=0;i<n-1;i++)
	{
	
		if(i==0)head=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%s %d %d %c %c %d",p1->name,&p1->s1,&p1->s2,&p1->yn1,&p1->yn2,&p1->t);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return (head);
}

void print(struct student*head)
{
	struct student*p;
	p=head;
	if(head!=NULL)
		do
		{
			printf("%s %d %d %c %c %d\n",p->name,p->s1,p->s2,p->yn1,p->yn2,p->t);
			p=p->next;
		}while(p!=NULL);
}

main()
{
	int n,i,j,k,t,s,max,r=0;
	struct student *p1,*p2,*p3,*p;
	struct student g;
	scanf("%d",&n);
	p=creat(n);
	//print(p);
    p1=p;p2=p;p3=p;
	for(i=0;i<n;i++)
	{
		p1->sum=0;
		if((p1->s1>80)&&(p1->t>=1)) p1->sum=p1->sum+8000;
		if((p1->s1>85)&&(p1->s2>80)) p1->sum=p1->sum+4000;
		if(p1->s1>90) p1->sum=p1->sum+2000;
		if((p1->yn2=='Y')&&(p1->s1>85)) p1->sum=p1->sum+1000;
		if((p1->yn1=='Y')&&(p1->s2>80)) p1->sum=p1->sum+850;
		p1=p1->next;
	}
   /*	for(i=0,p1=p;i<n;i++)
	{
		printf("\n%s %d\n",p1->name,p1->sum);
		p1=p1->next;
	}*/
	for(max=0,p1=p,p2=p,i=0;i<n;i++)
	{
		
		if(p1->sum>max) {max=p1->sum;p2=p1;}
		
		p1=p1->next;
	}
	/*for(i=0,p1=p->next,p2=p;i<n;i++)
	{
		
		if(p1->sum==max) break;
			p2=p2->next;
		p1=p1->next;
	}*/
	for(i=0,p1=p,s=0;i<n;i++)
	{
		s=s+p1->sum;
		p1=p1->next;
	}

	printf("%s\n%d\n%d\n",p2->name,p2->sum,s);
    for(i=0,p1=p;i<n;i++)
	{
		p=p->next;
		free(p1);
		p1=p;
	}
	
}
