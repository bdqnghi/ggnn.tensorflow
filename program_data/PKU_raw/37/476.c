

int main()
{
	int t,k,i,j,n,p,flag=0;
	char a[100];
	scanf("%d",&t);
	getchar();
	for(k=1;k<=t;k++)
	{
		flag=0;
		
		gets(a);
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]==a[i])
					break;
				}
				if(j==n) 
				{
					printf("%c\n",a[i]);
					flag=1;
					i=n;
				}
			}
			if(i==n-1)
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[j]==a[i]) break;
				}
				if(j==-1) 
				{
					printf("%c\n",a[i]);
					flag=1;
					i=n;
				}
			}
			if(i>0&&i<n-1)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]==a[i])
					break;
				}
				if(j==n) 
				{
					for(p=i-1;p>=0;p--)
					{
						if(a[p]==a[i]) break;
					}
					if(p==-1) 
					{
						printf("%c\n",a[i]);
						flag=1;
						i=n;
					}
				}
			}

			
		}
		if(flag==0) printf("no\n");
	}


	return 0;
}