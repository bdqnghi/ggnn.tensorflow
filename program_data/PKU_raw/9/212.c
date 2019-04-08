int n;
struct student 
{
	int a;
	struct student *next;
	char num[20];
};

struct student *creat()
{
	struct student *head,*headtwo,*p1,*p2,*p3,*p4;
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%s",p1->num);
	scanf("%d",&p1->a);
	head=(struct student *)malloc(sizeof(struct student));
	head->next=p1;
	p2=head;
	p1->next=NULL;
	headtwo=(struct student *)malloc(sizeof(struct student));p4=headtwo;p4->next=NULL;
	int i,t=0;
	for (i=0;i<n-1;i++)
	{
		t=0;
		p3=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p3->num);
	    scanf("%d",&p3->a);
		if(p3->a>=60)
		{
			p2=head;
			p1=head->next;
			while(p1!=NULL)
			{
				if(p3->a>p1->a)
				{
					p3->next=p1;p2->next=p3;t=1;break;
				}
				p2=p1;
				p1=p1->next;
			}
			if(t==0) {p2->next=p3;p3->next=NULL;}
		}
		if(p3->a<60)
		{
			p4->next=p3;
			p4=p3;
			p4->next=NULL;
		}
	}
	p1=head;
	while(p1->next!=NULL)
	{
		p1=p1->next;
	}
	p1->next=headtwo->next;
	return head;
}
void main()
{
	scanf("%d",&n);
	struct student *head,*p;
	head=creat();
	p=head->next;
	while (p!=NULL)
	{
		printf("%s\n",p->num);
		p=p->next;
	}
}


				
	
		



