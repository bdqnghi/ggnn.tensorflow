float ji(int a)
{
	if(a>=90&&a<=100)
	return 4.0;
	else if(a>=85&&a<=89)
	return 3.7;
	else if(a>=82&&a<=84)
	return 3.3;
	else if(a>=78&&a<=81)
	return 3.0;
	else if(a>=75&&a<=77)
	return 2.7;
	else if(a>=72&&a<=74)
	return 2.3;
	else if(a>=68&&a<=71)
	return 2.0;
	else if(a>=64&&a<=67)
	return 1.5;
	else if(a>=60&&a<=63)
	return 1.0;
	else return 0.0;
}
int main()
{
	int n,defen[N],xuefen[N],sum=0,i;
	float jidian[N],GPA=0;//?????????????GPA
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
	    sum+=xuefen[i];
	}
	for(i=0;i<n;i++)
	{
			scanf("%d",&defen[i]);
			jidian[i]=ji(defen[i]);
			GPA=GPA+jidian[i]*xuefen[i];
	}
    GPA=GPA/sum;
    printf("%.2f",GPA);
	return 0;	 
}