void main()
{
	int n,la,lb,i,j;
	char a[100][100],b[100][100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		scanf("%s",b[i]);
		la=strlen(a[i]);
		lb=strlen(b[i]);
		for(j=1;j<=lb;j++)
		{
			if(a[i][la-j]>=b[i][lb-j]) a[i][la-j]=a[i][la-j]-b[i][lb-j];
			else {a[i][la-j]=a[i][la-j]+10-b[i][lb-j];a[i][la-j-1]-=1;}
		}
		for(j=0;j<la-lb;j++) a[i][j]=a[i][j]-'0';
        for(j=0;j<la;j++)
		printf("%d",a[i][j]);
		printf("\n");
	}

}