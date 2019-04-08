void main()
{
	int n;char a[102],b[102],c[10][102];int i,j,k,m,v,x;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
		getchar();
		for(m=0;m<102;m++)
			c[x][m]='0';
		for(i=0;i<102;i++)
		{
			a[i]=getchar();
			if(a[i]=='\n') break;
        }		
	    for(j=0;j<102;j++)
		{
			b[j]=getchar();
			if(b[j]=='\n') break;
		}
		for(k=101;k+i-101>=0;k--)
			a[k]=a[k+i-101];
		for(k=0;k<101-i;k++)
			a[k]='0';
		for(k=101;k+j-101>=0;k--)
			b[k]=b[k+j-101];
		for(k=0;k<101-j;k++)
			b[k]='0';//?a?b?????
		for(k=0;k<=101;k++)
		{
			if (a[k]!=b[k]) break;//?a,b?????????,????
		}
		for(m=100;m>=0;m--)
		{
				if(a[m]<b[m])
				{
					c[x][m]=a[m]+58-b[m];
					a[m-1]=a[m-1]-1;//??
				}
				else c[x][m]=a[m]+48-b[m];
		}	
		for(i=0;i<102;i++)
			a[i]='0';
		for(j=0;j<102;j++)			
			b[i]='0';//??????a?b?0
	}
    for(x=0;x<n;x++)
	{	
	    for(k=0;k<=101;k++)
		{
			if(c[x][k]!='0') break;
		}
		for(m=k;m<=100;m++) 
			printf("%c",c[x][m]);//??
	    for(k=0;k<=100;k++)
			v=v+c[x][k];
	    if (v==48) printf("0");
		printf("\n");
	}
}