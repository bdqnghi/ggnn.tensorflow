int main()
{
	int sum,i=1,a[7]={0};
	cin>>sum;
	a[1]=sum/100;
	a[2]=(sum-a[1]*100)/50;
	a[3]=(sum-a[2]*50-a[1]*100)/20;
	a[4]=(sum-a[3]*20-a[2]*50-a[1]*100)/10;
	a[5]=(sum-a[4]*10-a[3]*20-a[2]*50-a[1]*100)/5;
	a[6]=(sum%5);
	for(i=1;i<=6;i++)
		cout<<a[i]<<endl;
	return 0;
}
