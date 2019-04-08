int sushu(int n)
{
	int flag=0,i;
	for(i=2;i<n;i++)
	{
		if (n%i==0) 
		{
			flag=1;
			break;
		}
	}
	if(flag) return 0;
	else return 1;
}

void main()
{
	int n,m,p,i;
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		p=n-i;
	     if (sushu(i)==1&&sushu(p)==1) 
		 {
		   printf("%d %d\n",i,p);  	
		 }
	}
}