void main()
{
	int a[100],b[100],n,i,k,la,lb;
	char t[100];
	scanf("%d",&n);

	for(k=0;k<n;k++)
	{
		scanf("%s",t);
		la=strlen(t);
		for(i=la-1;i>=0;i--)
			a[i]=t[la-i-1]-'0';
		scanf("%s",t);
		lb=strlen(t);
		for(i=lb-1;i>=0;i--)
			b[i]=t[lb-i-1]-'0';
		
		for(i=0;i<lb;i++)
		{
			a[i]=a[i]-b[i];
			if(a[i]<0)
			{
				a[i]+=10;
				a[i+1]-=1;
			}
		}
		while(a[i]<0)
		{
			a[i]+=10;
			a[++i]-=1;
		}
		la--;
		while(a[la]==0) la--;
		for(i=la;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
}
