void main()
{
	int n,m,i,j,k,t;
	int tt[500],pp[500];
	scanf("%d",&n);
	for(j=0,i=0;i<n;i++)
	{
		scanf("%d",&tt[i]);
		if((tt[i]%2)!=0)
		{
			pp[j]=tt[i]; j++;
		}
	}
	m=j;
	k=m;
	for(i=0;i<m-1;m--)
	{
		for(j=0;j<m-1;j++)
		{
			if(pp[j]>pp[j+1])
			{
				t=pp[j];
				pp[j]=pp[j+1];
				pp[j+1]=t;
			}
		}
	}
	for(i=0;i<k;i++)
	{
	   if(i==0) printf("%d",pp[i]);
	   else printf(",%d",pp[i]);
	}
	printf("\n");
}