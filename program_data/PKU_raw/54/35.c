void main()
{
	int n,k,i;
	int apple[100]={0};
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		apple[i]=k;
	do
	{
		apple[0]=apple[0]+n;
		for(i=1;i<n;i++)
		{
			if(apple[i-1]%(n-1)!=0)
				break;
		    else
			apple[i]=apple[i-1]*n/(n-1)+k;
		}
	}while(i<n);
	printf("%d",apple[n-1]);
}
	
