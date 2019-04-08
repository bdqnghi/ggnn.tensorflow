void main()
{
	int a[101][101];
	int b[101][101];
	char c;
	int i,k,numa,numb,n,j,j0;
	scanf("%d\n",&n);
	
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			a[i][j]='\0';
			b[i][j]='\0';
		}
	}
	
	for(i=1;i<=n;i++)
	{
		k=1;
		while((c=getchar())!='\n') a[i][k++]=c;
		k=1;
		while((c=getchar())!='\n') b[i][k++]=c;
		getchar();
	}
	
	for(i=1;i<=n;i++)
	{
		for(numa=1;;numa++) if(a[i][numa]=='\0') break;
		for(numb=1;;numb++) if(b[i][numb]=='\0') break;
		numa--;numb--;
	    for(j=0;j<=numa-1&&b[i][numb-j]>='0'&&b[i][numb-j]<='9';j++)
		{
			a[i][numa-j]=a[i][numa-j]-b[i][numb-j];
			if(a[i][numa-j]<0)
			{
				a[i][numa-j]=a[i][numa-j]+10;
				a[i][numa-j-1]=a[i][numa-j-1]-1;
			}
			a[i][numa-j]=a[i][numa-j]+'0';
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j0=1;;j0++) if(a[i][j0]!='0') break;
		for(j=j0;a[i][j]!='\0';j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}