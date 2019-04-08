void main()
{
	int n,i,j,k,la,lb,lc;
	char a[110],b[110],c[110]={""};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",&a,&b);
		la=strlen(a);
		lb=strlen(b);
		for(j=1;j<=lb;j++)
		{
			if(a[la-j]>=b[lb-j]) c[la-j]=a[la-j]-b[lb-j]+48;
			else 
			{
				c[la-j]=a[la-j]+10-b[lb-j]+48;
				a[la-j-1]--;
			}
		}
		for(j=0;j<(la-lb);j++)
			c[j]=a[j];
		lc=strlen(c);
		for(k=0;k<=la-1;k++)
			if (c[k]!='0') break;
		for(j=k;j<=la-1;j++)
		printf("%c",c[j]);
		printf("\n");
	}
}