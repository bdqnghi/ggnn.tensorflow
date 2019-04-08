int main()
{
	int a;
	cin>> a;
	for(int i=1;i<=a;i++)
	{
		int m,n,t=0;
		cin>> m >> n;
		int x[100][100];
		int *p;
		for(int i=0;i<m;i++)//??
		{
			for(int j=0;j<n;j++)//??
			{
				cin>> *(*(x+i)+j);
			}
		}
		if(m==1&&n==1) {cout<< *(*(x)) <<endl;} //???????
		if(m==1&&n!=1) //?????
		{
			for(int j=0;j<n;j++)
			{
				t=t+*(*(x)+j);
			}
	       cout<< t <<endl;
		}
		if(m!=1&&n==1) //?????
		{
			for(int i=0;i<m;i++)
			{
				t=t+*(*(x+i));
			}
			cout<< t <<endl;
		}
		if(m!=1&&n!=1)//?????
		{
		for(int j=0;j<n;j++)
		{
			t=t+*(*(x)+j);//???
		}
		for(int j=0;j<n;j++)
		{
			t=t+*(*(x+m-1)+j);//????
		}
		for(int i=0;i<m;i++)
		{
			t=t+*(*(x+i)+0);//???
		}
		for(int i=0;i<m;i++)
		{
			t=t+*(*(x+i)+n-1);//????
		}
		cout<< t-*(*(x+0)+0)-*(*(x+0)+n-1)-*(*(x+m-1)+0)-*(*(x+m-1)+n-1) <<endl;//?????
		}
	}
		return 0;
}
