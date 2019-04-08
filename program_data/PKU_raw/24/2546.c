int main()
{
	int n;
	int i;
	char word[200][20];
	int count[200]={0};
	int max=0,min=20;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		count[i]=strlen(word[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	
	for(i=0;i<n;i++)
		
	{
		if(count[i]<min)
			
		{
			min=count[i];
		}
	}
	
for(i=0;i<n;i++)
	{
	if(strlen(word[i])==max)
	{
	printf("%s\n",word[i]);
	break;
	}
	}

	for(i=0;i<n;i++)
	{
	if(strlen(word[i])==min)
	{
	printf("%s\n",word[i]);
	break;
	}
	}

	

	return 0;
}
