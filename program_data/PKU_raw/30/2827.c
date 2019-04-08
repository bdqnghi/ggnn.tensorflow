
int main()
{
	int a[100];
	int b,c,n,i;
	scanf("%d",&n);
	b=0;
	for(i=0;i<100;i++){
		a[i]=i+1;
	}
	for(i=1;i<=n;i++){
		if((a[i-1]%7==0)||((int)floor(a[i-1]/10)==7)||(a[i-1]%10==7))
			c=0;
		else
			b+=a[i-1]*a[i-1];
	}
	printf("%d",b);
	return 0;
}