int main()
{
	int a[1000],b[1000],s,i,c[1000],max;
	memset(c,0,sizeof(c));
	cin>>a[0];
	char d;
	for(i=1;i<1000;i++)
		{
		if(cin.peek()==',')
		   {
			cin>>d;
			cin>>a[i];
		   }
		else
			break;
		}
	s=i-1;
	cin>>b[0];
	for(i=1;i<1000;i++)
			{
			if(cin.peek()==',')
			   {
				cin>>d;
				cin>>b[i];
			   }
			else
				break;
			}
	for(i=0;i<=s;i++)
		for(int j=a[i];j<b[i];j++)
			c[j]++;
	max=c[0];
	for(i=1;i<1000;i++)
		if(c[i]>max)
			max=c[i];
	cout<<s+1<<" "<<max;
	return 0;
}