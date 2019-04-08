int main()
{
	int shang[10] = {100,89,84,81,77,74,71,67,63,59};
	int xia[10] = {90,85,82,78,75,72,68,64,60,0};
	double jidian[10] = {4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.5,1.0,0};
	int n;
	cin>>n;
	int xuefen[n];
	double fenshu[n];
	int sumxuefen = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>xuefen[i];
		sumxuefen += xuefen[i];
	}
	for(int i = 0; i < n; i++)
		cin>>fenshu[i];
	double sum = 0;	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 10; j++)
			if(fenshu[i] >= xia[j] && fenshu[i] <= shang[j])
			{
				fenshu[i] = jidian[j]*xuefen[i];
				sum += fenshu[i];
			}
	}
	
	double result = sum / sumxuefen;
	printf("%.2f",result);
	
	return 0;
}
				
