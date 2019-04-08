struct student
{
	char xuehao[100];
	int yuwen;
	int shuxue;
	int sum;
};

int main()
{
	int n,i,j,l,m;
    struct student stu[100000];
	struct student temp;

	

	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%s",stu[i].xuehao);
		scanf("%d %d",&stu[i].yuwen,&stu[i].shuxue);
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}

	for(j=1;j<4;j++)
	{
		for(m=0;m<n-j;m++)
		{
			if(stu[m].sum>=stu[m+1].sum)
			{
				temp=stu[m];
				stu[m]=stu[m+1];
				stu[m+1]=temp;
			}
		}
	}




	for(l=n-1;l>n-4;l--)
		printf("%s %d\n",stu[l].xuehao,stu[l].sum);

	return 0;
}
