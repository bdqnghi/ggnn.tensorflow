void main()
{
    char a[10][100000];
    char (*p)[100000];
    char *q1,*q2;
    int t,k;
    scanf("%d\n",&t);
    for(p=a;p<a+t;p++)
    {
    	gets(*p);
    }
    for(p=a;p<a+t;p++)
    {
    	for(q1=*p;*q1!=0;q1++)
    	{
    		k=0;
    		for(q2=*p;*q2!=0;q2++)
    		{
    			if(*q1==*q2)
    			{
    				k=k+1;
    			}
    		}
    		if(k==1)
    		{
    			printf("%c\n",*q1);
    			break;
    		}
    	}
    	if(k!=1)
    	{
    		printf("no\n");
    	}
    }  	
}