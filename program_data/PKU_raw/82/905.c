int main (){
	int i,k[101] ,n,a,b,sum,j;
	k[0] =0;
	sum =0;
	cin >>n;
	i=1;
	for(i=1;i<=n;i=i+1)
	{
		cin >> a >> b;
	if (a>=90 &&a<=140&&b>=60&&b<=90)
		k[i] =k[i-1] +1;
	else k[i] =0;

	}
	for(j=1;j<=n;j++)
	{
		if (k[j]>=sum)
			sum =k[j];

	}
	cout << sum <<endl;
	return 0;

}