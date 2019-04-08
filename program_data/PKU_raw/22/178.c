void main()
{
	int s[max],n=0,i,j,temp;
	char flag;
	int cida=0;
	for(i=0;;i++)
	{
		scanf("%d%c",&s[i],&flag);
		if(flag==',')
		{
			n++;
			continue;
		}
		if(flag=='\n')
		{
			n++;
			break;
		}
	}

	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(s[i]<s[i+1])
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
	}

	if(n!=1)
	{
		for(i=1;i<n;i++)
		{
			if(s[i]==s[0])
				continue;
			if(s[i]<s[0])
			{
				cida=s[i];
				break;
			}
		}
		if(cida==0)
			printf("No");
		else
			printf("%d",cida);
	}
	else
	{	
		printf("No");		
	}
}