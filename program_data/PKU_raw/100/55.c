void main()
{
	char a[300],min,tr;
	int i,j,t=0,flag,te,l;
	char b[300]={'\0'};
	int c[300]={0};
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		flag=0;
		if(a[i]>='a'&&a[i]<='z')
		{
			for(j=0;j<300;j++)
				if(a[i]==b[j])
				{c[j]=c[j]+1;
				flag=1;
				}
				if(flag!=1)
				{
					b[t]=a[i];
					c[t]=c[t]+1;
					t=t+1;
				}
		}
	}
	l=strlen(b);
	for(i=0;i<l;i++)
	{
		min=i;
		for(j=i;j<l;j++)
			if(b[j]<b[min])min=j;
		if(min!=i)
		{
			tr=b[i];te=c[i];
			b[i]=b[min];c[i]=c[min];
			b[min]=tr;c[min]=te;
		}
	}
	if(b[0]=='\0')
		printf("No\n");
	else
		for(i=0;i<l;i++)
			printf("%c=%d\n",b[i],c[i]);
}