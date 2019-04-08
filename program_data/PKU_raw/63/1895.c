

int main ()
{
	int x1,x2,y1,y2,i,j,k,l,h,a[101][101]={0},b[101][101]={0},c[101][101]={0};

	cin >>x1>>y1;

	for (i=0;i<x1;i++)
	{
		for (j=0;j<y1;j++)
		{
			cin >>a[i][j];
		}
	}
	cin >>x2>>y2;

	for (i=0;i<x2;i++)
	{
		for (j=0;j<y2;j++)
		{
			cin >>b[i][j];
		}
	}
	for (k=0;k<x1;k++)
	{
		for (l=0;l<y2;l++)
		{
			for (h=0;h<x2;h++)
			{
				c[k][l]+=a[k][h]*b[h][l];
			}
		}
	}
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2-1;j++)
		{
			cout <<c[i][j]<<" ";
		}
		cout <<c[i][y2-1]<<endl;
	}
	return 0;
}
			