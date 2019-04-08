struct student
{
	long num;
	int scorec;
	int scorem;
	struct student *next;
};
struct student *creat(void)
{
	struct student *head,*p0,*p1,*p2;
	int i=0;
	head=(struct student *)malloc(len);
	head->next=NULL;
	scanf("%ld %d %d",&head->num,&head->scorec,&head->scorem);
	while(i<2)
	{
		p1=head;
		p0=(struct student *)malloc(len);
		scanf("%ld %d %d",&p0->num,&p0->scorec,&p0->scorem);
		while((p0->scorec+p0->scorem)<=(p1->scorec+p1->scorem)&&(p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if((p0->scorec+p0->scorem)>(p1->scorec+p1->scorem))
		{
			if(head==p1) head=p0;
			else p2->next=p0;
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
		i++;
	}
	return(head);
}  
struct student *sort(struct student *head,int n)
{
	struct student *p0,*p1,*p2;
	int i=3;
	while(i<n)
	{
		p1=head;
		p0=(struct student*)malloc(len);
	    scanf("%ld %d %d",&p0->num,&p0->scorec,&p0->scorem);
		while((p0->scorec+p0->scorem)<=(p1->scorec+p1->scorem)&&(p1->next!=NULL))
		{
			p1=p1->next;
		}
		if((p0->scorec+p0->scorem)>(p1->scorec+p1->scorem))
		{
			
			if(head==p1)
			{
				p2=p1->next;
				(*p2->next).num=p2->num;
				(*p2->next).scorec=p2->scorec;
				(*p2->next).scorem=p2->scorem;
				p2->num=p1->num;
				p2->scorec=p1->scorec;
				p2->scorem=p1->scorem;
				p1->num=p0->num;
				p1->scorec=p0->scorec;
				p1->scorem=p0->scorem;
			}
		    else if(p1==head->next)
			{
				(*p1->next).num=p1->num;
				(*p1->next).scorec=p1->scorec;
				(*p1->next).scorem=p1->scorem;
				p1->num=p0->num;
				p1->scorec=p0->scorec;
				p1->scorem=p0->scorem;
			}
			else 
			{
				p1->num=p0->num;
				p1->scorec=p0->scorec;
				p1->scorem=p0->scorem;
			}
		}
		free(p0);
		i++;
	}
	return(head);
}

void main()
{
	struct student *head,*p1,*p2;
	int n;
	scanf("%d",&n);
	head=creat();
	head=sort(head, n);
	p1=head->next;
	p2=p1->next;
    printf("%ld %d\n",head->num,(head->scorec+head->scorem));
	printf("%ld %d\n",p1->num,(p1->scorec+p1->scorem));
    printf("%ld %d",p2->num,(p2->scorec+p2->scorem));
}