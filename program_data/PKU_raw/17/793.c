

int main()
{	int i,j,len,n,left=0,right=0,k;
	char a[10][101]={"\0"};
	int b[10][101]={0};
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		len=strlen(a[i]);
		for(j=0;j<len;j++)
		{
			if(a[i][j]=='(')
			{
				b[i][j]=-1;
				left++;
			}
			if(a[i][j]==')')
			{
				b[i][j]=1;
				right++;
			}
		}
		
		
	
			for(j=0;left!=0,right!=0,j<len;j++)
			{
				if(b[i][j]==1)
				{
				
					for(k=j-1;k>=0;k--)
					{
						if(b[i][k]==-1)
						{
							b[i][k]=0;
							b[i][j]=0;
							left--;
							right--;
							break;
						}
					}
				}
			}
	}
	
	

	for(i=0;i<n;i++)
	{
		puts(a[i]);
		len=strlen(a[i]);
		for(j=0;j<len;j++)
			{
				if(b[i][j]==-1)
					printf("$");
				if(b[i][j]==1)
					printf("?");
				if(b[i][j]==0)
					printf(" ");
		}
		printf("\n");
	}
	
return 0;

}