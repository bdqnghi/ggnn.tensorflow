int main ()
{
	int m,n,i,w=0;
	int a[50],j=1;
	scanf("%d%d",&m,&n);
	int huiwen(int i);
	int susu(int i);
	for (i=m;i<=n;i++)
	{
		if (i==huiwen(i))
			w=1;
		w=w * susu(i);
		if (w==1)
		{	a[j]=i;
		    j++;
		}
	}
	if (j==1)
		printf("no");
	else 
	{
		for (i=1;i<j-1;i++)
			printf("%d,",a[i]);
		printf("%d",a[i]);
	}
	return 0;

}
int huiwen (int i)
{
	int n=0;
	while (i!=0)
	{
		n=i%10+10*n;
		i=i/10;
	}
	return n;
}
int susu(int i)
{
	int j,w=1;
	for (j=2;j<=i/2;j++)
		if (i%j==0)
			w=0;
	return w;
}