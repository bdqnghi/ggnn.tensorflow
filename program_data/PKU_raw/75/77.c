int main()
{
	int a[2][1000]={0},i,j=0,k,n,p=0,max=0;
	char q;
	for(i=0;i<2;i++)
	{
		j=0;
		do
		{
			cin>>a[i][j];
			j++;
		}
		while((q=cin.get())!='\n');	
	}
    for(k=0;k<=1000;k++)
	{
		for(n=0;n<j;n++)
		{
			if(a[0][n]<=k&&a[1][n]>k)
				p=p+1;
		}
		if(p>max)max=p;
		p=0;
	}
	cout<<j<<" "<<max<<endl;
	return 0;
}