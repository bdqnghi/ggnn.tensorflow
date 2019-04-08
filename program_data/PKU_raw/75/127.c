
int main( )
{
	int time,count=0,a[1001]={0},i;
	char b;
	while(1)
	{
		cin>>time;	
		a[time]++;
		count++;	
		if(cin.get()!=',')
			break;
	}	
	for(i=0;i<count;++i)	
	{
		cin>>time>>b;
		a[time]--;
	}
	int max=0,renshu=0;
	for(i=0;i<1001;++i)
	{
		renshu+=a[i];
		if(renshu>max)
			max=renshu;
	}
	cout<<count<<" "<<max;
	return 0;
}
