struct student
{
	int num;
	int chinese;
	int math;
	struct student * next;
};
int m;
struct student * creat(int n)
{
	struct student * head;
	struct student * p1,*p2;
	m=0;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	scanf("%d%d%d",&p1->num,&p1->chinese,&p1->math);
	head=NULL;
	while(n--)
	{
		m=m+1;
		if(m==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%d%d%d",&p1->num,&p1->chinese,&p1->math);
	}
	p2->next=NULL;
	return(head);
}
		struct student * del(struct student * head,int num)
		{
			struct student *p1,*p2;
			p1=head;
			while(num!=p1->num&&p1->next!=NULL)
			{
				p2=p1;
				p1=p1->next;
			}
			if(num==p1->num)
			{
				if(p1==head)
					head=p1->next;
				else
					p2->next=p1->next;
				m=m-1;
			}
			return(head);
		}
int main()
{
	int max=0;
	int n,j;
	scanf("%d",&n);
	struct student *head,*p1,*p2;
	head=creat(n);
	for(j=0;j<3;j++)
	{
 		p1=head;
		p2=head;
		max=0;
		while(p1->next!=NULL)
		{
			if((p1->chinese+p1->math)>max)
			max=p1->chinese+p1->math,p2=p1;
				p1=p1->next;
		}		
		printf("%d %d\n",p2->num,(p2->chinese+p2->math));
		head=del(head,p2->num);
	}
}