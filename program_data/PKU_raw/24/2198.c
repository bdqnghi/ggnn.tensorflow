void main()
{
    char s[50][15],c;
    int i=1,n=0,max=0,min=10,x=0,y=0;
    do{
    	scanf("%s",&s[i]);
    	i++;
    	scanf("%c",&c);
    }while(c!='\n');
    n=i-1;
    for(i=1;i<=n;i++)
    {
    	if(strlen(s[i])>max)
    	{
    		max=strlen(s[i]);
    		x=i;
    	}
    	if(strlen(s[i])<min)
    	{
    		min=strlen(s[i]);
    		y=i;
    	}
    }
    printf("%s\n",s[x]);
    printf("%s",s[y]);
}