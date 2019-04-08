int main()
{
	int n,i,k,j,t;
	char str[32];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		k=strlen(str);
		if(str[k-1]=='r'||str[k-1]=='y')
		{
			for(j=0;j<k-2;j++)
				{
					if(j<k-3)
					printf("%c",str[j]);
					if(j==k-3)
					printf("%c\n",str[j]);
			    }
		}
		if(str[k-1]=='g')
		{
			for(j=0;j<k-3;j++)
			{
				if(j<k-4)
				printf("%c",str[j]);
				if(j==k-4)
				printf("%c\n",str[j]);
			}
		}	
	}
	return 0;
}