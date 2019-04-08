int main()
{
	char a[500];
    int n;
    scanf("%d",&n);
	char b[500][10]={0};
	int i,j,c[500]={0},max,k;
	scanf("%s",a);
	for(i=0;i<strlen(a)-n+1;i++)
	{
		k=0;
		for(j=i;j<i+n;j++)
		{
			b[i][k]=a[j];
			k++;
		}
	}
	for(i=0;i<strlen(a)-n+1;i++)
	{
		for(j=i+1;j<strlen(a)-n+1;j++)
		{
			if(strcmp(b[i],b[j])==0)
			c[i]++;
		}
	}
	max=c[0];
	for(i=1;i<strlen(a)-n+1;i++)
	{
		if(c[i]>max)
		max=c[i];
	}
	if(max>0)
	    {printf("%d\n",max+1);}
	for(i=0;i<strlen(a)-n+1;i++)
	{
		if(c[i]==max&&max>0)
		printf("%s\n",b[i]);
	}
	if(max==0)
	printf("NO");
	return 0;
}