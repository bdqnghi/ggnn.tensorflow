int main()
{
	char a[300],b[300];
	int i,j=0,m,n,k;
	gets(a);
	if(strlen(a)==1)
	printf("0\n%s",a);
	else{
	 m=10*(a[0]-'0');
	for(i=1;i<strlen(a)-1;i++)
	{
	   m+=a[i]-'0';
	   if(m<13)
	   {
			if(i!=1)
			printf("0");
	        m=m*10+(a[i+1]-'0');
	        i+=1;
	   }
		n=m/13;
		printf("%d",n);
		m=m%13*10;
	}
	if(i==strlen(a))
	{
		printf("\n%d",m);
	}
	else
	{
		m+=a[i]-'0';
		if(m>=13)
		{
		n=m/13;
		printf("%d",n);
		m=m%13;
		printf("\n%d",m);
	    }
	    else
	    {
			printf("0");
			printf("\n%d",m);
		}
	}
}
	return 0;
}
