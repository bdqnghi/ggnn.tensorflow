int prime(int k)
{
	int h,i,g;
	h=sqrt(k);
	g=1;
	for(i=2;i<=h;i++)
	{	if(k%i==0)
	{	g=0;
	break;}
	}
	if(g==0)
		return 0;
	else
		return 1;
}
int main()
{
	int m,j,l;
	cin>>m;
	for(j=3;j<=m/2;j=j+2)
	{
		l=m-j;
		if(prime(j)==1&&prime(l)==1)
			cout<<j<<" "<<l<<endl;
		else
			continue;
	}
		return 0;
}
