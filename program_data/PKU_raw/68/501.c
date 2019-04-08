int sushu(int n)
	{
		int i,m;
		m=sqrt(n)+1;
		for(i=2;i<m;i++)
		{
           if(n%i==0)
			   break;
		}
		if(i==m)
			return(1);
		else 
			return(0);
	}
void main()
{
	int n;
	scanf("%d",&n);
	int i,k;
	for(i=6;i<=n;i=i+2)
	{
       for(k=3;k<=n;k++)
	   {
		   if(sushu(k)==1&&sushu(i-k)==1)
		   {printf("%d=%d+%d\n",i,k,i-k);
		   break;}
	   }
	}
}