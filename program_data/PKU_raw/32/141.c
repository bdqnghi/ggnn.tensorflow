void main()
{
	int m,k,i,j,e,d[10][100],t;
	char a[10][100],b[10][100];
	scanf("%d\n",&m);
	for(i=0;i<m;i++)
	{
		gets(a[i]);
		gets(b[i]);
		scanf("\n");
	}
		for(i=0;i<m;i++)
		{
			k=strlen(a[i]);
			t=strlen(b[i]);
			for(j=0;j<100;j++)
			{
				if(a[i][j]!='\0')
					a[i][j]=a[i][j]-48;
				if(b[i][j]!='\0')
					b[i][j]=b[i][j]-48;
			}
			for(j=k;j>=k-t;j--)
				b[i][j]=b[i][j-k+t];
			for(j=k-t-1;j>=0;j--)
				b[i][j]='\0';
			e=0;
			for(j=k-1;j>=0;j--)
			{
				if(a[i][j]-b[i][j]+e<0)
				{
					d[i][j]=10+a[i][j]-b[i][j]+e;
					e=-1;
				}
				else
				{
					d[i][j]=a[i][j]-b[i][j]+e;
					e=0;
				}
			}
			
			if(d[i][0]==0)
			{
				for(j=1;j<k;j++)
					printf("%d",d[i][j]);
			}
				else
				{
					for(j=0;j<k;j++)
						printf("%d",d[i][j]);
				}
				printf("\n");
			}
		}



