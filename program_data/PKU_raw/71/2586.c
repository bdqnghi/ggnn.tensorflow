
int main() {
	int a[12];
	a[1]=31;
	a[2]=28;
	a[3]=31;
	a[4]=30;
	a[5]=31;
	a[6]=30;
	a[7]=31;
	a[8]=31;
	a[9]=30;
	a[10]=31;
	a[11]=30;
	a[12]=31;
	int n;
	cin>>n;
	int b[n];
	int p1=0;
	int p2=0;
	int p3=0;
	int a1,a2,t;
	int sum=0;
	int p4=0;
	for(int i=1;i<=n;i=i+1)
	{
		cin>>b[i];
		p1=b[i]%4;
		p2=b[i]%100;
		p3=b[i]%400;
		if(p3==0)
			a[2]=29;
		else
		{
			if((p2!=0)&&(p1==0))
				a[2]=29;
		}
		cin>>a1>>a2;
		if(a1>a2)
		{
			t=a1;
			a1=a2;
			a2=t;
		}
		for(int j=a1;j<a2;j++)
			sum=sum+a[j];
		p4=sum%7;
		if(p4==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		sum=0;
		a[2]=28;
	}
	return 0;
}
