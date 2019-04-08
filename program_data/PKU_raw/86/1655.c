int main()
{
	int n,a,b=0,i=0;
	int m[1000];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(a==0)
			cout<<60<<endl;
		else
		{
			for(b=0;b<a;b++)
		
				cin>>m[b];

			for(b=0;b<a;b++)
			{
				if((m[b]+(b+1)*3)>=60 ) 
				{	cout<<m[b];
				break;}
				if(((m[b]+(b+1)*3)<60)&&((m[b+1]+(b+2)*3)>60))

				{    if((m[b+1]+(b+1)*3)<=60)
				{   cout<<m[b+1]<<endl; break;}
				else
				{cout<<(60-(b+1)*3)<<endl;
				break;};}
			}
			if((m[a-1]+a*3)<60)
				cout<<(60-a*3)<<endl;
		
		}
	}
	return 0;
}