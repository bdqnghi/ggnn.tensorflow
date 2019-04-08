main()
{
	int i,j,k,e,f,*e_point,*f_point,flag;
	char a,b,c[100],z=' ';
	gets(c);
	e_point=&e;
	f_point=&f;
	a=c[0];b=c[strlen(c)-1];
	for(k=1;k<=strlen(c)/2;k++)
	{
		for(i=0;i<strlen(c);i++)
	    {
	    	flag=0;
	    	if(c[i]==a)
	    	{
	    		j=i+1;
	    		while(c[j]==z)
	    		{
	    			j+=1;
	    		}
	    		if(c[j]==b)
	    		{
	    			e=i;
	    			f=j;
	    			c[i]=z;
	    			c[j]=z;
	    			flag=1;
	    		}
	    	}
	    	if(flag)break;
	    }
		printf("%d %d\n",e,f);
	}
}

