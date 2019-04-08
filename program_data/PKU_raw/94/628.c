int main()
{
	int n,i,k,e,j=0,q=0;
	scanf("%d",&n);
	int *sz=(int *)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		
	}
	;
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{
			
			j++;
		}
	}
int *sz2=(int *)malloc(sizeof(int)*j);
	for(i=0;i<n;i++)
	{
		if(sz[i]%2!=0)
		{
			sz2[q]=sz[i];
			q++;
		}
	}
	for(k=1;k<=j;k++)
	{
		for(i=0;i<j-k;i++)
		{
			if(sz2[i]<sz2[i+1])
			{
				e=sz2[i];
				sz2[i]=sz2[i+1];
				sz2[i+1]=e;
			}
		}
	

	}
for(i=j-1;i>0;i--)
{
printf("%d,",sz2[i]);
}
printf("%d\n",sz2[0]);
	return 0;
}
