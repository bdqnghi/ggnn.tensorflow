int jud(int k)
{
	int s=sqrt(k);
	for(int i=2;i<=s;i++)
		if(k%i==0)
			return 0;
	return 1;


}
int main()
{
    int m, t, s;
	cin>>m;
	for(t=3;t<=m/2;t++)
    {
		s=m-t;
		if(jud(s)+jud(t)==2)
			cout<<t<<' '<<s<<endl;
	
	}
	return 0;

}