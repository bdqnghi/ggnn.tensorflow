int main()
{
	int n,la,lb,i,j;
	char a[100],b[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a);
	    scanf("%s",b);
		lb=strlen(b);
		la=strlen(a);
		for (j=lb-1;j>0;j--)
		{
			if (a[la-lb+j]>=b[j])
				a[la-lb+j]=a[la-lb+j]-b[j];
			else 
			{
				a[la-lb+j-1]=a[la-lb+j-1]-1;
				a[la-lb+j]=a[la-lb+j]+10-b[j];
			}
		}
		if (a[la-lb]<b[0])
		{
			a[la-lb-1]-=1;
			a[la-lb]=a[la-lb]+10-b[0];
		}
		else a[la-lb]=a[la-lb]-b[0];
        for (j=0;j<la-lb;j++)
			a[j]=a[j]-48;
		for (j=0;j<la;j++)
		    printf("%d",a[j]);
		printf("\n");
	}
	return 0;
}