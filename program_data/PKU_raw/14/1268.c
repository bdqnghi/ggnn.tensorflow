void main()
{
	struct student
	{
		int xh;
		int yw;
		int sx;
		int zf;
		struct student *next;
	};
	int i,j,k,n,m,max;
	struct student *p1,*p2,*head;
	scanf("%d",&n);
	head=p1=p2=(struct student *)malloc(sizeof(struct student));
	scanf("%d %d %d",&p1->xh,&p1->yw,&p1->sx);
	p1->zf=p1->yw+p1->sx;
	for(i=2;i<=n;i++)
	{
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%d %d %d",&p1->xh,&p1->yw,&p1->sx);
		p1->zf=p1->yw+p1->sx;
		p2->next=p1;
		p2=p1;
		if(i==n)p1->next=0;
	}
	p1=head;
	for(i=1;i<=3;i++)
	{
		p1=head;
		max=0;
		for(j=1;j<=n;j++)
		{
			max=max>p1->zf?max:p1->zf;
			p1=p1->next;
		}
		//printf("%d\n",max);
		p1=head;
		for(j=1;j<=n;j++)
		{
			if(p1->zf==max)
			{
				printf("%d %d\n",p1->xh,p1->zf);
				p1->zf=0;
				break;
				
			}
			p1=p1->next;
		}
	}
		
}