char huiwen(int n)
{
	int i,k,a,b;
	k=1;i=0;
	while(k<=n)
	{
		k=k*10;
		i++;
	}
	k=k/10;
	while(i!=1&&i!=0)
	{
		a=n/k;
		b=n%10;
		if(a==b)
		{
			n=(n-k*a-b)/10;
			i=i-2;
			k=k/100;
		}
		else break;
	}
	if(i==1||i==0) return('T');
	else return('F');
}
char sushu(int n)
{
	int i,k;
	if(n==2) return('T');
	else 
	{
		if(n%2==0) return('F');
		else 
		{
			k=sqrt((double)n);
			for(i=3;i<=k;i=i+2)
			{
				if(n%i==0) break;
			}
			if(i>k) return('T');
			else return('F');
		}
	}
}
void main()
{
	int m,n,i,a[1000],no;
	scanf("%d %d",&m,&n);
	no=0;
	for(i=m;i<=n;i++)
	{
		if(sushu(i)=='T'&&huiwen(i)=='T')
		{
			a[no]=i;
			no++;
		}
	}
	if(no==0) printf("no");
	else 
	{
		printf("%d",a[0]);
		for(i=1;i<no;i++) printf(",%d",a[i]);
	}
}