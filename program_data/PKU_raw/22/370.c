main()
{
	int i=0,j=0,k=0,l,m,n,p=0,q;
	int a[1000]={0};
	char b[10000];
	gets(b);
	while (b[i]!='\0')
	{
		if (b[i]<='9'&&b[i]>='0') 
		{
			if (k==0) {a[j]=b[i]-48;k++;}
			else a[j]=a[j]*10+b[i]-48;
		}
		else j++;
		i++;
	}
	q=j;
	for (i=0;i<=q;i++)
	{
		m=0;
		for (j=0;j<=q;j++)
		{
			if (a[j]>a[i]&&m==0) {n=a[j];m++;}
			else if (a[j]>a[i]&&a[j]!=n) m++;
		}
		if (m==1) 		
		{
			printf("%d",a[i]);
			p=a[i];
			break;
		}
	}
	if (p==0) printf("No");
}