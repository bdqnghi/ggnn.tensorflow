int main()
{
	int n,y,m1,m2,k,t=0,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
		b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	while(n>0)
	{
		cin>>y>>m1>>m2;
		if(m1>m2){k=m1;m1=m2;m2=k;}
		if(y%4!=0||((y%100==0)&&((y%400)!=0)))
			{for(i=m1;i<m2;i++)
				t+=a[i];
			if(t%7==0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;}
		else{
			for(i=m1;i<m2;i++)
			t+=b[i];
			if(t%7==0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;}
		t=0;
	n--;
	}
	return 0;

}