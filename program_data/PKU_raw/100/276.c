void main()
{
	char str[300],a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i,l,j,b[26]={0};
	gets(str);
	l=strlen(str);
    for(i=0;i<l;i++)
	{
		for(j=0;j<26;j++)
		{
		  if(str[i]==a[j])
			  b[j]=b[j]+1;
		}
	}
	for(i=0;i<26;i++)
	{
			 if(b[i]!=0)
				printf("%c=%d\n",a[i],b[i]);
        
	}
	int sum=0;
	for(i=0;i<26;i++)
		sum=sum+b[i];
	if(sum==0)
		printf("No");
	
		
	
}
