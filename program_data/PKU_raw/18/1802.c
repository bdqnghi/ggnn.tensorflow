int p[10000][10000];
int f(int x)
{
	int min;
	int k;
	if (x==2)
	{
		for(int i=0;i<=1;i++)
		if (p[i][0]>p[i][1]) {p[i][0]=p[i][0]-p[i][1];p[i][1]=0;}
		else{p[i][1]=p[i][1]-p[i][0];p[i][0]=0;}
		for(int i=0;i<=1;i++)if (p[0][i]>p[1][i]) {p[0][i]=p[0][i]-p[1][i];p[1][i]=0;}
		else{p[1][i]=p[1][i]-p[0][i];p[0][i]=0;}
		return p[1][1];

	}

	else
		{
		for(int i=0;i<x;i++){

		min=p[i][0];
		for(int j=0;j<x;j++)

			if (p[i][j]<min) min=p[i][j];
		for(int j=0;j<x;j++)
			p[i][j]=p[i][j]-min;
	}
	for(int i=0;i<x;i++){

			min=p[0][i];
			for(int j=0;j<x;j++)

				if (p[j][i]<min) min=p[j][i];
			for(int j=0;j<x;j++)
				p[j][i]=p[j][i]-min;
		}
	k=p[1][1];
	for(int i=0;i<x;i++)
		for(int j=1;j<x-1;j++)
			p[i][j]=p[i][j+1];
	for(int i=0;i<x-1;i++)
			for(int j=1;j<x-1;j++)
				p[j][i]=p[j+1][i];
	return k+f(x-1);

}
}
int main()
{
	int n;
	cin>>n;
	int s=1;
	for(s=1;s<=n;s++)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>p[i][j];
		cout<<f(n)<<endl;
	}
	return 0;
}
