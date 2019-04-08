void main()
{
	int i,j,n,m;
	char a[50][32],x[4],y[3],z[30];
	x[3]='\0';
	y[2]='\0';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		m=strlen(a[i]);
        for(j=0;j<3;j++)
			x[j]=a[i][m-3+j];
		for(j=0;j<2;j++)
			y[j]=a[i][m-2+j];
		if(strcmp(x,"ing")==0)
		{
			strncpy(z,a[i],m-3);
			puts(z);
			printf("\n");
		}
		else
		{
			if(strcmp(y,"er")==0||strcmp(y,"ly")==0)
			{
				strncpy(z,a[i],m-2);
				puts(z);
			    printf("\n");
			}
		}
		for(j=0;j<32;j++)
			z[j]='\0';
	}
}