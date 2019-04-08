

int main(int argc, char* argv[])
{
	int n,max,m;
	scanf("%d",&n);
	struct stu{
		int hao,yuwen,shuxue,zong;
	}stu[100000];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d""%d""%d",&stu[i].hao,&stu[i].yuwen,&stu[i].shuxue);
		stu[i].zong=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		max=stu[0].zong;
		for(j=1;j<n;j++)
		{
			if(stu[j].zong>max)
			{
				max=stu[j].zong;
				m=j;
			}
					}printf("%d %d\n",stu[m].hao,max);
			stu[m].zong=0;

	}
		

    
	return 0;
}