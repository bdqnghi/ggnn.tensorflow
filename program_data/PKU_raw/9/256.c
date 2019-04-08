struct rat
{
	char num[11];
	int age;
	struct rat *next;
};

int n;

struct rat *creat(void)
{
	struct rat *head,*p1,*p2;
	int i;
	p1=p2=(struct rat*)malloc(LEN);
	head=p1;
	scanf("%s%d",p1->num,&p1->age);
	for(i=2;i<=n;i++)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct rat*)malloc(LEN);
		scanf("%s%d",p1->num,&p1->age);
	}
	p2->next=p1;
	p1->next=NULL;
	return(head);
}

struct rat *sort(struct rat *head,int count)
{
	struct rat *p1,*p2,*p3,*temp;
	int i,j;
	for(j=1;j<=count-1;j++)
	{
		p1=head;
		p2=p1->next;
		p3=p2;
		for(i=0;i<count-j;i++)
		{
			if(p1->age<p2->age)
			{
				temp=p2->next;
				p2->next=p1;
				p1->next=temp;
				if(i==0)
				{
					head=p2;
					p2=temp;
				}
				else
				{
					p3->next=p2;
					p3=p2;
					p2=temp;
				}
			}
			else
			{
				if(i==0)
				{
					p3=head=p1;
					p1=p1->next;
					p2=p2->next;
				}
				else
				{
					p1=p1->next;
					p2=p2->next;
					p3=p3->next;
				}
			}
		}
	}
	return(head);
}

struct rat *del(struct rat *head,int t)
{
	struct rat *p1,*p2;
	int i;
	p1=head;
	for(i=1;i<=t;i++)
	{
		if(p1->age<60)
		{
			if(i==1)
				head=p1;
			p2=p1;
			p1=p1->next;
			continue;
		}
		if(p1->age>=60)
		{
			if(i==1)
			{
				head=p1->next;
				break;
			}
			p2->next=p1->next;
			break;
		}
	}
	return(head);
}




void main()
{
	struct rat *head,*p1,*s,*p2,*p3;
	int i,count=0,t;
	scanf("%d",&n);
	t=n;
	head=creat();
	p1=head;
	p3=p2=(struct rat*)malloc(LEN);
	for(i=1;i<=n;i++)
	{
		if(p1->age>=60)
		{
			if(count==0)
				s=p2;
			p2->age=p1->age;
			strcpy(p2->num,p1->num);
			p3->next=p2;
			p3=p2;
			p2=(struct rat*)malloc(LEN);
			count++;
		}
		p1=p1->next;
	}
	s=sort(s,count);
	for(i=1;i<=count;i++)
	{
		head=del(head,t);
		t=t-1;
	}
	p1=s;
	for(i=1;i<=count;i++)
	{
		printf("%s\n",p1->num);
		p1=p1->next;
	}
	p1=head;
	for(i=1;i<=(n-count);i++)
	{
		printf("%s\n",p1->num);
		p1=p1->next;
	}
}
