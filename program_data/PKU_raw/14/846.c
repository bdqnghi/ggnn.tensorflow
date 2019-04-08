//#define NULL 0
struct student
{
	int num;
	int ch;
	int math;
	int sum;
	struct student*next;
};

struct student *creat(int n)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	p1=p2=(struct student *)malloc(sizeof (struct student));
	scanf("%d %d %d",&p1->num,&p1->ch,&p1->math);
	//head=NULL;
	for(i=0;i<n-1;i++)
	{
		if(i==0)head=p1;
		
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%d %d %d",&p1->num,&p1->ch,&p1->math);
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
			printf("%d %d %d",p->num,p->ch,p->math);
			p=p->next;
		}while(p!=NULL);
}

main()
{
	int n,i,j,k,t;
	struct student *p1,*p2,*p3,*p;
	struct student g;
	scanf("%d",&n);
	p=creat(n);p1=p;
	
	p2=p;p3=p;
	for(i=0;i<n;i++)
	{
		p1->sum=p1->math+p1->ch;
        //printf("%d\n",p1->sum);
		p1=p1->next;
		
	}
    p1=p;p2=p;printf("\n\n");
	i=0;
	while(i<3)
	{
		p1=p2->next;
		while(p1!=NULL)
		{
			
			if((p2->sum)<(p1->sum)) 
			{
				g.num=p2->num;
				p2->num=p1->num;
				p1->num=g.num;
                g.sum=p2->sum;
				p2->sum=p1->sum;
				p1->sum=g.sum;
			}
			p1=p1->next;
			
		}
		
		p2=p2->next;i=i+1;
		
	}
	p1=p;p2=p;
	//printf("\n\n");
    /*for(i=0;i<n;i++)
	{
		
        printf("%d\n",p1->sum);
		p1=p1->next;
		
	}*/
	p1=p;
	for(i=0;i<3;i++)
	{
		
		printf("%d %d\n",p1->num,p1->sum);
		p1=p1->next;
	}
}
