int main ()
{
	int a,b;
	cin >> a >>b ;
	int x[11],y[11],xi[11],yi[11];
	int i,j,k;
	for (i=0;i<=11;i++)
	{
		x[0]=a;
		if (x[i]==1) break;
		else x[i+1]=x[i]/2;
	}
	for (j=0;j<=i;j++)
		xi[j]=x[i-j];
	for (i=0;i<=11;i++)
	{
		y[0]=b;
		if (y[i]==1) break;
		else y[i+1]=y[i]/2;
	}
	for (j=0;j<=i;j++)
		yi[j]=y[i-j];
	for (k=0;k<=i;k++)
	{
		if (xi[k]-yi[k]!=0) break;
	}
	cout << xi[k-1];
	return 0;
}
