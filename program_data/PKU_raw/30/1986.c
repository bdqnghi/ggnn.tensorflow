int main()
{
	int i,n,sum=0,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    c=i%10;
		d=i/10;
		if(i%7==0)continue;
		if(d==7)continue;
		if(c==7)continue;
		sum+=i*i;
	}
		printf("%d",sum);
	return 0;
}