struct grade
{
	int classgrade;
	int finalgrade;
	double GPA;
}G[100];

int main()
{
	int n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d ", &G[i].classgrade);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d", &G[i].finalgrade);
	}
	for(i=0;i<n;i++)
	{
		if((G[i].finalgrade>=90)&&(G[i].finalgrade<=100))
			G[i].GPA=G[i].classgrade*4.0;
		if((G[i].finalgrade>=85)&&(G[i].finalgrade<=89))
			G[i].GPA=G[i].classgrade*3.7;
		if((G[i].finalgrade>=82)&&(G[i].finalgrade<84))
			G[i].GPA=G[i].classgrade*3.3;
		if((G[i].finalgrade>=78)&&(G[i].finalgrade<=81))
			G[i].GPA=G[i].classgrade*3.0;
		if((G[i].finalgrade>=75)&&(G[i].finalgrade<=77))
			G[i].GPA=G[i].classgrade*2.7;
		if((G[i].finalgrade>=72)&&(G[i].finalgrade<=74))
			G[i].GPA=G[i].classgrade*2.3;
		if((G[i].finalgrade>=68)&&(G[i].finalgrade<=71))
			G[i].GPA=G[i].classgrade*2.0;
		if((G[i].finalgrade>=64)&&(G[i].finalgrade<=67))
			G[i].GPA=G[i].classgrade*1.5;
		if((G[i].finalgrade>=60)&&(G[i].finalgrade<=63))
			G[i].GPA=G[i].classgrade*1.0;
		if(G[i].finalgrade<=60)
			G[i].GPA=0;
	}
	double allG=0;
	double allcG=0;
	for(i=0;i<n;i++)
	{
		allG=allG+G[i].GPA;
	}
	for(i=0;i<n;i++)
	{
		allcG=allcG+G[i].classgrade;
	}
	float g=allG/allcG;
	printf("%.2f", g);
	return 0;
}
