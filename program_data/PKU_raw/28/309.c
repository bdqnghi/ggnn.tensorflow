void main()
{
	char c[1000],*p;
	int i,j;
	gets(c);
	p=c;
	int a[1000]={0};
	for(i=0,j=0;*(p+i)!='\0';i++)
	{
		if (*(p+i)!=' ')
		{
            
            a[j]=a[j]+1;
			
			
		}
			if(*(p+i)==' ')  
			{
				
				if(a[j]!=0) j=j+1;
				
				continue;
			}
	}

	for(i=0;i<j;i++)
	{
		printf("%d,",a[i]);
	}
    printf("%d",a[j]);
	

}
