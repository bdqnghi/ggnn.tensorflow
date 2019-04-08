void main()
{
	int i,j,n;
	int la[50],lb[50];
	char a[50][100],b[50][100],c[50][100]={'\0'};
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{   scanf("%s",a[i]);	    
	    scanf("%s",b[i]);
		la[i]=strlen(a[i]);
		lb[i]=strlen(b[i]);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{	for(j=0;j<la[i]-lb[i];j++)
			c[i][j]=a[i][j];
	    for(j=la[i]-lb[i];j<la[i];j++)
			c[i][j]=a[i][j]-b[i][j-la[i]+lb[i]]+48;
		for(j=la[i]-1;j>=0;j--)
			if(c[i][j]<48)
			{c[i][j]+=10;
			c[i][j-1]--;
			}
	}

	for(i=0;i<n;i++)
	{if(c[i][0]=='0')
	for(j=0;i<la[i]-1;j++)
		c[i][j]=c[i][j+1];
		printf("%s\n",c[i]);
	}
}



