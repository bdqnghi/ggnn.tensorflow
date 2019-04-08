int main()
{
	static char c[102],d[102];int i,j,k,s;
	while(gets(c))
	{puts(c);
	for(i=0;c[i]!='\0';i++)
	{
	
		if(c[i]=='(')
		d[i]=1;
		else if(c[i]==')')
		d[i]=2;
		else d[i]=3;
	}
	while(1)
	{   s=0;
		for(j=0;j<=i-2;j++)
		{
			if(d[j]==1)
			break;
		}
		for(k=j+1;k<=i-1;k++)
		{
			if(d[k]==2)
			{
			s=1;
			break;
		    }
		}
	if(s==0)
	break;
	for(j=0;j<=i-2;j++)
	{   if(d[j]==1)
		{
		for(k=j+1;k<=i-1;k++)
		{   if(d[k]==1)
		    {
		    	j=k;
		    } 
			if(d[k]==2)
			{
				d[j]=3;
				d[k]=3;
				break;
			}
		}
	    }
	}
	
    }
    for(k=0;k<=i-1;k++)
	{
		switch(d[k])
		{
			case 1:printf("$");break;
			case 2:printf("?");break;
			case 3:printf(" ");break;
		}
	}
	printf("\n");
}
	
}