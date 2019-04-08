int main()
{
	int n,hr[10],scr[10];
	double s=0,GPA,sc[10];
	scanf("%d",&n);
	int i,shr=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&hr[i]);
		shr+=hr[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&scr[i]);
		int x=scr[i];
		if(x>=90&&x<=100)
			sc[i]=4.0;
		if(x>=85&&x<=89)
			sc[i]=3.7;
		if(x>=82&&x<=84)
			sc[i]=3.3;
		if(x>=78&&x<=81)
			sc[i]=3.0;
		if(x>=75&&x<=77)
			sc[i]=2.7;
		if(x>=72&&x<=74)
			sc[i]=2.3;
		if(x>=68&&x<=71)
			sc[i]=2.0;
		if(x>=64&&x<=67)
			sc[i]=1.5;
		if(x>=60&&x<=63)
			sc[i]=1.0;
		if(x<60)
			sc[i]=0;
		s+=sc[i]*hr[i];
	}
	GPA=s/shr;
	printf("%.2f\n",GPA);
	return 0;
}