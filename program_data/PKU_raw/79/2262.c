int main()
{
	int n,m,i,j,k,r,p;
	int a[300];
	for(j=0;j<300;j++)
		a[j]=1;
	for(j=1;;j++)
	{

		r=0;
		k=0;
		scanf("%d%d",&n,&m);
	    for(p=0;p<300;p++)
		    a[p]=1;
		if(n==0&&m==0)
			break;
		else
		{
			for(i=0;i<n;i++)
			{
				if(a[i]==1)
				{
					k=0;
				    r++;
				}
				else
					k++;
				if(r==m)
				{
					a[i]=0;
					r=0;
					k=0;
				}
				if(i==n-1)
					i=-1;
				if(k==n-1)
				{
					if(i<n-1)
						i++;
					break;
				}
			}
			printf("%d\n",i+1);
		}
	}
	return 0;
}