struct Student
{
	int num;
	int chinese;
	int math;
	int score;
};
int main()
{
	int n;
	int i,k,j;
	struct Student student[100000];
	struct Student temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&student[i].num);
		scanf("%d",&student[i].chinese);
		scanf("%d",&student[i].math);
		student[i].score=student[i].chinese+student[i].math;
	}
	for(i=0;i<3;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(student[j].score>student[k].score) k=j;
		}
		if(k!=i)
		{
			temp=student[i];
			student[i]=student[k];
			student[k]=temp;
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",student[i].num,student[i].score);
	}
	return 0;
}