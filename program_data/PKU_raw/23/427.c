int main()
{
	char c[101];
	int i=1,z;
	while(true)
	{
		c[i]=getchar();
		if(c[i]=='\n')break;
		i=i+1;
	}
	int m,n;
	n=i-1;
	for(m=i-2;m>=1;m--)
	{
		if(c[m]==' ')
		{
			for(z=m+1;z<=n;z++)cout<<c[z];
			cout<<" ";
			n=m-1;
		}
		else if(m==1)
		{
			for(z=m;z<=n;z++)cout<<c[z];

		}
		
	}


	return 0;
}