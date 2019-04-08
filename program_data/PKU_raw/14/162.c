struct student
{
	int num;
	int score1;
	int score2;
	int total;
}stu[100000];
int main()
{
	int n,i,j,k,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].score1,&stu[i].score2);
        stu[i].total=stu[i].score1+stu[i].score2;
	}
	for(i=0;i<3;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(stu[j].total>stu[k].total)k=j;
		if(k!=i)
		{
			t=stu[i].total;stu[i].total=stu[k].total;stu[k].total=t;
			t=stu[i].num;stu[i].num=stu[k].num;stu[k].num=t;}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",stu[i].num,stu[i].total);
	}
}
