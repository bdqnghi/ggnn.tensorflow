double score(int i)
{
	double p;
	if (90<=i && i<=100) p=4.0;
	if (85<=i && i<=89) p=3.7;
	if (82<=i && i<=84) p=3.3;
	if (78<=i && i<=81) p=3.0;
	if (75<=i && i<=77) p=2.7;
	if (72<=i && i<=74) p=2.3;
	if (68<=i && i<=71) p=2.0;
	if (64<=i && i<=67) p=1.5;
	if (60<=i && i<=63) p=1.0;
	if (i<60) p=0.0;
	return p;
}
void main()
{
	double gpa;
	gpa=0;
	int n,i,nm[10],sc[10],s;
	s=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d",&nm[i]);
	for (i=1;i<=n;i++) scanf("%d",&sc[i]);
	for (i=1;i<=n;i++) 
	{
		//printf("%.2lf\n",score(sc[i]));
		gpa=gpa+score(sc[i])*nm[i];
		s=s+nm[i];
	}
	//printf("%.2f\n",gpa);
	//printf("%d\n",s);
	gpa=gpa/s;
	printf("%.2f\n",gpa);
}