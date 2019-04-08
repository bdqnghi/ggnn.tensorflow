

void main()
{
	struct student
	{
		char name[30];//??????????\0
		int as;
		int cs;
		char pos;
		char xibu;
        int paper;
		int money;
	}stu[100],*p;
	p=stu;
    int i,n,sum=0,mark,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++,p++)
	{   
		scanf("%s%d%d %c %c%d",&p->name,&p->as,&p->cs,&p->pos,&p->xibu,&p->paper);// ???%C?????
		p->money=0;
		if(p->as>80&&p->paper>=1)
			p->money=p->money+8000;
		if(p->as>85&&p->cs>80)
            p->money=p->money+4000;
		if(p->as>90)
            p->money=p->money+2000;
		if(p->as>85&&p->xibu=='Y')
            p->money=p->money+1000;
		if(p->pos=='Y'&&p->cs>80)
            p->money=p->money+850;
		sum=sum+p->money;
	}
	p=stu;//????????
	for(i=0;i<n-1;i++,p++)
	{
		if(p->money>max)
		{
			max=p->money;
			mark=i;
		}
	}
	printf("%s\n%d\n%d",stu[mark].name,max,sum);

}