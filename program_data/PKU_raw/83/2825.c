int main()
{
	int c, n, i, x[20], sx=0;
	double GPA=0.0;
	scanf("%d", &n);
	for(int k=0; k<n; k++)
	{
		scanf("%d", &x[k]);
	}
	for(i=0; i<n; i++)
	{
		scanf("%d", &c);
		if(c>=90&&c<=100) GPA+=x[i]*4.0;
		if(c>=85&&c<=89) GPA+=x[i]*3.7;
		if(c>=82&&c<=84) GPA+=x[i]*3.3;
		if(c>=78&&c<=81) GPA+=x[i]*3.0;
		if(c>=75&&c<=77) GPA+=x[i]*2.7;
		if(c>=72&&c<=74) GPA+=x[i]*2.3;
		if(c>=68&&c<=71) GPA+=x[i]*2.0;
		if(c>=64&&c<=67) GPA+=x[i]*1.5;
		if(c>=60&&c<=63) GPA+=x[i]*1.0;
		if(c<=59) GPA+=0.0;
		sx+=x[i];
	}
	printf("%.2lf", GPA/sx*1.0);
	return 0;
}