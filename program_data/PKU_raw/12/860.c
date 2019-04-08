int main()
{
	int a[16];
	int i,j,k,l;
	while(scanf("%d",&a[0])&&a[0]!=-1)
	{	l=0;
		if(a[0]!=0)
		{
			for(i=1;a[i-1]!=0;i++)
			{
				scanf("%d",&a[i]);
			}
			for(j=0;j<=i-1;j++)
				for(k=0;k<j;k++)
					if(a[k]==2*a[j]||a[j]==2*a[k]) l++;
		printf("%d\n",l);
		}
		else printf("%d\n",l);
	}
	return 0;

}
