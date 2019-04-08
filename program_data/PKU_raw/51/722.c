int main()
{
	int n,i,j=0,k,m=0,c[500]={0};//c???????
	int r,u=0;
	char a[500],b[500][6],temp[6]; //a???????b???????
	scanf("%d %s",&n,a);
	for(i=0;i<strlen(a)-n+1;i++)
	{
		for(j=0;j<n;j++)
		{
		  b[u][j]=a[i+j];
		}
		b[u][n]='\0';
		  u++;
		if(u==(strlen(a)-n+1))  
			  break;
	}
	for(i=0;i<u-1;i++)
	{
		int count=0;
		for(k=i;k<u;k++)
		{
			if(strcmp(b[i],b[k])==0) //????????????1?
				c[i]++;
		}
	}
	for(i=0;i<u;i++)
	{
		for(k=u-1;k>i;k--)
		{
			if(c[k]>c[k-1])
			{
					r=c[k];
					c[k]=c[k-1];
					c[k-1]=r;
					strcpy(temp,b[k]);
					strcpy(b[k],b[k-1]);
					strcpy(b[k-1],temp);
				}
		}
	}
		if(c[0]==1)
			printf("NO");
		else
		{
			printf("%d\n",c[0]);
			printf("%s",b[0]);
			printf("\n");
			for(i=1;i<u;i++)
			{
				if(c[i]==c[0])
				{printf("%s",b[i]);
				printf("\n");
				}
				else 
					break;
			}
		}
		return 0;
	}
