int main()
{
    int k,i;
	cin>>k;
	for(i=0;i<k;i++)
	{
		int n,j;
		cin>>n;
		double a[110],aver,s=0.0,x=0.0;
		for(j=0;j<n;j++)
		{
			cin>>*(a+j);
            x=x+*(a+j);
		}
		aver=x/n;
	//	cout<<aver<<endl;

		for(j=0;j<n;j++)
			s=s+(*(a+j)-aver)*(*(a+j)-aver);
		s=sqrt(s/n);
        printf("%.5lf\n",s);
			cout<<endl;
	}
	return 0;
}


