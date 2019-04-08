int main()
{
	int n;
	scanf("%d",&n);
	char s[200][200];
	int i,j;
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=1;j<=n;j++)
		{
			
			scanf("%c",&s[i][j]);
			
		}

	}
	
	int m;
	scanf("%d",&m);
	int k;
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
		   		if(s[i][j]=='@')
		        {
			         if(i-1>=1&&s[i-1][j]!='#'&&s[i-1][j]!='@')
			        {
				            s[i-1][j]='0';

			         }
			         if(i+1<=n&&s[i+1][j]!='#'&&s[i+1][j]!='@')
			         {
				          s[i+1][j]='0';
			         }
			         if(j-1>=1&&s[i][j-1]!='#'&&s[i][j-1]!='@')
			        {
				         s[i][j-1]='0';
			        }
			         if(j+1<=n&&s[i][j+1]!='#'&&s[i][j+1]!='@')
			       {  
				        s[i][j+1]='0';
			        }
		         }
				

			}
		}
		
		for(i=1;i<=n;i++)
	   { 
		   for(j=1;j<=n;j++)
		   {
			   if(s[i][j]=='0')
			   {
				   s[i][j]='@';
			   }
		   }
		   

	   }
	}
	int num=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(s[i][j]=='@')
			{
				num++;

			}
		}
	}
	printf("%d",num);
	
	return 0;
	

}