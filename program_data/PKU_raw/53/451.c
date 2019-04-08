int main()
{long int n,i,c[50001],a[500];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=50000;i++)
		c[i]=0;
	printf("%d",a[1]);c[a[1]]=1;
	for (i=2;i<=n;i++)
	
	{
		if(c[a[i]]==0){printf(",%d",a[i]);c[a[i]]=1;}
	}
}
