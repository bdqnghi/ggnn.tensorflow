void main()
{
	int n,i,x(int y),s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		if(i%7!=0 && x(i)==0) s=s+i*i;
	printf("%d\n",s);
}
x(int y)
{
	int a,b;
	a=y%10;
	b=(y-a)/10;
	if(a==7 || b==7) return 1;
	else return 0;
}