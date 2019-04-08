int main()
{
	char c[600]={0},d[600][10]={0};
	int n;
	scanf("%d\n",&n);
	scanf("%s",c);
	int i,j,a[600]={0},l,k,x,p,max=0,l1;
	l=strlen(c);
    k=0;
	for(i=0;i<=l-n;i++)
	{
        for(j=0;j<n;j++)
		{
			d[k][j]=c[i+j];
		}
		k++;
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			x=strcmp(d[i],d[j]);
			if(x==0) a[i]++;
		}
		if(a[i]>max) max=a[i];
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			x=strcmp(d[i],d[j]);
			if(x==0)
			{
				for(p=0;p<n;p++)
				{
					d[j][p]=0;
				}
			}
		}
	}
         if(max==1) printf("NO");
else 
{
	printf("%d\n",max);
	
	for(i=0;i<k;i++)
	{
		l1=strlen(d[i]);
		if(a[i]==max && d[i][0]!=0) printf("%s\n",d[i]);
	}
}
	return 0;
}