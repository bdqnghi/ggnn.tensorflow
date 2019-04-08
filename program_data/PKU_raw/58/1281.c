void main()
{
    int n,k;
    char a[100][100];
    char (*p)[100];
    char *q;
    scanf("%d\n",&n);
    for(p=a;p<a+n;p++)
    {
    	gets(*p);
    }
    for(p=a;p<a+n;p++)
    {
    	if(**p=='_'||((**p>='a')&&(**p<='z'))||((**p>='A')&&(**p<='Z')))
    	{
    		for(q=*p;*q!=0;q++)
    		{
    			if(*q=='_'||((*q>='a')&&(*q<='z'))||((*q>='A')&&(*q<='Z'))||((*q>='0')&&(*q<='9')))
    			k=1;
    			else
    			{
    				k=0;break;
    			}
    		}
    	}
    	else
    	k=0;
    	printf("%d\n",k);
    }
}