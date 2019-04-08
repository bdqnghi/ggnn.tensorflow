struct 
{char name[20];
int final;
int cla;
char gan;
char west;
int thesis;
int money;
}stu[120];
void main()
{
	int n,i,j,sum=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
		scanf("%s %d %d %c %c %d\n",&stu[i].name,&stu[i].final,&stu[i].cla,&stu[i].gan,&stu[i].west,&stu[i].thesis);
	scanf("%s %d %d %c %c %d",&stu[n-1].name,&stu[n-1].final,&stu[n-1].cla,&stu[n-1].gan,&stu[n-1].west,&stu[n-1].thesis);
	for(i=0;i<n;i++)
		stu[i].money=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].final>80&&stu[i].thesis>=1)
			stu[i].money=stu[i].money+8000;
		if(stu[i].final>85&&stu[i].cla>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].final>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].final>85&&stu[i].west=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].cla>80&&stu[i].gan=='Y')
			stu[i].money=stu[i].money+850;
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{
		if(stu[j].money<stu[j+1].money)
		{
			stu[119]=stu[j];
			stu[j]=stu[j+1];
			stu[j+1]=stu[119];
		}
	}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+stu[i].money;
	}
	printf("%s\n",stu[0].name);
	printf("%d\n",stu[0].money);
	printf("%d\n",sum);
}