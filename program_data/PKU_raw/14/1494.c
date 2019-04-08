int main()
{
	int n,i,j,b,c;
	struct student
	{
		int id;
		int score;
	}stu[100000],t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>stu[i].id>>b>>c;		
		stu[i].score=b+c;
	}
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(stu[j].score>stu[j-1].score)
			{
				t=stu[j];
				stu[j]=stu[j-1];
				stu[j-1]=t;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<stu[i].id<<' '<<stu[i].score<<endl;
	}
	return 0;
}