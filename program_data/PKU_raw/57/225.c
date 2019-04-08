


void main()
{
	int n,a,b;
	char words[50][30];
	int len[50];

	scanf("%d",&n);
	for(a=0;a<n;a++)
	{
		scanf("%s",&words[a]);
	}

	for(a=0;a<n;a++)
	{
		len[a]=strlen(words[a]);
	}

	for(a=0;a<n;a++)
	{
		if(words[a][len[a]-2]=='e')
		{
			if(words[a][len[a]-1]=='r')
			{
				for(b=0;b<len[a]-2;b++)
				{
					printf("%c",words[a][b]);
					
				}
                printf("\n");
			}
		}
        else if(words[a][len[a]-2]=='l')
		{
			if(words[a][len[a]-1]=='y')
			{
				for(b=0;b<len[a]-2;b++)
				{
					printf("%c",words[a][b]);
                    
				}
                printf("\n");
			}
		}
        else if(words[a][len[a]-3]=='i')
		{
			if(words[a][len[a]-2]=='n')
			{
				if(words[a][len[a]-1]=='g')
				{
				    for(b=0;b<len[a]-3;b++)
					{
					     printf("%c",words[a][b]);
                         
					}
                    printf("\n");
				}
			}
		}
	}
}
		