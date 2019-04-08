int fi(int a,int j);
void main()
{
	int a,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		printf("%d\n",fi(a,2));
	}
}
int fi(int a,int k)
{
	int i,b=1;
	if(a==1)	
		return 0;
	for(i=k;i*i<=a;i++)
		if(a%i==0)
			b=b+fi(a/i,i);
	return b;
}