int main()
{
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
    int l1,l2,i,j,p;
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=(l2-l1);i=i+1)
    {
    	if (s2[i]==s1[0])
    	{
    		p=0;
    		for(j=1;j<l1;j=j+1)
    		{
    			if (s1[j]!=s2[j+i])
    			{
    				p=1;
    				break;
    			}
    		}
    		if (p==0) break;
    	}
    }
    printf("%d",i);
    return 0;
}
