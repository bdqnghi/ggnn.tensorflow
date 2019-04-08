int main()
{
	int i,j,n,m,a[60],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		s=a[j-1];
		for(j=m-1;j>=0;j--)
		{
			if(s+3*(j+1)>63)
			{
				s=a[j-1];
			}
			else
			{
				break;
			}
		}
		if(s+3*(j+1)>=60)
		{
			printf("%d\n",s);
		}
		else
		{
			printf("%d\n",60-3*(j+1));
		}
	}
	return 0;
}