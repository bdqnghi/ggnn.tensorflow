int main()
{
	char str[300],s[300],temp;
	int i,k=0,j=0,m=0,n=0,count=1;
	scanf("%s",str);
    n=strlen(str);
	for(i=0;i<n;i++)
	{
           if(str[i]>='a'&&str[i]<='z')
		   {
			  s[k]=str[i];
			   k=k+1;
		   }
	}
	if(k==0)
	{
		printf("No");
	}
	else if(k==1)
	{
		printf("%c=1",s[0]);
		printf("\n");
	}
	
	else
	{


	for(i=k-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(s[j+1]<s[j])
			{
               temp=s[j+1];
			   s[j+1]=s[j];
			   s[j]=temp;
			}
		}
	}
	
	for(i=0;i<k;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
		    if(i==k-2)
			{
				printf("%c=%d",s[i],count);
			}
		}
		if(s[i]<s[i+1]&&i<k-2)
		{
        	printf("%c=%d",s[i],count);
			printf("\n");
			count=1;
		}
		if(s[i]<s[i+1]&&i==k-2)
		{
           printf("%c=%d",s[i],count);
			printf("\n");
              printf("%c=1",s[k-1]);
			printf("\n");
		}

		
	}
	}
	return 0;
}
