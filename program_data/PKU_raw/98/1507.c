int main()
{
	int n,i,j,len[250];
	char word[250][40];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}
	for(j=0,i=0;i<n;i++)
	{
		j+=len[i]+1;
		if(i!=n-1)
		{
		if(j-1>80)
		{
			printf("\n");
			i--;
			j=0;
		}else{
			if(j==80&&j-1==80)
			{
				printf("%s",word[i]);
				printf("\n");
			}else{
				if(j+len[i+1]>80)
				{
				printf("%s",word[i]);
				}else{
				printf("%s",word[i]);
				printf(" ");
				}
			}
		}
		}else{
			printf("%s",word[n-1]);
		}
	}
	return 0;
}

	
