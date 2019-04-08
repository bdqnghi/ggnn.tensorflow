struct stu
{long num;
int y;
int s;
int t;
struct stu * next;
};
void main()
{
	struct stu * head,*p1,*p2;
	int n,i;
	scanf("%d",&n);
	p1=p2=(struct stu *)malloc(L);
    scanf("%ld %d %d",&p1->num,&p1->y,&p1->s);
	head=p1;
	for(i=1;i<n;i++)
	{
		p1=(struct stu*) malloc(L);
		scanf("%ld %d %d",&p1->num,&p1->y,&p1->s);
		p1->t=p1->y+p1->s;
		p2->next=p1;
		p2=p1;
	}
	p2->next=0;
	int k=0;
	while(k<3)
	{
		p2=head;
	    for(;p2!=0;p2=p2->next)
		{
			for(p1=p2->next;p1!=0;)
			{
				if(p2->t<p1->t) break;
	 	        else p1=p1->next;
			}
			if(p1==0) {printf("%ld %d\n",p2->num,p2->t);break;}
		}
		k=k+1;p2->t=0;
	}
}