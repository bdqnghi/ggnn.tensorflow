void main()
{
	int k,i,n=0,t;
	char *p,a[100];
	p=a;
    gets(p);

	

	for(i=0;i<99;i++)
	{ 
		if((*(p+i))!='\0')
	     n++;
		else 
			break;
	}

	for(k=n-1;k>=0;k--)
	{
		if(*(p+k)==' ')
	{
			for (t=k+1;t<n;t++)
			{printf("%c",*(p+t));}
             printf(" ");
		     n=k;
	}
	}
	for(t=0;t<n;t++)
	{printf("%c",*(p+t));}
		
}