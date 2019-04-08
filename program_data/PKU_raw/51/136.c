main()
{
	int i,j,t=0,n,len,C[500];
	char a[500],b[500][5],c[500][5];
	scanf("%d%s",&n,a);
	len=strlen(a);
	for(i=0;i<len;i++) C[i]=1;

	for(i=0;i<len-n+1;i++)
	{for(j=0;j<n;j++)
		b[i][j]=a[i+j];
		b[i][j]='\0';
	}
	for(i=0;i<len-n+1;i++)
	{
		for(j=0;j<t;j++)
		{
			if(strcmp(b[i],c[j])==0) {C[j]++;break;}
		}
		if(j==t)
		{
			strcpy(c[t],b[i]);t++;
		}
	}
	j=1;
	for(i=0;i<t;i++)
	{
		if(C[i]>j) j=C[i];
	}
	if(j==1) printf("NO");
	else
	{
		printf("%d\n",j);
		for(i=0;i<t;i++)
			if(C[i]==j)
			printf("%s\n",c[i]);
	}
}


