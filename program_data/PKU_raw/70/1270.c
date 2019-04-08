double x[1000], y[1000];
double Calc_Dis(int i,int j)
{
	double ret;
	ret = sqrt( (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) );
	return ret;
}

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	double dis, maxd = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)	
		{
			dis = Calc_Dis(i,j);
			if(dis > maxd)
				maxd = dis;
		}
	}
	printf("%.4f\n",maxd);
	return 0;
}
