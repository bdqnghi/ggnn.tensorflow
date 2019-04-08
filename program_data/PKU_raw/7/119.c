int main()
{
	char str[100],substr[50],r[50];
	gets(str);
	gets(substr);
	gets(r);
	int i,j,n,same=0; 
	int l=strlen(substr);
	for(i=0;str[i]!=0;i++)
	{
		if(substr[0]==str[i])
		{
			same=1;
			for(j=1;substr[j]!=0;j++)
			{
				if(substr[j]!=str[i+j])
				{
					same=0;
					break;
				}
			}
			if(same==1)
			{
				n=i;
			    break;
			}
		}
    }
    if(same==1)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",str[j]);
	    }
	    printf("%s",r);
	    for(j=n+l;str[j]!=0;j++)
	    {
			printf("%c",str[j]);
	    }
	}
	if(same==0)
	{
		printf("%s",str);
	}
	return 0;
}
