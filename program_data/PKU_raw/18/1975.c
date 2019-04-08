int a[100][100];
int cut(int t)
{
	int s,i,j;
	int sum;
	for(i=0;i<t;i++)
	{
		s=9999;
		for(j=0;j<t;j++)
		{
			if(a[i][j]<s)   s=a[i][j]; 
		}
		for(j=0;j<t;j++)   a[i][j]=a[i][j]-s;
	}
	for(i=0;i<t;i++)
	{
		s=9999;
		for(j=0;j<t;j++)
		{
			if(a[j][i]<s)  s=a[j][i];
		}
		for(j=0;j<t;j++)  a[j][i]=a[j][i]-s;
	}
	t--;
	if(t==1) return a[1][1];
	else sum=a[1][1];
	for(i=0;i<t+1;i++)
		for(j=0;j<t+1;j++)
		{
			if(i==0&&j==0)   continue;
			else if(i==1||j==1)   continue;
			else if(i==0)  a[i][j-1]=a[i][j];
			else if(j==0)   a[i-1][j]=a[i][j];
			else a[i-1][j-1]=a[i][j];
		}
	sum=sum+cut(t);
	return sum;
}
int main ()
{
	int i,j,k,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				a[j][k]=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>a[j][k];
		cout<<cut(n)<<endl;
	}
	return 0;
}