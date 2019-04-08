int main()
{
	int n,a[100]={0},flag,i,j;
	char c[100],b[2];
	cin>>c;
	n=strlen(c);
	b[0]=c[0];
	b[1]=c[n-1];
	for(int k=1;k<=n/2;k++)
	{
		flag=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==0&&c[i]==b[0])
			{
				for(j=i+1;;j++)
				{
					if(c[j]==b[0]&&a[j]==0)
						break;
					if(a[j]==0&&c[j]==b[1])
					{
						a[j]=1;
						a[i]=1;
						flag=1;
						cout<<endl<<i<<" "<<j;
						break;
					}
				}
				if(flag)
					break;
			}
		}
	}
	return 0;
}