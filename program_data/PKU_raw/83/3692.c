int main ()
{
	int xf[10],cj[10];
	float jd[10],jdhe=0,zong=0,gpa=0;
	int n,i;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&xf[i]);
	}
	for (i=0;i<n;i++){
		scanf("%d",&cj[i]);
	
	if (cj[i]>=90 && cj[i]<=100){
		jd[i]=4.0;
	}
	if (cj[i]>=85 && cj[i]<=89){
		jd[i]=3.7;
	}
	if (cj[i]>=82 && cj[i]<=84){
		jd[i]=3.3;
	}
	if (cj[i]>=78 && cj[i]<=81){
		jd[i]=3.0;
	}
	if (cj[i]>=75 && cj[i]<=77){
		jd[i]=2.7;
	}
	if (cj[i]>=72 && cj[i]<=74){
		jd[i]=2.3;
	}
	if (cj[i]>=68 && cj[i]<=71){
		jd[i]=2.0;
	}
	if (cj[i]>=64 && cj[i]<=67){
		jd[i]=1.5;
	}
	if (cj[i]>=60 && cj[i]<=63){
		jd[i]=1.0;
	}
	if (cj[i]<60){
		jd[i]=0;
	}
	}
	
	for (i=0;i<n;i++)
	{
		jdhe+=xf[i]*jd[i];
		zong+=xf[i];
	}
	gpa=jdhe/zong;
	printf("%.2f",gpa);

	return 0;
}