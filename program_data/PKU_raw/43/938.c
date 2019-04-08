
int main()
{
	int n;
	cin>>n;
	int a,b,c,d;
	for(a=3;a<=n/2;a=a+2)
	{
		for(c=2;c<=sqrt((double) a);c++) if(a%c==0) break;
		for(d=2;d<=sqrt((double)n-a);d++) if((n-a)%d==0) break;
		if(c>sqrt((double)a)&&d>sqrt((double)n-a)) cout<<a<<" "<<n-a<<endl;
	}
	return 0;		
}