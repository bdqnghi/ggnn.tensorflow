int main()
{
	struct
	{
		int number;
		float score1;
		float score2;
		float score3;

	}stu[100000],temp;
	int n,i,j;
	cin>>n;
	for(i=0;i<=n-1;i++)
		{
		cin>>stu[i].number>>stu[i].score1>>stu[i].score2;
		stu[i].score3=stu[i].score2+stu[i].score1;
		}
	for(i=n-1;i>=n-3;i--)
		for(j=n-1;j>=n-i;j--)
			if(stu[j-1].score3<stu[j].score3)
			{
				temp=stu[j];
				stu[j]=stu[j-1];
				stu[j-1]=temp;
			}
	cout<<stu[0].number<<" "<<stu[0].score3<<endl;
	cout<<stu[1].number<<" "<<stu[1].score3<<endl;
	cout<<stu[2].number<<" "<<stu[2].score3;
	return 0;
}
