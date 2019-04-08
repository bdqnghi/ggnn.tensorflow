

struct student
{
	int num;
	int chi;
	int math;
};



int main()
{
	int n,i,e=0,f=0,g=0,a=0,b=0,c=0;
	scanf("%d",&n);
	struct student*stu=(struct student*)malloc(sizeof(int)*3*n);
	int*sz=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].chi,&stu[i].math);
    	sz[i]=stu[i].chi+stu[i].math;
	}
    for(i=0;i<n;i++)
	{
		if(sz[i]>sz[a])
		{
			a=i;
			e=stu[i].num;
		}
	}
	printf("%d %d\n",e,sz[a]);
    for(i=0;i<n;i++)
	{
		if(i==a)
		{
			continue;
		}
		if(sz[i]>sz[b])
		{
			b=i;
			f=stu[i].num;
		}
	}
	printf("%d %d\n",f,sz[b]);
    for(i=0;i<n;i++)
	{
		if(i==a||i==b)
		{
			continue;
		}
		if(sz[i]>sz[c])
		{
			c=i;
			g=stu[i].num;
		}
	}
    printf("%d %d",g,sz[c]);
	free(sz);
	return 0;
}