int main()
{
	int n,i,j,k,A,M=0;
	char a[500];
	scanf("%d",&n);
	scanf("%s",a);
	A=strlen(a);
	char b[500][5];
	int c[500];
	if(n==2)
	{
		for(i=0;i<=A-n;i++)
		{
			b[i][0]=a[i];
			b[i][1]=a[i+1];
			b[i][2]=0;
		} 
	}
	if(n==3)
	{
		for(i=0;i<=A-n;i++)
		{
			b[i][0]=a[i];
			b[i][1]=a[i+1];
			b[i][2]=a[i+2];
			b[i][3]=0;
		} 
	}
	if(n==4)
	{
		for(i=0;i<=A-n;i++)
		{
			b[i][0]=a[i];
			b[i][1]=a[i+1];
			b[i][2]=a[i+2];
			b[i][3]=a[i+3];
			b[i][4]=0;
		} 
	}
	/*for(i=0;i<=A-n;i++)
	{printf("%s ",b[i]);}*/
	for(j=0;j<=A-n;j++)
	{
		c[j]=0;
		for(k=j;k<=A-n;k++)
		{
			if(strcmp(b[k],b[j])==0) 
			{c[j]=c[j]+1;}
		}
		if(M<c[j]) M=c[j];
	}
	if(M>1) 
	{
		printf("%d\n",M);
		for(j=0;j<=A-n;j++)
		{
			if(c[j]==M) printf("%s\n",b[j]);
		}
	}
	else printf("NO\n");
	
	
} 