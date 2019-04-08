//******************************
//*????jmyhhx.cpp*
//*??????*
//*?????2010?10?9?*
//*?????????????*
//****************************

int main()
{
	int k=0,i=0,j=0,max=0,imax=0;
	cin>>k;
	cin>>j;
	max=j;
	imax=j;
	for(i=2;i<=k;i++)
	{
		cin>>j;
		if (j>=max)
			max=j;
		else
		if(j>=imax)
			imax=j;
	}
	cout<<max<<endl;
	cout<<imax<<endl;
	return 0;


}