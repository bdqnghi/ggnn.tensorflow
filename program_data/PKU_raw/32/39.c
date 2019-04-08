void main()
{
	int n,i,j,k,t;
	char a[100][100],b[100][100],c[100][100]={""};
	scanf("%d",&n);
		for(i=0;i<n;i++)
			{	scanf("%s%s",a[i],b[i]);/*?????????*/
printf("\n");
		}
		for(i=0;i<n;i++)
		{
			for(j=strlen(a[i])-1,k=strlen(b[i])-1;j>=(strlen(a[i])-strlen(b[i]));j--,k--)
			{
				if(a[i][j]>=b[i][k])
					c[i][j]=a[i][j]-b[i][k];
				else 
				{	a[i][j-1]=a[i][j-1]-1;
					c[i][j]=10+a[i][j]-b[i][k];
				}
				
				c[i][j]=c[i][j]+48;
			}
		for(t=strlen(a[i])-1;t>=0;t--)
		{if(a[i][t]<48)
		a[i][t-1]=a[i][t-1]-1;}
        for(t=0;t<strlen(a[i]);t++)
		if(a[i][t]<48)
			a[i][t]='9';
		for(j=0;j<strlen(a[i])-strlen(b[i]);j++)
			c[i][j]=a[i][j];
			c[i][strlen(a[i])]='\0';
			printf("%s\n",c[i]);
		}
}