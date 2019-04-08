struct student
{
	int num;
	int yuwen;
	int shuxue;
};
int main()
{
	int n,m,i,j,t,k;
	scanf("%d",&n);
	m=n;
	struct student *stu=(struct student*)malloc(sizeof(struct student)*n);
	int *score=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].yuwen,&stu[i].shuxue);
		score[i]=stu[i].yuwen+stu[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(score[j]>=score[j+1])
			{
				t=score[j];
				score[j]=score[j+1];
				score[j+1]=t;
				k=stu[j].num;
				stu[j].num=stu[j+1].num;
				stu[j+1].num=k;
			}
		}
	}
	for(i=n-1;i>=n-3;i--)
	{
		printf("%d %d\n",stu[i].num,score[i]);
	}
	free(stu);
	free(score);
	return 0;
}