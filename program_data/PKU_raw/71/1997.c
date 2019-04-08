int main()
{
	int n,i,j,t,s;
	int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	struct {
		int y,m1,m2;
	}an[200];
	scanf ("%d\n",&n);
	s=0;
		

	for (i=0;i<n;i++)
	{
	
		scanf ("%d%d%d",&an[i].y,&an[i].m1,&an[i].m2);
		if ((an[i].y%4==0&&an[i].y%100!=0)||(an[i].y%400==0)) {b[2]=29;}
		else b[2]=28;
		if (an[i].m2<an[i].m1)
		{
			t=an[i].m1;
			an[i].m1=an[i].m2;
			an[i].m2=t;
		}
	
		for(j=an[i].m1;j<an[i].m2;j++)
		{
			
			s=s+b[j];
		}
		if (s%7==0)
		{
			printf("YES\n");
		}
		if (s%7!=0) printf ("NO\n");
		s=0;
	}
	
	return 0;
}
