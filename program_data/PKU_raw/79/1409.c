int main()
{
	
	int n[100];
	int m[100];
	int i,t=0;
	int j;
	
	for(i=0;i<=100;i++)
	{
		scanf("%d",&n[i]);
		scanf("%d",&m[i]);
		t++;
		if(n[i]==0&&m[i]==0)
		{
			break;
		}
	}
	for(i=0;i<t-1;i++)
	{
		int a[300];
		for (j=0;j<n[i];j++)
		{
			a[j]=j+1;
		}
		int nPtr=0;
		for(j=0;j<n[i];j++)
		{
			int nCount=0;
			while(nCount<m[i])
			{
				while(a[nPtr]==0)
				{
					nPtr=(nPtr+1)%n[i];
				}
				nCount++;
			    nPtr=(nPtr+1)%n[i];
			}
			nPtr--;
			if(nPtr<0)
			{
				nPtr=n[i]-1;
			}
			if(j==n[i]-1)
			{
				printf("%d\n",a[nPtr]);
			}
			a[nPtr]=0;
		}
		
	}
	
	return 0;

}