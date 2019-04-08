int main()
{
	int a[500],n,b[100],i,j,k,h,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,j=0;i<n;i++)
	{
		if(a[i]%2==0)
		continue;
		else
		{b[j]=a[i];j++;}
	}

	for(k=0;k<j-1;k++)
	for(h=1;h<j-k;h++)
	if(b[h-1]>b[h])
	{
		temp=b[h-1];b[h-1]=b[h];b[h]=temp;}
		
		printf("%d",b[0]);
		for(i=1;i<j;i++)
		printf(",%d",b[i]);
		return 0;
	
	
	
	
}