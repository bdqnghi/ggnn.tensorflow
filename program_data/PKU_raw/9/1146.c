int main()
{
	int n,i,j,k,b[100]={0},c[100]={0},d[100]={0},e[100]={0};
	char a[100][100];
	for(i=0;i<100;i++)
	{
		b[i]=i;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&a[i],&c[i]);
		if(c[i]>59)
		{
			d[i]=c[i];
		}
		else
		{
			e[i]=c[i];
		}
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(d[b[j]]<d[b[j+1]])
				{
					k=b[j];
					b[j]=b[j+1];
					b[j+1]=k;
				}
			}
		}
	
		for(i=0;i<n;i++)
		{
			if(d[b[i]]>0)
			{
				printf("%s\n",a[b[i]]);
			}
			else
			{
				break;
			}
		}
		for(i=0;i<n;i++)
		{
			if(e[i]!=0)
			{
				printf("%s\n",a[i]);
			}
		}
		return 0;
}


