void main()
{
	int n,k,i,s,j;
	scanf("%d %d",&n,&k);printf("\n");
	i=1;
	do
	{   
		s=i;
		for(j=1;j<=n;j++)
		{
			s=s*n;
		    s=s+k;
			if(s%(n-1)!=0)break;
            else s=s/(n-1);
		}
		i=i+1;
	}while(j<n);
	printf("%d",s);
}
