int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},day[13];
    int w,i;
	cin>>w;
	w=(w+12)%7;
	day[1]=w;
	if(w==5)
		cout<<1<<endl;
	for(i=2;i<=12;i++)
	{
        day[i]=(day[i-1]+a[i-1])%7;
		if(day[i]==5)
			cout<<i<<endl;
	}
	return 0;
}
