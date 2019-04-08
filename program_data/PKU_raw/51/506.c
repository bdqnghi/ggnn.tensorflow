int main()
{
	int n,i,j,t,max,count[600],len,p;
	char a[600]={0},b[600][10]={0};
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	for(i=0;i<len-n;i++)
	{
		count[i]=1;
		for(j=i+1;j<len-n+1;j++)
		{
			t=strcmp(b[i],b[j]);
			if(t==0)
			{
				count[i]++;
			}
		}
	}
	max=1;
	for(i=0;i<len-n;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	if(max<=1)
	{
		printf("NO");
	}
	else
	{
	printf("%d\n",max);
	for(i=0;i<len-n+1;i++)
	{
		if(count[i]==max)
		{
    	printf("%s\n",b[i]);
		}
	}
	}
	return 0;
}

