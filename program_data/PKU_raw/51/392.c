int main()
{
	char a[500],a4[500][4];
	int i,j,k,l,n,m,b4[500],d4[500];
	scanf("%d\n",&k);
	i=0;
	while(i<=499)
	{
		a[i]='\0';
		a4[i][0]='\0';
		a4[i][1]='\0';
		a4[i][2]='\0';
		a4[i][3]='\0';
		b4[i]=1;
		d4[i]=0;
		i=i+1;
	}
	gets(a);
	i=0;
	while(i<=499)
	{
		if(a[i]=='\0') 
		{
			n=i;
			break;
		}
		i=i+1;
	}
	if(i==500) n=499;
	i=0;
	while(i<=n-k+1)
	{
		j=0;
		while(j<=k-1)
		{
			a4[i][j]=a[i+j];
			j=j+1;
		}
		i=i+1;
	}
	
	i=0;
	while(i<=n-k+1)
	{
		j=i+1;
		while(j<=n-k+1)
		{
			if(a4[i][0]==a4[j][0]&&a4[i][1]==a4[j][1]&&a4[i][2]==a4[j][2]&&a4[i][3]==a4[j][3]) b4[i]=b4[i]+1;
			j=j+1;
		}
		i=i+1;
	}

	i=0;
	while(i<=499)
	{
		d4[i]=b4[i];
		i=i+1;
	}

	i=499;
	while(i>=1)
	{
		if(b4[i]>b4[i-1]) b4[i-1]=b4[i];
		i=i-1;
	}
	m=b4[0];
	i=0;
	if(m==1) 
	{
		printf("NO");
	}
	else
	{
		printf("%d",m);
		while(i<=499)
		{
			if(d4[i]==m) 
			{
				printf("\n");
				j=0;
				while(j<=k-1)
				{
					printf("%c",a4[i][j]);
					j=j+1;
				}
			}
			i=i+1;
		}
	}
}