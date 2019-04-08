int susu(int a)
{
	if(a%2==0)
		return 0;
	int i,k=1;
	for(i=3;i<=sqrt(a);i=i+2)
		if(a%i==0)
			k=0;
		return k;
}
int main()
{
	int n,m,l,z,x;
	cin>>n;
	for(z=6;z<=n;z=z+2)
		for(l=3;l<=(z/2);l=l+2)
		{
			if(susu(l)+susu(z-l)==2)
			{cout<<z<<"="<<l<<"+"<<(z-l)<<endl;break;}
			else continue;
		}
		return 0;
}



		
