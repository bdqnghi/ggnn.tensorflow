int main ()
{
	int n,m,i;
	while(1)
	{
		scanf("%d %d",&n,&m);
		if(n==0) break;
		int a[300];
		for(i=0;i<n;i++)
			a[i]=1;
		int j=0,k,l;
		for(l=1;l<n;l++)
		{
			k=0;
			while(k!=m)
			{
				if(a[j]!=0) k++;
				j++;
				if(j>=n) j=0;
			}
			if(j==0) a[n-1]=0;
			else a[j-1]=0;
		}
		for(j=0;j<n;j++)
		{
			if(a[j]==1) {printf("%d\n",j+1);break;}
		}
	}
}
			
