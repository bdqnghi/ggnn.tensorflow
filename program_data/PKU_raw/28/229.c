void main()
{
	char string[30000];
	char word[300][100];
	int i=0,j=0,k,t;int l[300];
	gets(string);
	for(k=0;string[k]!='\0';k++)
	{
		if(string[k]!=32)
		{
			word[i][j]=string[k];
			if(string[k+1]!=32&&string[k+1]!='\0')
				j++;
			else
			{
			
			     l[i]=j;
				word[i][j+1]='\0';	j=0;	i++;
			}
		}
	}
    for(k=0;k<i-1;k++)
	{
	
		printf("%d,",l[k]+1);
		
	}
	printf("%d\n",l[i-1]+1);
    
	}



