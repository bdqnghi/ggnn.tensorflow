int a[100][100];
void q(int l)
{
	for(int g=0;g<l;g++)
		for(int h=1;h<l-1;h++)
			a[g][h]=a[g][h+1];
	for(int g=0;g<l-1;g++)
		for(int h=1;h<l-1;h++)
			a[h][g]=a[h+1][g];
}
int f(int y)
{
	int min,now;
	if(y==1)
		return 0;
	for(int g=0;g<y;g++)
	{
		min=a[g][0];
		for(int h=1;h<y;h++)
			if(a[g][h]<min)
				min=a[g][h];
		for(int h=0;h<y;h++)
			a[g][h]-=min;
	}
	for(int g=0;g<y;g++)
	{
		min=a[0][g];
		for(int h=1;h<y;h++)
			if(a[h][g]<min)
				min=a[h][g];
		for(int h=0;h<y;h++)
			a[h][g]-=min;
	}
	now=a[1][1];
	q(y);
	return now+f(y-1);
}
int main()
{
	int n;
	cin>>n;
	for(int k=1;k<=n;k++)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		cout<<endl<<f(n);
	}
	return 0;
}