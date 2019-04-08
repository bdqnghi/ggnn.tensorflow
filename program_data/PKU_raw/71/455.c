
int main()
{
	int year[200],a[200],b[200],n,i,j,k,t,sum;
	int m[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>n;
	for (i=1;i<=n;i++)
	{
		sum=0;
		cin>>year[i]>>a[i]>>b[i];
		if ((year[i]%4==0 && year[i]%100!=0) || year[i]%400==0) k=1;
		else k=0;
		if (a[i]>b[i])
		{
			t=a[i];
			a[i]=b[i];
			b[i]=t;
		}
		for (j=a[i]-1;j<b[i]-1;j++)
			sum=sum+m[k][j];
		if (sum%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
			

	return 0;
}

