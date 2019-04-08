int main()
{
	char str[310],*ps,j;
	int i,a=0;
	scanf("%s",str);
	for(j=65;j<=90;j++)
	{
	    i=0;
		for(ps=str;*ps!='\0';ps++)
	    {
		    if(*ps==j)
		    {
			    i++;
		    }
	    }
	    if(i!=0)
	    {
		    printf("%c=%d\n",j,i);
			a++;
	    }
	}
	for(j=97;j<=122;j++)
	{
	    i=0;
		for(ps=str;*ps!='\0';ps++)
	    {
		    if(*ps==j)
		    {
			    i++;
		    }
	    }
	    if(i!=0)
	    {
		    printf("%c=%d\n",j,i);
			a++;
	    }
	}
	if(a==0)
	{
		printf("No\n");
	}
	return 0;
}