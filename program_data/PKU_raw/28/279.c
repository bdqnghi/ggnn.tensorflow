void main()
{
	int i;int n;char a[100];
	n=0;
	while(scanf("%s",a)!=EOF)
	{
	    char * p;
	     if(n==0)
		 {
		     for(p=a,i=0;*p!='\0';p++,i++);
		     printf("%d",i);
	       	n++;
		 }
     	else
		{
	    	for(p=a,i=0;*p!='\0';p++,i++);
		    printf(",%d",i);
		}
	}
}
