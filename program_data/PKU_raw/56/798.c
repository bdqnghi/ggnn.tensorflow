
void main()
{
	int a[5]={0},n,s,r,b,j,i,t;
	scanf("%d",&n);
	s=0;
	for(r=0;r<5;r++)
	{
		a[r]=n%10;
		n=n/10;
	}
	for(b=0;b<5;b++)
	{
				
		if(a[b]!=0)
		{   s=s*10;
			s=a[b]+s;
		}
		else
			s=s;
	}
	printf("%d\n",s);
}