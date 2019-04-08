main()
{
	int N,i,j,k,l[100]={0};
	char a[100][100],b[100];
	scanf("%d",&N);
	for (i=0;i<2*N;i++)
	{
		scanf("%s",a[i]);
	}
	for(j=0;j<2*N;j++)
	{for(i=0;a[j][i]!='\0';i++) l[j]++;}
	for(i=0;i<N;i++)
	{	
		for(j=0;j<=99;j++) b[j]='\0';
		for(j=0;j<=l[2*i+1];j++)
		{
			b[l[2*i]-l[2*i+1]+j]=a[2*i+1][j];
		}
		for(j=0;j<=99;j++) a[2*i+1][j]=b[j];
	}
	for(j=0;j<N;j++)
	{
		for(i=(l[2*j]-1);i>=0;i--) 
		{	if(a[2*j][i]<'0') {a[2*j][i]='9';a[2*j][i-1]--;}
			if (a[2*j+1][i]=='\0') ;
			else if (a[2*j][i]>=a[2*j+1][i])  a[2*j][i]=a[2*j][i]-a[2*j+1][i]+'0';
			else if (a[2*j][i]<a[2*j+1][i]) 
			{a[2*j][i]=a[2*j][i]-a[2*j+1][i]+10+'0';a[2*j][i-1]--;}
		}
	}
	for(j=0;j<N;j++) 
	{
		k=0;
		for(i=0;i<l[2*j];i++)
		{	
			if((a[2*j][i]!='0')||(k==1))
		{
			k=1;
			printf("%c",a[2*j][i]);
		}
		}
		if(k==0) printf("0");
	printf("\n");
	}
}
