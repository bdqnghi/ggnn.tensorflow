int turn(int a,int b)
{
	int i,k;
	if(a==1) k=1;
	else if(a<b) k=0;
	else
	{
		k=0;
		for(i=b;i<=a;i++)
			if(a%i==0)
				k=k+turn(a/i,i);
	}
	return k;
}
int main()
{
	int n,i,a[1000],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t=turn(a[i],2);
		printf("%d\n",t);
	}
	return 0;
}