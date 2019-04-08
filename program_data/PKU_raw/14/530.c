struct student
	{
	   int number;

	   int total;
	};
int main()
{

	int n;
	cin>>n;
	struct student a[n];
	int i,j,t;
	for(i=0;i<n;i++)
	{int b,c;
		cin>>a[i].number>>b>>c;
		a[i].total=b+c;
	}

	for(i=0;i<3;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j].total>a[i].total)
			{
				t=a[i].total;a[i].total=a[j].total;a[j].total=t;
				t=a[i].number;a[i].number=a[j].number;a[j].number=t;
			}
		}

	}
	for(i=0;i<3;i++)
		cout<<a[i].number<<' '<<a[i].total<<endl;
	return 0;
}
