
int a[100][100],n;

int juzhen()
{
	int j1,j2,j3,j4,j5;
	int min,sum=0;
	for(j1=n;j1>1;j1--)
	{
		for(j2=0;j2<j1;j2++)
		{
			min=a[j2][0];
			for(j3=0;j3<j1;j3++)
			{
				if(a[j2][j3]<min)
				min=a[j2][j3];
			}
			for(j3=0;j3<j1;j3++)
			{
				a[j2][j3]=a[j2][j3]-min;
			}
		}
		for(j4=0;j4<j1;j4++)
		{
			min=a[0][j4];
			for(j5=0;j5<j1;j5++)
			{
				if(a[j5][j4]<min)
				min=a[j5][j4];
			}
			for(j5=0;j5<j1;j5++)
			{
				a[j5][j4]=a[j5][j4]-min;
			}
		}
		sum=sum+a[1][1];
		for(j2=0;j2<j1;j2++)
		{
			for(j3=0;j3<j1;j3++)
			{
				if(j2==0&&j3>1)
				a[j2][j3-1]=a[j2][j3];
				if(j3==0&&j2>1)
				a[j2-1][j3]=a[j2][j3];
				if(j2>1&&j3>1)
				a[j2-1][j3-1]=a[j2][j3];
			}
		}
	}
	return sum;
}

int main()
{
	int m1,m2,m3,sum;
	cin>>n;
	for(m1=1;m1<=n;m1++)
	{
		for(m2=0;m2<n;m2++)
		{
			for(m3=0;m3<n;m3++)
			{
				cin>>a[m2][m3];
			}
		}
		sum=juzhen();
		cout<<sum<<endl;
	}
}