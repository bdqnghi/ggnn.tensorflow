int main()
{
	int i=0,figure,figuremax,time,n,start[1001],end[1001];
	char sign;
	do
	{
		i++;
		cin>>start[i];
		cin.get(sign);
		if(sign=='\n') break;
	}while(1);
	n=i;
	for(i=1;i<=n;i++)
	{
		cin>>end[i];
		cin.get(sign);
	}
	cout<<n<<' ';
	figuremax=0;
	for(time=0;time<=1000;time++)
	{
		figure=0;
		for(i=1;i<=n;i++)
		{
			if(time>=start[i]&&time<end[i]) figure++;
		}
		if(figure>figuremax) figuremax=figure;
	}
	cout<<figuremax;

	return 0;
}