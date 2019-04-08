int main()
{
	int n;
	scanf("%d",&n);
	int x1,y1,x2,y2,k;
	int i,j;
	int x;
	for(i=1;i<=n*n;i++)
	{
		
		scanf("%d",&x);
		
		if(x==0)
	       break;
			
		
		
		
	}	
	for(j=1;j<=n*n-i;j++)
	{
	    scanf("%d",&x);
		if(x==0)
		k=j+i;
	}
	x1=(int)(i/n)+1,y1=i%n;
	x2=(int)(k/n)+1,y2=k%n;
	int m;
	m=(x2-x1-1)*(y2-y1-1);
	printf("%d\n",m);
	return 0;
}
	
