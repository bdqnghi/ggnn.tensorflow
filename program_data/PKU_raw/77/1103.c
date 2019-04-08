int main()
{
	char str[100];
	int a[100],i,j,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<=n-1;i++)
	{
		if(str[i]!=str[0])a[i]=100+i;
		else a[i]=i;
	}
	for(i=1;i<=n-1;i++)
	{
		if(a[i-1]<100&&a[i]>100)
		{
			printf("%d %d\n",a[i-1],a[i]-100);
			for(j=i-1;j<=n-3;j++)a[j]=a[j+2];
			i=0;
		}	
	}
}
