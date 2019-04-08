void main()
{
    int i,l1,t;
    char s1[100],s2[100],max;
    while (scanf("%s%s",s1,s2)!=EOF)
    {
    	l1=strlen(s1);
    	for(i=0,t=0,max=s1[0];i<l1-1;i++)
    	{
    		if(s1[i]>max)
    		{
    			max=s1[i];
    			t=i;	
    		}	
    	}//printf("%d\n\n",t);
    	s1[l1+3]='\0';
    	for(i=l1+2;i>t+3;i--)
    	s1[i]=s1[i-3];
    	for(i=1;i<=3;i++)
    	s1[t+i]=s2[i-1];
    	printf("%s\n",s1);
    	
    }
}