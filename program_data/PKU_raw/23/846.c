main()
{
	char c[100],a,e[100];
	int b,i,d,j;
	gets(c);
	b=strlen(c);
	for(i=0,d=0;i<b;i++)
		
			if(c[i]==' ')d++;
			if(d!=0)
			{
		for(i=0;i<b/2;i++)
	{
		a=c[i];
		c[i]=c[b-1-i];
		c[b-1-i]=a;
	}
	
    	for(i=0,j=0;i<b;i++)
		if(c[i]==' ')
		{e[j]=i+1;
		j++;}
		for(j=0;j<d-1;j++)
			for(i=e[j];i<=(e[j]+e[j+1]-2)/2;i++)
		{
		a=c[i];
		c[i]=c[e[j+1]+e[j]-2-i];
		c[e[j+1]+e[j]-2-i]=a;
			}
	for(i=0;i<(e[0]-1)/2;i++)
	{
		a=c[i];
		c[i]=c[e[0]-1-1-i];
		c[e[0]-1-1-i]=a;
	}
    for(i=e[d-1];i<(e[d-1]+b-1)/2;i++)
	{
		a=c[i];
		c[i]=c[b+e[d-1]-1-i];
		c[b+e[d-1]-1-i]=a;
	}
	puts(c);}
			else
			puts(c);
}