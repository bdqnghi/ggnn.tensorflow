void main()
{
	char a[101],b[101];
	int n,i,k,j,c[101],l1,l2;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<=100;j++) c[j]=0;
		scanf("%s",a);
		scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		for (j=100;j>=101-l1;j--) a[j]=a[l1-101+j]-'0';
		for (j=100;j>=101-l2;j--) b[j]=b[l2-101+j]-'0';
		for (j=0;j<101-l1;j++) a[j]=0;
		for (j=0;j<101-l2;j++) b[j]=0;
		for (j=100;j>=100-((l1>l2)?l1:l2);j--)
		{
			c[j]+=a[j]-b[j];
			if (c[j]<0) {c[j]=c[j]+10; c[j-1]--;}
		}
		j=0;
		while (c[j]==0) j++;
		for (k=j;k<=100;k++) printf("%d",c[k]);
		printf("\n");
	}
}