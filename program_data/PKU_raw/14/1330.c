struct stu
{int xuehao,yuwen,shuxue,sum;
struct stu *next;
};
void max(struct stu *h)
{
	struct stu *a,*b,*c,*d;
	int m=0;
	a=h;
	do
	{
		c=a;
		a=a->next;
		if(m<a->sum)
		{
			m=a->sum;
			d=c;
			b=a;
		}
		}while(a->next);
		printf("%d %d\n",b->xuehao,b->sum);
		d->next=b->next;
		free(b);
}

void main()
{
	struct stu *head,*p,*q;
	int n,i;
	scanf("%d",&n);
	head=M;
	p=M;
	head->next=p;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&p->xuehao,&p->yuwen,&p->shuxue);
		p->sum=p->yuwen+p->shuxue;
	    q=M;
		p->next=q;
		p=q;
	}
	p->next=NULL;
	max(head);
	max(head);
	max(head);
}
