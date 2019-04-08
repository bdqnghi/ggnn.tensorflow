int main()
{
	int f(int x,int y);
	int n,i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",f(a[i],2));
	}
	scanf("%d",&i);
	return 0;
}
int f(int x,int y)
{
	int s,j,k,l,m,n;
	if(x==1) s=1;
	else if(y>x) s=0;
	else {
		for(l=1;l<=x;l++)
		{
			k=0;
			if(x%l==0) k=k+1;
		}
		if(k==2) s=1;
	else 
	{
		s=0;
		for(j=y;j<=x;j++)
		{
		
			if(x%j==0){ s=s+f(x/j,j);}
		}
		
	}
	}
		return s;
}