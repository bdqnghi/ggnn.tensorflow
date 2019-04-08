int main()
{
	int n,i;
	double gpa,jd[10],xuefenjd[10],xuefen[10],defen[10],sum1=0.0,sum2=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&(xuefen[i]));
	}
	for(i=0;i<n;i++){
		scanf("%lf",&(defen[i]));
	}
	for(i=0;i<n;i++){
		if(defen[i]>=90&&defen[i]<=100)
			jd[i]=4.0;
		if(defen[i]>=85&&defen[i]<=89)
			jd[i]=3.7;
		if(defen[i]>=82&&defen[i]<=84)
			jd[i]=3.3;
		if(defen[i]>=78&&defen[i]<=81)
			jd[i]=3.0;
		if(defen[i]>=75&&defen[i]<=77)
			jd[i]=2.7;
		if(defen[i]>=72&&defen[i]<=74)
			jd[i]=2.3;
		if(defen[i]>=68&&defen[i]<=71)
			jd[i]=2.0;
		if(defen[i]>=64&&defen[i]<=67)
			jd[i]=1.5;
		if(defen[i]>=60&&defen[i]<=63)
			jd[i]=1.0;
		if(defen[i]<60)
			jd[i]=0.0;
		xuefenjd[i]=1.0*xuefen[i]*jd[i];
		sum1+=xuefen[i];
		sum2+=xuefenjd[i];
	}
	gpa=1.0*sum2/sum1;
	printf("%.2lf\n",gpa);
	return 0;
}