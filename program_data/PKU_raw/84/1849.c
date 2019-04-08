int main()
{
	int m[100],i,j,x,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		for(j=i;j>0;j--)
		{
			if(m[j]>m[j-1])
			{
				x=m[j];
				m[j]=m[j-1];
				m[j-1]=x;
			}
		}
	}
	printf("%d\n",m[0]);
	printf("%d\n",m[1]);
	return 0;

}