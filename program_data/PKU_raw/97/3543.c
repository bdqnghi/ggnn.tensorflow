int main()
{
	int sum,a[7]={0,0,0,0,0,0,0},i;
	cin>>sum;
	a[1]=sum/100;
	sum=sum-a[1]*100;
	a[2]=sum/50;
	sum-=a[2]*50;
	a[3]=sum/20;
	sum-=a[3]*20;
	a[4]=sum/10;
	sum-=a[4]*10;
	a[5]=sum/5;
	sum-=a[5]*5;
	a[6]=sum;
	for(i=1;i<=6;i++)
	{
		cout<<a[i]<<endl;
	}

	return 0;
}