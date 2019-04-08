void main()
{
	int a[101][101],b[101][101],c[101][101],x[101][101],y[101][101],j,m,n,t,s,r,q;
	scanf("%d",&n);
	int i[101]={0};
	for(r=0;r<n;r++)
	{
		q=getchar();
	    for(i[r]=1;;i[r]++)
		{a[r][i[r]]=getchar();
	    if(a[r][i[r]]=='\n')
		{a[r][i[r]]=0;break;}
		}

	   for(j=1;;j++)
	   {b[r][j]=getchar();
	   if(b[r][j]=='\n')
	   {b[r][j]=0;break;}
	   }
	
	   for(m=1;m<i[r];m++)
		a[r][m]=a[r][m]-48;
	   for(m=1;m<j;m++)
		b[r][m]=b[r][m]-48;

	   for(m=1;m<i[r];m++)
		x[r][m]=a[r][i[r]-m];
	   for(m=1;m<j;m++)
		y[r][m]=b[r][j-m];

	   for(m=i[r];m<101;m++)x[r][m]=0;
	   for(m=j;m<101;m++)y[r][m]=0;
	   for(m=0;m<101;m++)c[r][m]=0;

	   for(m=1;m<i[r];m++)
	   {c[r][m]=(x[r][m]+10-y[r][m])%10;
		x[r][m+1]=x[r][m+1]+(x[r][m]+10-y[r][m])/10-1;
	   }
	}

	printf("\n");
	for(r=0;r<n;r++)
	{
		for(s=0,t=i[r]-1;t>0;t--)
		{if(c[r][t]==0&&s==0)continue;
	    printf("%d",c[r][t]);
	    s=1;
		}
		printf("\n");
	}
}
