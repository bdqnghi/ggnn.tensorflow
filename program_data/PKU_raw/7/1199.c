int main()
{
	char a[256],b[256],c[256];
	cin>>a>>b>>c;
	int L,l,x,y;
	L=strlen(a);
	l = strlen(b);
	for(x=0;x<=L-l;x++)
	{
		if(a[x]!=b[0])
			continue;
		else
		{
			for(y=0;y<l;y++)
				if(a[x+y]!=b[y])
					break;
			if(y!=l)
				continue;
			else
				break;
		}
	}
	if(x==L-l+1)
		cout<<a<<endl;
	else
	{
		int i=0;
		while(i!=x)
		{
			cout<<a[i];
			i++;
		}
		cout<<c;
		cout<<a+i+l<<endl;
	}
	return 0;
}