void main()
{
	int n,t,x,i;
	int age[100];
	char c[10],num[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",num[i],&age[i]);

	for(i=0;i<n;i++)
	    if(age[i]>=60)
	
			for(x=i;x>0;x--)
		           if(age[x]>age[x-1])
				   {   t=age[x];age[x]=age[x-1];age[x-1]=t;
			          strcpy(c,num[x]);strcpy(num[x],num[x-1]);strcpy(num[x-1],c);
				   }
			
			
		
	

	for(i=0;i<n;i++)
		printf("%s\n",num[i]);
}