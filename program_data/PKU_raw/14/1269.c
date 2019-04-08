void main()
{
	int i,j,k,m,n,max;
	struct stu
	{
		int xh;
		int yw;
		int sx;
		int zf;
		struct stu *next;
	};
	struct stu *p1,*p2,*head;
	scanf("%d",&n);
	p2=head=p1=(struct stu *)malloc(sizeof(struct stu));
	scanf("%d %d %d",&p1->xh,&p1->yw,&p1->sx);
	p1->zf=p1->yw+p1->sx;
	for(i=1;i<n;i++)
	{
		p1=(struct stu *)malloc(sizeof(struct stu));
		scanf("%d %d %d",&p1->xh,&p1->yw,&p1->sx);
		p1->zf=p1->yw+p1->sx;
		p2->next=p1;
		p2=p1;
	}
	for(j=0;j<3;j++)
	{
		p1=head;
		max=0;
		for(i=0;i<n;i++)
		{
			max=max>p1->zf?max:p1->zf;
			p1=p1->next;
		}
		p1=head;
		for(i=0;i<n;i++)
		{
			if(max==p1->zf)
			{
				printf("%d %d\n",p1->xh,p1->zf);
				p1->zf=0;
				break;
			}
			p1=p1->next;
		}
	}
}