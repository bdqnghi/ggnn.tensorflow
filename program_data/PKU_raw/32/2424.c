void sub(char a[100],char b[100])
{
	int l1,l2,i,j,k;
	l1=strlen(a);
	l2=strlen(b);
	for(i=l1-1,j=l2-1;j>=0;i--,j--)
	{
		if(a[i]>b[j])
			a[i]=a[i]-b[j]+48;
		else if(a[i]==b[j])
			a[i]='0';
		else
		{
			a[i]=a[i]-b[j]+58;
			for(k=i-1;a[k]=='0';k--)
				a[k]='9';
			a[k]=a[k]-1;
		}
	}
    if(a[0]=='0')
	{
		for(i=1;i<l1;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	else
		printf("%s\n",a);
}



void main()
{
	char a[100],b[100];
	int n,m;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		if(m>1)
			printf("\n");
		scanf("%s%s",a,b);
		sub(a,b);
	}
}