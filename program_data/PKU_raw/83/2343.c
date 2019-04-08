int main()
{
	int num=0, sco[10]={0}, gra[10]={0}, i, totalsco=0;
	float gpa=0.0, totalgpa=0.0, jd[10]={0.0};
	scanf("%d", &num);
	getchar();
	for(i=0;i<num;i++)
	{
		scanf("%d", &sco[i]);
	}
	getchar();
	for(i=0;i<num;i++)
	{
		scanf("%d", &gra[i]);
	}
	for(i=0;i<num;i++)
	{
		if(gra[i]>=90 && gra[i]<=100) jd[i]=4.0;
		if(gra[i]>=85 && gra[i]<=89) jd[i]=3.7;
		if(gra[i]>=82 && gra[i]<=84) jd[i]=3.3;
		if(gra[i]>=78 && gra[i]<=81) jd[i]=3.0;
		if(gra[i]>=75 && gra[i]<=77) jd[i]=2.7;
		if(gra[i]>=72 && gra[i]<=74) jd[i]=2.3;
		if(gra[i]>=68 && gra[i]<=71) jd[i]=2.0;
		if(gra[i]>=64 && gra[i]<=67) jd[i]=1.5;
		if(gra[i]>=60 && gra[i]<=63) jd[i]=1.0;
		if(gra[i]<60) jd[i]=0;
		totalsco+=sco[i];
		totalgpa+=jd[i]*sco[i];
	}
	gpa=totalgpa/totalsco;
	printf("%.2f\n", gpa);
	return 0;
}