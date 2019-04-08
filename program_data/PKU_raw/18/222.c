int main()
{
	int sim(int,int [][100]);
	int n=0,i=0,j=0,a[100][100];
	cin>>n;                       //??????
	for(int k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}                        //??????
		cout<<sim(n,a)<<endl;    //????????
	}
	return 0;
}                                //??n???
int sim(int n,int a[][100])
{
	int i=0,j=0,m1[100],m2[100],sum=0;
	if(n==1)
		return 0;                //????1????0
	else
		for(i=0;i<100;i++)       
		{
			m1[i]=99999;
			m2[i]=99999;
		}                        //???????????
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]<=m1[i])
				{
					m1[i]=a[i][j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]-=m1[i];
			}
		}                        //???
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]<=m2[j])
				{
					m2[j]=a[i][j];
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]-=m2[j];
			}
		}                       //???
		sum+=a[1][1];           //??
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(i==0&&j==0)
					continue;
				else if(i==0)
					a[i][j]=a[i][j+1];
				else if(j==0)
					a[i][j]=a[i+1][j];
				else
					a[i][j]=a[i+1][j+1];
			}
		}                      //????
		sum+=sim(n-1,a);       //????
		return sum;            //????
}
