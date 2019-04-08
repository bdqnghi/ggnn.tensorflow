int main()
{
	int n,i,j;
	cin>>n;
	struct student
	{
		int num;
		int yuwen;
		int shuxue;
		int sum;
	}stu[100000];
	for(i=0;i<n;i++)
	{
		cin>>stu[i].num>>stu[i].yuwen>>stu[i].shuxue;
		stu[i].sum=stu[i].yuwen+stu[i].shuxue;
	}
	int max=0,maxj=0;
	if(n>=3)
	{
	for(i=0;i<n;i++)
	if(stu[i].sum>max)
	{
		max=stu[i].sum;
		maxj=i;
	}
	cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
	stu[maxj].sum=0;max=0;
	for(i=0;i<n;i++)
		if(stu[i].sum>max)
		{
			max=stu[i].sum;
			maxj=i;
		}
		cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
		stu[maxj].sum=0;max=0;
		for(i=0;i<n;i++)
			if(stu[i].sum>max)
			{
				max=stu[i].sum;
				maxj=i;
			}
			cout<<stu[maxj].num<<' '<<stu[maxj].sum<<endl;
	}
	else 
	{
		if(stu[0].sum>stu[1].sum)
			cout<<stu[0].num<<' '<<stu[0].sum<<endl<<stu[1].num<<' '<<stu[1].sum;
		else cout<<stu[1].num<<' '<<stu[1].sum<<endl<<stu[0].num<<' '<<stu[0].sum;
	}
			return 0;
}