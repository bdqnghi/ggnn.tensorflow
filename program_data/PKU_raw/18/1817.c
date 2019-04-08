void ccout(int n,int s[100]);
int main()
{
	int n,i,j,k,min,t,s[100],a[100][100][100];
	cin>>n;
	memset(s,0,sizeof(s));
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j][k];
		for(t=0;t<n-1;t++)
		{
			for(i=0;i<n-t;i++)
			{
				min=1073741824;
				for(j=0;j<n-t;j++)
					if(a[i][j][k]<min)
						min=a[i][j][k];
				for(j=0;j<n-t;j++)
					a[i][j][k]-=min;
			}
			for(j=0;j<n-t;j++)
			{
				min=1073741824;
				for(i=0;i<n-t;i++)
					if(a[i][j][k]<min)
						min=a[i][j][k];
				for(i=0;i<n-t;i++)
					a[i][j][k]-=min;
			}
			s[k]+=a[1][1][k];
			for(i=0;i<n;i++)
				for(j=1;j<n-t-1;j++)
					a[i][j][k]=a[i][j+1][k];
			for(j=0;j<n;j++)
				for(i=1;i<n-t-1;i++)
					a[i][j][k]=a[i+1][j][k];
		}
	}
         ccout(n,s);
	return 0;
}
void ccout(int n,int s[100])
{
         int k;
	for(k=0;k<n;k++)
		cout<<s[k]<<endl;
}