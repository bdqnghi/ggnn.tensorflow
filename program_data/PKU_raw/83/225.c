float GPA(int a)
{
	if(a>=90) return 4;
		else if (a>=85) return 3.7;
		else if (a>=82) return 3.3;
		else if (a>=78) return 3;
		else if (a>=75) return 2.7;
		else if (a>=72) return 2.3;
		else if (a>=68) return 2;
		else if (a>=64) return 1.5;
		else if (a>=60) return 1;
		else return 0;
}
void main()
{
	int n,i,s,a[100]={0};
	float SumGPA=0,Points=0,AveGPA=0;
	scanf("%d",&n);
	SumGPA=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&s);
		Points+=s;
        a[i]=s;	
	}
	for(i=1;i<=n;i++) 
	{
		scanf("%d",&s);
		SumGPA+=GPA(s)*a[i];
	}
	AveGPA=SumGPA/Points;
	printf("%.2f\n",AveGPA);
}