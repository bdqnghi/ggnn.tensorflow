void main()
{
	int a[300],n,i,j,m[300]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		for(j=0;j<i;j++)
		{
		 if(a[j]==a[i])
		    m[i]=m[i]+1;
                                        }
			if(m[i]==0)
                         {if(i==0)
		             printf("%d",a[0]);
			else printf(",%d",a[i]);}
		
	}
}
