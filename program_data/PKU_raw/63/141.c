int main()
{
int x1,x2,y1,y2,i,j,k,t,a[102][102],b[102][102],p,q,z,c[125][125],g,h;
cin>>x1>>y1;
for (i=1;i<=x1;i++)
{
for (j=1;j<=y1;j++)
{
	cin>>a[i][j];
}
}
cin>>x2>>y2;
for (p=1;p<=x2;p++)
{
for (q=1;q<=y2;q++)
{
	cin>>b[p][q];
}
}
for (k=1;k<=x1;k++)
{
for (t=1;t<=y2;t++)
{
	c[k][t]=0;
	for (z=1;z<=x2;z++)
	{
		c[k][t]=c[k][t]+a[k][z]*b[z][t];
	}
}
}
for (g=1;g<=x1;g++)
{
	for (h=1;h<=y2-1;h++)
	{
		cout<<c[g][h]<<" ";
	}
	cout<<c[g][y2]<<endl;
}
return 0;
}