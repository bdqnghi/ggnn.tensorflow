struct student
{
	int n;
	int a;
	int b;
	int aver;
}stu[100000];
void main()
{
	int m,i,j,f,t;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d%d%d",&stu[i].n,&stu[i].a,&stu[i].b);
	}
	for(i=0;i<m;i++)
	{
		stu[i].aver=stu[i].a+stu[i].b;
	}
	for(i=0;i<3;i++)
		for(j=m-1-i;j>=0;j--)
		{
			if(stu[j].aver<stu[j+1].aver)
			{
				f=stu[j].aver;
                 stu[j].aver=stu[j+1].aver;
                 stu[j+1].aver=f;
				t=stu[j].n;
                 stu[j].n=stu[j+1].n;
                 stu[j+1].n=t;
			}
		}
		for(i=0;i<3;i++)
		{
			printf("%d %d\n",stu[i].n,stu[i].aver);
		}
}
     


