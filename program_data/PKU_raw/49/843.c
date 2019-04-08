int main()
{
	char a[500] ,b[500]={'0'};
	int la,i,j,n=0,m;
	cin >> a;
	la = strlen(a);
	for(m=2;m<=la;m=m+2)
	{
		for(i=0;i<=la-m;i++)
		{
			for(j=i;j<=i+m/2-1;j++)
			{
				if(a[j]==a[m+2*i-1-j])
				{
					n++;
					b[j-i]=a[j];
					b[m+i-1-j]=a[m+2*i-1-j];
				}
			}
			if(n==m/2)
			{
					cout<<b<<endl;
				}
			n=0;
		}
	}
	return 0;
}
