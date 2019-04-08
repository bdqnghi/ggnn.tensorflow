
int main()
{
	char str[1000][50]={0};
	int i,j,n,k;
	int sum=0,m=0;
	char useless;
	scanf("%d",&n);
	scanf("%c",&useless);

	//??
	for(i=0;i<n-1;i++)
	{
		for(j=0;;j++)
		{
		  scanf("%c",&str[i][j]);
		  if(str[i][j]==' ')
		  {
			str[i][j]='\0';
            break;
		  }
		}	
	}
	gets(str[n-1]);

//	for(i=0;i<n;i++)
//		puts(str[i]);


	for(i=0;;i++)
	{
		m=strlen(str[i]);
		sum=sum+m;

		if(sum<=80)
		{
			if(sum<80)
			{
				printf("%s",str[i]);
				if((sum+1+strlen(str[i+1])<=80)&&i<n-1) printf(" ");
				sum=sum+1;
			}

			else
				printf("%s",str[i]);
		}

		else
		{
			if(sum+1>80) printf("\n");
			else
			{
		//	for(j=sum+1;j<=80;j++) printf(" ");
			printf("\n");
			}
			sum=0;
			i=i-1;
		}
		if(i==n-1) break;
	}


	return 0;
}