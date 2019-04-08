int sushu(int n)
{
	int i,result=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			result=0;
			break;
		}
	}
	return result;
}
int huiwen(int n)
{
	int bit,i,t=10,a[10];
	for(bit=1;;bit++)
	{
		if(n/t!=0)
		{
			t*=10;
		}
		else break;
	}
	t/=10;
	for(i=1;i<=bit;i++)
	{
		a[i]=n/t;
		n-=a[i]*t;
		t/=10;
	}
	int out=1;
	for(i=1;i<=bit/2;i++)
	{
		if(a[i]==a[bit-i+1])  continue;
		else
		{
			out=0;
			break;
		}
	}
	return out;
}

void main()
{
	int m,n,y=0,i,count;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)&&huiwen(i))
		{
			y=1;
			printf("%d",i);
			count=i;
			break;
		}
	}
	if(count!=n)
	{
		for(i=count+1;i<=n;i++)
		{
			if(sushu(i)&&huiwen(i))  printf(",%d",i);
		}
	}
	if(y==0)  printf("no");


}