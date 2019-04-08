int main()
{
	int n,num[101],i,j,num2[101];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
		num2[n-i-1]=num[i];//???D???¨°
	}
		 cout<<num2[0];
		 for(i=1;i<n;i++)
			 cout<<" "<<num2[i];//?????&Aacute;??¨&reg;?T?????¤???
	return 0;
}
