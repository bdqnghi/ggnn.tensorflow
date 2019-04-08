
void main()
{
	float xuefen(int);
	int n;
	float GPA=0;
	int total_grade=0;
	int mark[10]={0},grade[10]={0};
	float mark_gra[10]={0};
	int i;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&grade[i]);
		total_grade=total_grade+grade[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&mark[i]);
		mark_gra[i]=xuefen(mark[i]);
	}


	for(i=0;i<n;i++)
		GPA=GPA+mark_gra[i]*grade[i];

	GPA=GPA/total_grade;
	printf("%.2f\n",GPA);
}


float xuefen(int x)
{
	float f_x=0;
	if(x>=90)
		f_x=4.0;
	if(x>=85&&x<=89)
		f_x=3.7;
	if(x>=82&&x<=84)
		f_x=3.3;
	if(x>=78&&x<=81)
		f_x=3.0;
	if(x>=75&&x<=77)
		f_x=2.7;
	if(x>=72&&x<=74)
		f_x=2.3;
	if(x>=68&&x<=71)
		f_x=2.0;
	if(x>=64&&x<=67)
		f_x=1.5;
	if(x>=60&&x<=63)
		f_x=1.0;
	if(x<60)
		f_x=0;
	return f_x;
}
