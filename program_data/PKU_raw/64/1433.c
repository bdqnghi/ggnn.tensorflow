int main()
{
	int n,i,j,m=0,k,s,t;
	cin >> n;
	double d[101][101];
	struct point
	{
		int x;
		int y;
		int z;
	}p[11];

	for (i=0;i<=n-1;i++)
	{
		cin >> p[i].x >> p[i].y >> p[i].z;
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			d[i][j]=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)+(p[i].z-p[j].z)*(p[i].z-p[j].z));
		}
	}
	for (t=0;t<(n*(n+1))/2;t++)
	{
		for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			m=0;
			for (k=0;k<n;k++)
			{
				for (s=k+1;s<=n;s++)
				{
					if (d[i][j]<d[k][s])
						m++;
				}
			}
			if (m==t)
			{
				cout<< "(" << p[i].x << "," << p[i].y << "," << p[i].z << ")"<< "-" <<"(" << p[j].x << "," << p[j].y << "," << p[j].z << ")"<< "=" << fixed << setprecision (2) << d[i][j] << endl;
			}

		}
		}
	}
	return 0;
}


