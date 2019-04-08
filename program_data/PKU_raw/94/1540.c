int main (){
	
	int n,i,a[500],b[500],j=0,l,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++)
	{
		if(((a[i])%2)!=0)
		{
            b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
        for(l=i;l<j;l++)
		{
            if(b[l]<=b[i])
			{
                 k=b[i];
				 b[i]=b[l];
				 b[l]=k;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		if(i!=j-1)
		{
		    printf("%d,",b[i]);
		}
		else
		{
			printf("%d\n",b[i]);
		}
	}
	




	return 0;
}