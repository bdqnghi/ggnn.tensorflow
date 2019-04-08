struct student
{
	int id,word,math,sum;
}stu[100000];
void main()
{
	int n,i=1,maxi;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d %d %d",&stu[i].id,&stu[i].word,&stu[i].math);
		stu[i].sum=stu[i].word+stu[i].math;
		i=i+1;
	}
	i=n;
	stu[n+1].sum=0;
	stu[n+2].sum=0;
	stu[n+3].sum=0;	
	stu[n+1].id=0;
	stu[n+2].id=0;
	stu[n+3].id=0;
	stu[n+1].math=0;
	stu[n+2].math=0;
	stu[n+3].math=0;
	stu[n+1].word=0;
	stu[n+2].word=0;
	stu[n+3].word=0;	
	while(i>=1)
	{
		if(stu[i].sum>=stu[n+1].sum)
		{	stu[n+1]=stu[i];
		maxi=i;
		}
		i=i-1;
	}
	printf("%d %d\n",stu[n+1].id,stu[n+1].sum);
	stu[maxi].sum=0;
	i=n;
	while(i>=1)
	{
		if(stu[i].sum>=stu[n+2].sum)
		{	stu[n+2]=stu[i];
		maxi=i;
		}
		i=i-1;
	}
	printf("%d %d\n",stu[n+2].id,stu[n+2].sum);
	stu[maxi].sum=0;
	i=n;
	while(i>=1)
	{
		if(stu[i].sum>=stu[n+3].sum)
			stu[n+3]=stu[i];
		i=i-1;
	}
	printf("%d %d\n",stu[n+3].id,stu[n+3].sum);
}
