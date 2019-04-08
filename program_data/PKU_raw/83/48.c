

int main(int argc, char* argv[])
{
	int n,defen[10],xuefen[10],sumxuefen=0,a,i;
	float zhi,jidian[10],b,sumjidian=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		sumxuefen=sumxuefen+xuefen[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&defen[i]);
		a=defen[i];
		if(a>=90)
			b=4.0;
		if(a>=85&&a<=89)
			b=3.7;
		if(a>=82&&a<=84)
			b=3.3;
		if(a>=78&&a<=81)
			b=3.0;
		if(a>=75&&a<=77)
			b=2.7;
		if(a>=72&&a<=74)
			b=2.3;
		if(a>=68&&a<=71)
			b=2.0;
		if(a>=64&&a<=67)
			b=1.5;
		if(a>=60&&a<=63)
			b=1.0;
		if(a<60)
			b=0.0;
		jidian[i]=b;
		sumjidian=sumjidian+xuefen[i]*jidian[i];
	}
	zhi=sumjidian/sumxuefen;
	printf("%.2f",zhi);
	return 0;
}

