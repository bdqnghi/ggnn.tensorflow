int main()
{
	int a[100],i,n,j,x;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=1;j<n;j++)
		{
			if (a[j]==a[i]&&j!=i)
			a[j]=0;
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=0)
		{
			printf("%d",a[i]);
			x=i;
			goto loop;
        }
	}
    loop:for(i=x+1;i<n;i++)
		 {
			 if (a[i]!=0)
			 printf(",%d",a[i]);
		 }
		 printf("\n");
}
