
struct student
{
	char name[21];
	int qimo;
	int banji;
	char ganbu;
	char xibu;
	int paper;
}stu[101];

int main()
{
	int n,i,sum=0,max=0;
	int sz[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s ",&stu[i].name);
		scanf("%d %d ",&stu[i].qimo,&stu[i].banji);
		scanf("%c %c ",&stu[i].ganbu,&stu[i].xibu);
		scanf("%d",&stu[i].paper);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].qimo>80&&stu[i].paper>=1)
		{
			sz[i]=sz[i]+8000;
		}
		if(stu[i].qimo>85&&stu[i].banji>80)
		{
			sz[i]=sz[i]+4000;
		}
		if(stu[i].qimo>90)
		{
			sz[i]=sz[i]+2000;
		}
		if(stu[i].qimo>85&&stu[i].xibu=='Y')
		{
			sz[i]=sz[i]+1000;
		}
		if(stu[i].banji>80&&stu[i].ganbu=='Y')
		{
			sz[i]=sz[i]+850;
		}
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]>sz[max])
		{
			max=i;
		}
		sum=sum+sz[i];
	}
	printf("%s\n",stu[max].name);
	printf("%d\n",sz[max]);
	printf("%d",sum);
    return 0;
}

