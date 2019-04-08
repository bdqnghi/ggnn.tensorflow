
int main()  
{
	char a[101],x;
	int n,i,j=0,m,k,b,g;
	gets(a);
	n=strlen(a);
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=x)
		{
			a[i]=j;
			j=j+1;
		}
	}
	for(j=0;j<(n/2);j++)
	{
		for(i=0;i<n;i++)
		{
 			if(a[i]==j)
			{
				for(k=i-1;k>=0;k--)
				{
					if(a[k]==x)
					{
						a[k]=j;
						break;
					}
				}
			}
		}
	}
	for(j=0;j<(n/2);j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==j)
			{
				b=i;
				break;
			}
		}
		for(i=b+1;i<n;i++)
		{
			if(a[i]==j) 
			{
				g=i;
				break;
			}
		}
		printf("%d %d\n",b,g);
	}
	return 0;
} 