void main()
{
	int a[300]={0};
	int n=1;
	int i,j;
	int flag=0;
	char b;
	for( ; ; )
	{
		scanf("%d%c",&a[n-1],&b);
		if(b!='\n')
		    n=n+1;
		else
			break;
	}
	
	
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
		 if(a[i]<a[j])
		 {
		  int t=0;
		  t=a[i];
		  a[i]=a[j];
		  a[j]=t;
		 }
		}
		if(a[0]==a[n-1])
		printf("No");
		else
		{
	      for(i=0;;i++)
		  {
	    	if(a[i]==a[i+1])
			{
		        flag=flag+1;
			}
	     	else
		    	break;
		  }
        	printf("%d",a[flag+1]);
		}
}