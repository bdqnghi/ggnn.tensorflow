
int main ()
{
	const int sz=9;
	int a[sz][sz],b[sz][sz];
	int i,j,k,m,n,fx,fy;
	scanf("%d%d",&m,&n);
	memset(a,0,sizeof(a));
	a[sz/2][sz/2]=m;
	for(k=0;k<n;k++)
	{
		memset(b,0,sizeof(b));
		for(i=1;i<sz-1;i++)
		{
			for(j=1;j<sz-1;j++)
			{
				b[i][j]+=a[i][j];
				for(fx=-1;fx<=1;fx++)
				{
					for(fy=-1;fy<=1;fy++)
						b[i+fx][j+fy]+=a[i][j];
				}
			}
		}
		memcpy(a,b,sizeof(a));
	}
	for(i=0;i<sz;i++)
	{
		for(j=0;j<sz-1;j++)
			printf("%d ",a[i][j]);
		printf("%d\n",a[i][sz-1]);
	}
	return 0;
}