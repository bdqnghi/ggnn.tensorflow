int main()
{
	char a[256],b[256],c[256];
	int i,m,k,N,j,p,n=0;
	gets(a);
	gets(b);
	gets(c);
	N=strlen(a)-strlen(b);
	p=strlen(b);
	for(k=0;k<=N;k++)
	{
		m=0;
		for(i=0;i<256;i++)
		{
			if(a[i+k]==b[i])
			{
				m++;
			}
			if(a[i+k]=='\0')
			{
				break;
			}
			if(b[i]=='\0')
			{
				break;
			}
		    if(m>=p-1)
			{
		 	   break;
			}
		}
	
		
	    if(m>=p-1)
		{
		    for(j=0;j<k;j++){
			    printf("%c",a[j]);
			}
		    for(j=0;c[j]!='\0';j++){
			    printf("%c",c[j]);
			}
		    for(j=k+m+1;a[j]!='\0';j++){
			    printf("%c",a[j]);
			}
		     printf("\0");
		     n=1;
		}
	    if(n==1)
		   break;
	}
	
    if(n==0)
	{
		printf("%s",a);
	}
	return 0;
}
