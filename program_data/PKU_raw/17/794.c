
int main()
{
	char a[30][120];
	int j,n,i,b[30],k,zuo[30][120],you[30][120];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=119;j++)
		{
			zuo[i][j]=0;
			you[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		k=0;
		
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
		for(j=b[i]-1;j>=0;j--)
		{
			
			if(a[i][j]=='(') 
			{
				if(k==0)
					zuo[i][j]=1;
				if(k>0)
					
					k-=1;
			}
			
			
			else if(a[i][j]==')') k+=1;
		}
		k=0;
		for(j=0;j<=b[i]-1;j++)
		{
			if(a[i][j]==')') 
			{
				if(k==0)
					you[i][j]=1;
				if(k>0)
					
					k-=1;
			}
			else if(a[i][j]=='(') k+=1;
		}
		printf("%s\n",a[i]);
		for(j=0;j<=b[i]-1;j++)
		{
			if(zuo[i][j]==1) printf("$");
			else if(you[i][j]==1) printf("?");
			else printf(" ");
		}
		printf("\n");
	}
			
			
			
			
			
			
			
			
			
			return 0;
	}
	
