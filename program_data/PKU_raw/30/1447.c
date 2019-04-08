int main()
{
	int n=0,i=0,a=0,b=0,c=0,d=0;
	cin>>n;
	for(i=1;i<=n;i=i+1)
		a=a+i*i;
	for(i=7;i<=n;i=i+7)
		b=b+i*i;
	for(i=70;i<=n&&i<80;i=i+1)
		c=c+i*i;
	for(i=17;i<=n;i=i+10)
		d=d+i*i;
	a=a-b-c-d;
	if(n>=77)
		a=a+70*70+77*77*2;
	else if(n>=70)
		a=a+70*70;
	cout<<a<<endl;
	return 0;
}