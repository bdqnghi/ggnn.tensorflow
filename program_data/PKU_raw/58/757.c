int main()
{
	int n,i,j,b,x=0;
	char c[100];
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
	{
		b=1;
		cin.getline(c,100,'\n');
		if(!(c[0]>64&&c[0]<91||c[0]==95||c[0]>96&&c[0]<123))
			b=0;
		for(j=0;c[j]!='\0';j++)
			if(!(c[j]>64&&c[j]<91||c[j]==95||c[j]>96&&c[j]<123||c[j]>47&&c[j]<58))
				b=0;
		cout<<b<<endl;
	}
	return 0;
}