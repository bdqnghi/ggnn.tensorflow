void main()
{
	char *p[10000],*q;
	int n;
	int i,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		p[i]=(char *)malloc(100000*sizeof(char));
		gets(p[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;*(p[i]+j)!='\0';j++)
		{
		    for(k=0;*(p[i]+k)!='\0';k++)
			{
				if(k!=j)
				{
				if(*(p[i]+k)==*(p[i]+j))
					break;
				}
			}
		    	if(*(p[i]+k)=='\0')
				{printf("%c\n",*(p[i]+j));break;}
			
		}
		if(*(p[i]+j)=='\0')
		{printf("no\n");}
	}
			

	
	
}