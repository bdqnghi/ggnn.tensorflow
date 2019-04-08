
int main()
{
	
    int i,j,x,y,m,l=0,t;
	char b[N],a[N],c[N];
	scanf("%s",b);
	scanf("%s",a);
	scanf("%s",c);

	for(y=0;i<N;y++)
	{
		if(a[y]=='\0')
			break;
	}

    
	for(i=0;i<N;i++)
	{
		m=0;
		for(j=i;j-i<y;j++)
		{
            if(a[j-i]==b[j])
				m++;
		}
		if(m>=y)
			break;
	}
	
	   for(t=i;c[t-i]!=0&&t<256;t++)
	{
	    b[t]=c[t-i];
		if(c[t-i]=='\0')
			break;
	}
	puts(b);
	return 0;


}
