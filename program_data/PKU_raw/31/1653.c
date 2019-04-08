int i,n,m,t;
struct stu
{ 
	char num[1000];
	struct stu *next;
};

struct stu *creat(void)
{
	struct stu *head;
	struct stu *p1,*p2;
	n=0;
	p1=p2=(struct stu *)malloc(len);
	gets(p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct stu *)malloc(len);
		gets(p1->num);
	}
	p2->next=NULL;
	return (head);
}

void print(struct stu *head)
{
	struct stu *p1,*p2;
	m=n;
	t=n;
	for(i=1;n>0;i++)
	{
		while(n>0)
		{
			if(n==t) p2=p1=head;
			else p2=p1;
			p1=p1->next;
			n=n-1;			
		}
		printf("%s\n",p2->num);
		n=m-i;
		t=n;
	}
}

void main()
{
	struct stu *head;
	head=creat();
	print(head);
}

			

  
