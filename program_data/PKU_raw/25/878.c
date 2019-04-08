int main()
{
	int a[55];
	memset(a,-1,55*sizeof(int));
	int n;
	cin>>n;
	a[0]=1;
	while(n>0)
	{
		int i,yu=0,ji=0;
		for(i=0;;i++)
		{
			if(a[i]==-1){a[i]=a[i]+yu*2;break;}
			else
			{
				ji=a[i]*2;
				ji=ji+yu;
				a[i]=ji%10;
				if(ji>9)yu=1;
				else yu=0;
				
				
			}

		}
		n--;
	}
	int i=0;
	while(a[i]!=-1)i++;
	i--;
	while(i>-1){cout<<a[i];i--;}

	return 0;
}