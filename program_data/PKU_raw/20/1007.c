int main()
{
    int i,L,zhi,j,k;
    char str[15],substr[4],c;
    while(scanf("%s%s",str,substr)!=EOF)
    {
    	L=strlen(str);
    	c=str[0];
    	zhi=0;
    	for(i=1;i<L;i++)
    	{
	    	if(c<str[i]) 
	    	{
	    		c=str[i];
	    		zhi=i;
	    	}
	    }
	    for(j=0;j<=zhi;j++)
	    {
    		printf("%c",str[j]);
    	}
    	printf("%s",substr);
    	for(k=zhi+1;k<L;k++)
    	{
	    	printf("%c",str[k]);
	    }
	    printf("\n");
    }
}