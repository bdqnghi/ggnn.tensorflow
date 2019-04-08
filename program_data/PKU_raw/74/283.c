
int sushu(int n)
{
	int i;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(i=3;i<=sqrt(n);i+=2)
	    if(n%i==0) return 0;
	return 1;
}
int huiwen(int n)
{
	int l,a[10],i,m,p;
	l=log10(n)+1;
	for(i=1;i<=l;i++)
	{
		p=pow(10,i);
		a[i-1]=(n%p)/pow(10,i-1);
	}
	for(i=0,m=0;i<l;i++)
		m+=a[l-1-i]*pow(10,i);
	if(n==m) return 1;
	else return 0;
}

void main()
{
	int a,b,j,k,out[100];
	scanf("%d%d",&a,&b);
	for(j=a,k=0;j<=b;j++)
	{
		if(sushu(j)&&huiwen(j)) 
		{
			out[k]=j;
			k++;
		}
	}
	if(k==0) printf("no");
	else
	{
		for(j=0;j<k-1;j++)
			printf("%d,",out[j]);
		printf("%d",out[k-1]);
	}
}