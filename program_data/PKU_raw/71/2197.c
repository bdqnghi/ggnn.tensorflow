

int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,year,month1,month2,i,j,k,s;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>year>>month1>>month2;
		if (year%400==0)  //????
			k=1;
		else if (year%100==0)
			k=0;
		else if (year%4==0)
			k=1;
		else
			k=0;
		if (k==1)
			a[2]=29;
		else
			a[2]=28;
		if (month1>month2)
		{
			k=month2;
			month2=month1;
			month1=k;
		}
		s=0;
		for (j=month1;j<month2;j++)  //??????
			s+=a[j];
		if (s%7==0)  //?????
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
