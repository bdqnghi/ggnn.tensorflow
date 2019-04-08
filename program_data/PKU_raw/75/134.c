
int main()
{
	int i,j,ctr=0,a[1100]={0},b,x[1100]={0},max=0;
	while(1)
	{
		cin>>a[++ctr];
		if(cin.peek()=='\n')
			break;
		cin.get();
	}
	cin.get();
	for(i=1;i<=ctr;i++)
	{
		cin>>b;
		for(j=a[i];j<b;j++)
			x[j]++;
		if(!cin.eof())
			cin.get();
	}
	for(i=1;i<1050;i++)
		max=(x[i]>max)?x[i]:max;
	cout<<ctr<<" "<<max<<endl;
	return 0;
}