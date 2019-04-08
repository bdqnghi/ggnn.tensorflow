struct w
{int id;
int ch;
int ma;
int sum;
struct w *next;
};
int i,n,k=1,max,s=0;
struct w *head,*p1,*p2;
struct w *make(void)
{
	head=null;
	scanf("%d",&n);
	p1=p2=(struct w *)malloc(len);
	scanf("%d %d %d",&p1->id,&p1->ch,&p1->ma);
	for(k=1;k<n;k++)
	{
		if(k==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct w *)malloc(len);
		scanf("%d %d %d",&p1->id,&p1->ch,&p1->ma);
	}
	p2->next=p1;//???
	p1->next=head;//????
	return head;
}
void main()
{
	head=make();

	while(s<3)
	{
		for(i=1;i<=n;i++)
		{if(i==n)p1=null;
		else 
		{p1->sum=p1->ch+p1->ma;
		p1=p1->next;
		}
		}
       p1=head;max=0;
		for(i=1;i<=n;i++)
		{if((p1->sum)>max)
		max=p1->sum;
		p1=p1->next;
		}
		p1=head;
		for(i=1;i<=n;i++)
		{p2=p1;
                               p1=p1->next;
		if(p1->ch+p1->ma==max)
		{printf("%d %d\n",p1->id,p1->sum);	
		if(p1==head)
			head=p1->next;
		else p2->next=p1->next;
		break;}
		}
		s++;
	}
}