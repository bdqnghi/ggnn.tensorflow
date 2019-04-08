int main()
{
	char x[101];
	int s[101],i,a,n[101],k,y;
	scanf("%s",x);
	for(i=0;x[i]!='\0';i++)
	{
		n[i]=x[i]-48;
	}
	k=i;
	if(k==2&&n[0]==1&&n[1]<3)
	{
		printf("0\n%d",10*n[0]+n[1]);
	}
	else {
		if(k==1)
		printf("0\n%d",n[0]);
    	else 
		{
			if(n[0]>1||(n[0]==1&&n[1]>=3))
			{
	    	a=10*n[0]+n[1];
	    	for(i=1;i<k-1;i++)
			{
			
			s[i-1]=a/13;
			a=10*(a%13)+n[i+1];

			}
		    s[k-2]=a/13;
	    	y=a%13;
	    	for(i=0;i<k-1;i++)
			printf("%d",s[i]);
	    	printf("\n%d",y);

			}
        	else
			{
		    a=100*n[0]+10*n[1]+n[2];
		    for(i=1;i<k-2;i++)
			{
			
			s[i-1]=a/13;
			a=10*(a%13)+n[i+2];

			}
	    	s[k-3]=a/13;
	       	y=a%13;
		    for(i=0;i<k-2;i++)
	   		printf("%d",s[i]);
	    	printf("\n%d",y);

			}
	}}

	return 0;
}