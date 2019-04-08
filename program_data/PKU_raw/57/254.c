void main ()
{
	int n,i,m,j,e[50]={0};
	char a[50][20];
	char b[3]={'e','r'},c[3]={'l','y'},d[4]={'i','n','g'};
	char p[3],q[4];
	
	scanf("%d",&n);
    for(i=0;i<n;i++)
          scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		if((int)a[i][strlen(a[i])-1]-(int)b[1]==0)
        if((int)a[i][strlen(a[i])-2]-(int)b[0]==0)
		 e[i]=1;
		if((int)a[i][strlen(a[i])-1]-(int)c[1]==0)
        if((int)a[i][strlen(a[i])-2]-(int)c[0]==0)
			e[i]=1;
		if((int)a[i][strlen(a[i])-1]-(int)d[2]==0)
        if((int)a[i][strlen(a[i])-2]-(int)d[1]==0)
        if((int)a[i][strlen(a[i])-3]-(int)d[0]==0)
			e[i]=2;
	}
	for(i=0;i<n;i++)
	{
		if(e[i]==0)
			printf("%s",a[i]);
		else if(e[i]==1)
			for(j=0;j<strlen(a[i])-2;j++)
				printf("%c",a[i][j]);
        else if(e[i]==2)
			for(j=0;j<strlen(a[i])-3;j++)
				printf("%c",a[i][j]);
			printf("\n");
	}
}