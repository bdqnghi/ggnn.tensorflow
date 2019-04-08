int main()
{
	int n;
	double x, y, sc = 0;
	double sum = 0, gpa;
	double course[12], cre[12];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >>x;
		cre[i] = x;
		sc += x;
	}
	for(int i = 0; i < n; i++)
	{
		cin >> y;
		if(y >= 90 && y <=100)	
			course[i] = 4.0;
		if(y >= 85 && y <=89)	
			course[i] = 3.7;
		if(y >= 82 && y <=84)	
			course[i] = 3.3;
		if(y >= 78 && y <=81)	
			course[i] = 3.0;
		if(y >= 75 && y <=77)	
			course[i] = 2.7;
		if(y >= 72 && y <=74)	
			course[i] = 2.3;
		if(y >= 68 && y <=71)	
			course[i] = 2.0;
		if(y >= 64 && y <=67)	
			course[i] = 1.5;
		if(y >= 60 && y <=63)	
			course[i] = 1.0;
		if(y < 60)	
			course[i] = 0.0;
	}
	for(int i = 0; i < n; i++)
		sum += course[i] * cre[i];
	gpa = sum / sc;
	printf("%.2f\n", gpa);
	return 0;	
}