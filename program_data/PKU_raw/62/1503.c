void main()
{
    char *a,*b;
    int n=0,m=-2,s,i,j;
    a=(char*)calloc(1000,sizeof(char));
    gets(a);
    for(b=a;*b!=0;b++)
    n++;
    b=a;
    for(i=0;i<n;i++)
    {
    	if(*(b+i)==32)
    	{
    		s=i-m;
    		m=i;
    		if(s==1)
    		{
    			for(j=i;j<n-1;j++)
    			*(b+j)=*(b+j+1);
    			n=n-1;
    			i=i-2;
    		}
    	}
    }
    for(b=a;b<a+n;b++)
    printf("%c",*b);
    free(a);
}